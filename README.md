## Deep Learning
This project only exists to help me learn about deep learning

## Introduction
Deep learning is a subfield of machine learning. Machine learning is where machines learn to 
perform tasks they were not specifically programmed to perform.
Machines observe a pattern.

There are problems that can be solved using by increasing/descreasing values and to check the result. 
For example trying to get closer to a target, we can move in a direction, take a measurment and see
if we are closer or further away. 

But there are problems where this type of error reduction does not work where the steps might cause no change,
different changes (get worse even though the previous steps allow reduced the error). In this case all the
points are given a weight and they are summed and this is the sum used to detect a reduction.

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

So each cell above would be a neuron/node and we have 28x28=784.
The value in each cell would indicate the brightness. 0.0 would be black and 1.0 white, 
and anything inbetween something in the gray scale. This value is called an activation.
These 782 neurons make up the first layer in our neural network. You can think of them as an 
array:
0                               784
[0.0, 0,0, 0,0,..., 0,0, 0.0, 0.0]  

The first layer/array will be the largest and the following layers smaller, the last being the smallest.
The layers inbetween the first layer and the last are called the hidden layers.
For example the second layer might contain 16 nodes, and there might more than one hidden layer. The layers
are connected and these connection are weighted. This means that every node in the first layer is connected
to every node in the second layer.

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

