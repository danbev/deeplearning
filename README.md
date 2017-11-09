## Deep Learning
This project only exists to help me learn about deep learning

## Introduction
Deep learning is a subfield of machine learning. Machine learning is where machines learn to 
perform tasks they were not specifically programmed to perform.
Machines observe a pattern.

There are problems that can be solved using by increasing/descreasing values and to check the result. 
For example trying to get closer to a target, we can move in any direction, take a measurment and see
if we are closer or further away. 

But there are problems where this type of error reduction does not work where the steps might cause no change,
different changes (get worse even though the previous steps allow reduced the error). In this case all the
points are given a weight and they are summed and this is the sum used to detect a reduction.

### Perceptrons
Is an artificial neuron which takes several binary inputs and outputs a single binary value:
x (1) -------->  +------------+
x (0) -------->  | Perceptron | ---> output
x (1) -------->  +------------+

So how is the output computed? 
It is computed by assigning an importance value each input a input. So the output is determined
by all the sum of these values, which are called weights. If the weighted sum is less than or
greater than some threshold value that determines the output 0 or 1.

x (1) --(6)--->  +------------+
x (0) --(3)--->  | Perceptron | ---> output
x (1) --(3)--->  +------------+

output = 0 if Sum of w1x1, w2x2, w3x3 <= threshold for this perceptron
output = 1 if Sum of w1x1, w2x2, w3x3 > threshold for this perceptron

output = 0 if Sum of 6x1, 3x0, -3x1 > 4

Now, normally there would be many perceptrons and the output from the would be the input to the 
next layers perceptrons. All output in the first layer will be inputs to all of the second layers
perceptrons.
         +--
output = | 0 if w*x + b <= 0
         | 1 if w*x + b > 0
         +--

### Neural networks
The goal of neural networks is to split data. Don't confuse this with anything else.

Consider the case where you have red and blue stones and you want to draw a line that separates the red stones
from the blue stones. Just like the problem of trying to
get closer to a target where we can pick could pick random posistion and make take a measurement, the equivalent
here is to randomlly place the line somewhere (this is our starting posisition). 

x = blue
o = red

  x  /  o
o o / x  x
   /

Then we are going to say that the ones to the left of the line are blue and the ones to the right are red.
But as we see this was not a great guess, there are two reds in the blue area and two blues in the red.
So we need a way for the computer to understand how 'off' it was, this called an error function. Just like
the error function for moving towards a target.


Let's look at the classic machine learning example of letter recognition where you have letters
represented by 28x28 pixels:

  0                                 27
0 +----------------------------------+
  |0.0|0.0|0.0|0.0|...0.0|0.0|0.0|0.0|
  |0.0|0.0|0.0|0.0|...0.0|0.0|0.0|0.0|
  |0.0|0.0|0.0|0.0|...0.0|0.0|0.0|0.0|
  |               ...                |
  |0.0|0.0|0.0|0.0|...0.0|0.0|0.0|0.0|
  |0.0|0.0|0.0|0.0|...0.0|0.0|0.0|0.0|
  |0.0|0.0|0.0|0.0|...0.0|0.0|0.0|0.0|
27+----------------------------------+

So each cell/pixel above would be a neuron/node and we have 28x28=784.
The value in each cell would indicate the brightness. 0.0 would be black and 1.0 white, 
and anything in between something in the gray scale. This value is called an activation.

These 784 neurons make up the first layer in our neural network. You can think of them as an 
array:
0                               784
[0.0, 0,0, 0,0,..., 0,0, 0.0, 0.0]  
Remember this is the 28x28 image represented as an array.

Each entry in the array is a neuron and has an activation value between 0.0-1.0.

The first layer/array will be the largest and the following layers smaller, the last being the smallest.
The layers inbetween the first layer and the last are called the hidden layers.
For example the second layer might contain 16 nodes, and there might more than one hidden layer. The layers
are connected and these connection are weighted. This means that every node in the first layer is connected
to every node in the second layer.

0                                                                             784 neurons
[0.0, 0,0, 0,0,                   ...,                           0,0, 0.0, 0.0]  
         (all neurons above connect to all neurons below)
   0                                                          16  neurons
   [0.0, 0.0, 0.0           ... ,                     0.0, 0.0]  
         (all neurons above connect to all neurons below)
   0                                                          16  neurons
   [0.0, 0.0, 0.0           ... ,                     0.0, 0.0]  
         (all neurons above connect to all neurons below)
      0            10  neurons
      [0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0]  
        0    1    2    3    4    5    6    7     8    9

So in our case upon we have oen image with a human written digit. This will fire all the neurons in the
first layer as this is how things get into the network. But not all neurons will fire in the next layer as
this depends on their activation values. You can think of this as the first layer splitting/detecting small
patterns in and activating on them. The next layer would splitt/detect further but this time putting together
patterns from the former layer that it knows about. For example, say we have a 0 as our human written digit,
the first layer might detect four/five pieces that are part of a loop (think zero, six, eight or nine). 
The next layer will activate all only neurons that could be part of a zero and not activate pars of a six,
eight or nine digit. In the last layer the 0 neuron should be activate due to the previous layer.

We assign a weight to each of the connections then we take all the values from the activations in the layer
and multiply it with the weight and add them all together:
w1a1 + w2a2 ... +wNaN

0 +-----------------------------------+
  |w1a1|w2a2|w3a3|...                 |
  |               ...                 |
27+-----------------------------------+

So we will have the same number of values, weight x activation, for each neuron. If the value is positive that
might mean that the neuron in question should be activate. And negative might mean that it should not be 
activated.


For human written letters the first layer might be to detect small lines, curves etc in the first layer, 
which then activates nodes in the next layer depending on the weight of connection to those nodes. How are 
these weights determined? I think this is what parameters are for 

Take all the activations from the prevoius layer and sum them:
weigh1 activation1 + ... +weightn activationn

We usually want our weighted some to be a value between 0-1 so we put it through a function like
a Sigmoid function which "squashes" the value to be between 0-1 where very positive values end up 
close to 1 and very negative valuses end up close to 0. How we configure these weights, the values
we give them are the parameters we have to tweek this layer.

Remember that each node has a value between 0.0 and 1.0 which is the nodes activation value.
The weight tells us which pixel pattern this neuron in the second layer this picking up on. But you can also
have an additional value associated with each weight which is called a bias. Even if this neuron should be
activated according to the pixel pattern perhaps it should not activate unless it is higher than a certain
value. This bias is added to the weighted sum before it is passed to the sigmoid function (squashing).
  
If we have two hidden layers with 16 neurons in each we would have:
number weights: 784x16 + 16x16 + 16x10
number bias: 16 + 16 + 10
total: 13.002

Learning is about finding the right weights and biases so that the system will solve the problem at hand.

### Gradient decent




### Supervised Machine Learning
In such a system the machine needs to know about the output dataset before hand.
This is the type used for image recognision. As input it takes pixels and tries to detect 
if that matches a certain output image. The system needs to know what images there are, 
like what a cat looks like for example.
Or like Netflix take movies/series that you liked and predict movies you might like.
Always tries to take an input dataset and transform it into an output dataset.

We are trying to use one dataset to predict the other.

What we know ---> What we want to know

### Unsupervised Machine Learning
This also transforms one dataset into another, but the output dataset is not something that is
known/understood beforehand. This is more about finding/discovering patterns.
Clustering a dataset into groups is a type of unsupervised learning. Each group would be assigned
a number and each datapoint belong to a group (same number === same group).

### Parametric 
This can be combined with supervised/unsupervised algorithms and using a fixed number of parameters.

### Non-Parametric 
This can be combined with supervised/unsupervised algorithms and using an infinte number of parameters which is determined by the input data.

### Adding Google Test

    $ mkdir lib
    $ mkdir deps ; cd deps
    $ git clone git@github.com:google/googletest.git
    $ cd googletest/googletest
    $ mkdir build ; cd build
    $ c++ -std=c++11 -I`pwd`/../include -I`pwd`/../ -pthread -c `pwd`/../src/gtest-all.cc
    $ ar -rv libgtest.a gtest-all.o
    $ cp libgtest.a ../../../../lib

