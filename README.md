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

x1 (1) --w1=6--->  +------------+
x2 (0) --w2=3--->  | Perceptron | ---> output
x3 (1) --w3=3--->  +------------+

output = 0 if w1x1 + w2x2 + w3x3 <= threshold for this perceptron
output = 1 if w1x1 + w2x2 + w3x3 > threshold for this perceptron

Now, normally there would be many perceptrons and the output would be the input to the 
next layers perceptrons. All output in the first layer will be inputs to all of the second layers
perceptrons.

The above can also be written as:
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

So in our case upon we have an image with a human written digit. This will fire all the neurons in the
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

This done for each neuron which make sense as all the neurons are connected. This value is then often
squashed into av value between 0.0-1.0. Also a bias is added before squashing but for about that later.

We usually want our weighted sum to be a value between 0-1 so we put it through a function like
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

### Cost function
Trying to manually configure all the weights and bias would be a huge undertaking. What we want is for the 
computer to learn how to make the adjustments itself. Kind of like the example where we want to program a 
robot to advance towards a target, take one step, evaluate if it is closer or further way, and the adjust
appropriately. For example, say that we know that the result should have evaluated to the number 3, this
would give an array of:
[0.00, 0.00, 0.00, 1.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00]
And lets say the result of our randomly configured net work produced:
[0.42, 0.29, 0.18, 0.83, 0.71, 0.01, 0.63, 0.83, 0.99, 0.60]

[0.00, 0.00, 0.00, 1.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00]
[0.42, 0.29, 0.18, 0.83, 0.71, 0.01, 0.63, 0.83, 0.99, 0.60]

0.1764 <- (0.42 - 0.00)^2 +
0.0841 <- (0.29 - 0.00)^2 +
0.0324 <- (0.18 - 0.00)^2 +
0.0289 <- (0.83 - 1.00)^2 +
0.5041 <- (0.71 - 0.00)^2 +
0.0001 <- (0.01 - 0.00)^2 +
0.3969 <- (0.63 - 0.00)^2 +
0.0289 <- (0.83 - 0.00)^2 +
0.9801 <- (0.99 - 0.00)^2 +
0.3600 <- (0.60 - 0.00)^2 +
= 2.8529
A small sum is produces when the network is working better and is closer to its target, and larger when it is
off. And that is only for a single digit. 


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


Ax = b
A is the input data matrix.
b is the column vector of outcomes for each row in the A matrix.
x is the weights which is a vector of parameters.

### Connection weights
Weights on connections in a neural network are coefficients that scale (amplify or minimize) the input signal to a given neuron in the network. 


### Bias
Per neuron basis, so each neuron has it's own value. Remember that this is one of the values that
can be altered so that the network can learn (the other values are the weights). 

Each neuron receives the weighted sum from the previous layer (note that this means all the input
values and their weights: (w1*x1 + w2*x2+...+wn*xN).
neuron(double sum);
Now, what the neuron does is it computes/determines whether is should output a value to the next
layer. It does so using an activation function, for example ReLu or Sigmoid or any of the others.

So, take the following network that does not use biases:
Input     Weights        Neuron (inside the function)
x1 = 1 ---(-0,55)---->   double sum = 1 * (-0,55) + 2 * 0.1; // -0,35   
x2 = 2 ---(0.1)------>   double output = relu(sum); // 0

With out a bias this neuron would not activate (well the outputu will be 0 and the will not affect
the next layer as anything weight multipled with it will be 0 and that 0 will be added to the 
next layers weighted sum which will not do anything).
In this case the threshold is anything below zero will cause the neuron to output zero. But what if
we wanted to move this threshold, like say it is acceptable that any value equal to or greater than
-1 should be allowed.

So, take the following network with biases:
Input     Weights        Neuron (inside the function) b = 1
x1 = 1 ---(-0,55)---->   double sum = 1 * (-0,55) + 2 * 0.1 + b; // 0,65
x2 = 2 ---(0.1)------>   double output = relu(sum); // 0.65

We set the bias to the opposite of the acceptable value, like in the above case we are saying
that the threshold should be -1 or larger and we set the bias to 1.

Biases are scalar values added to the input to ensure that at least a few nodes per layer are activated regardless of signal strength. 
Biases allow learning to happen by giving the network action in the event of low signal. They allow the network to try new interpretations 
or behaviors. Biases are generally notated b, and, like weights, biases are modified throughout the learning process.


### Activation
The functions that govern the artificial neuron’s behavior are called activation functions. The transmission of that input is known as forward propagation. 
Activation functions transform the combination of inputs, weights, and biases. Products of these transforms are input for the next node layer. 
Many (but not all) nonlinear transforms used in neural networks transform the data into a convenient range, such as 0 to 1 or –1 to 1. 
When an artificial neuron passes on a nonzero value to another artificial neuron, it is said to be activated.

### Linear Regression using Least Squared Criterion
We are trying to find a line where the distance to our data points is as small as possible.
This is done by drawing a line and calculating the

y = mx + b
or in statistics:
y = β0 + β1x + ε

ε = elipson

^
y = β0 + β1x
β0 is the y-intercept population parameter.
β1 is the slope of the line population parameter.
ε is our error term and is the unexplained variation in y. What does this mean?

E(y) = β0 + β1x

The expected mean or value of y for a given value of x.
  ^
  |
  |--------------
y |------->         y will be the mean for x
  |-------|------
  |       |
  |       |
  ---------------------->
          x

Lets say you have multiple data entries for point x and not just one. What we do is we calculate
the mean of those points and say that is what y would be if we are given x. 
Now, what if there are not points at all for x? Then we can look at the neighbors and caclulate
the means of them and take that mean (I think). So we are always estimating/approximating.
Y is the mean of a distribution around the y's for x.

E = β0 + 0(x) 
E(y) = 3 + 2x
x = 0;
E(y) = 3 + 2x
E(y) = 3 + 0
E(y) = 3
  ^
  |
y |---------------------------------------->
  |       |
  |       |
  |       |
  ---------------------->
          x


E(y) = β0 - β1x
Means that the slope will be negative down from the left.
Notice that the sign and the value of β1 determines the slope.

Now, if we knew the population parameters, β0 and β1 (the y-intercept and the slope, we could
use the equation directly. But in real life we almost never have this information but only have
sample data and have to estimate the values for the parameters. For sample data the equation looks
like:
y_hat = b0 + b1x
y_hat is the point estimator of E(y). The mean value of y for the given x

When using linear regression with two variables we are always comparing that with the result of
when we pretent that there is no second variable (x = 0), which will make the slope/β1 0.
y = β0 + β1
β0 represents the ideal y-intercept if you have plotted/graphed the entire population.
So we are stating that all x and y are related according to a straight line. But not all points
will be exactly on this straight line. There is going to be some deviation which is represented
as epsilon ε in the Population Regression Function:
y = β0 + β1 + ε

This is a theoretical distance from every point to the line. We can't calculate this term but
it does exist in theory. This is distinct from the lower case e which is the error term which is
the distance from the point to the expected average (sample regression line).


       |--------*  /              = * (Yi) is the actual point value for x
       |Yi-y_hat|/               SSE    
       |--------/
       |       X-------------+   = X is the predicted point value for x
SST    |      /              |
       |     / y_hat - y_bar |   SSR
       |    /                |
y-bar  |---/---------------------------------->
       |  /    |
       | /     |
       |       |
       ---------------------->
               x

y-bar is the averge when we pretend that we don't have a value for x (x = 0).

y_hat - y_bar is the distance from the expected/predicted average to the actual
average. In this case we expect the value (the dependant value) to be higher
than the mean. 
Sum of Squares Residuals (SSR or RSS) = ∑(Y_hat₁ - y_bar)²
Remember that the residuals are the distances from the predicted point to the average, that we then
square and then summ all the squares.

But we can see that our value is higher that this, which is higher
still and called unexpected deviation:
ei = Y(i) - Y_hat(i)
Sum of Squares Predictions (SSE) = ∑(Y₁ - y_hat₁)²

Sum of Squares Total (SST or TSS) = SSR + SSE
Look at the graph above and you can see that we are now looking for the distance from the
actual point down to the actual average.

R2 = SSR/SST
If our SSE is high R2 will be low, which means that our points are further apart from the 
line. And if SSE is low it means that our points are close to the line. It tells us a little
about the fit of our model.



y-hat indicates that this is an approximation.

The formula for calculating beta1 (the slope) is:
      sum ( (x-x_mean) (y - y_mean) )
b1 = ------------------------------
      sum ( (x - x_mean)^2

What we are doing is finding the area of the points and summing them up. Then we are divding this
with the area of the distance to the x mean.

For b0/b/y_intercept we are taking the calculated slope from above and multiplying that 
with the x mean. 

So we have two ways to move the line, the slope and also the y intercepts. Our goal is to move the
line so that the area between the points and the line are as small as possible.
We can add new points and also use the `estimate` function to get an estimated y value for a specified
x value.

One can also use linear regression with multiple independant/feature variables. In this case
the forumla looks like this:

    y = β0 + β1x₁ + β2x₂ + βpXp + ε

We can reason about the the features and their coefficients like this; 

    y = 88 + 3x₁ + 4x₂

88 is β0 which is still the y-intercept.
Lets says that x₁ is expenses in 1000 SEK, then we can read this as for each unit increment
of x₁ that will tripple y if we consider x₂ to be constant.

#### Logistic regression
Take the example a student passing or failing a test based on the number of hours spent studying. So
if we pass in the number of hours of study we want the function to predict the probability of the
student passing the test.


y-hat = P(y=1|x) 
Parameters: w (a vector in Rx), b (just a number)

So with the input parameter x and the paremeters w and b we should generate the output y-hat.
The function will be:
y-hat = sigmoid(wx + b)

We need a cost function to calculate the w and b parameters.
So we are trying to get w and b to be good estimates so that y-hat can be classified.
We also need an error function that tells us how well the prediction is.

Loss function is for a single training example.
L(y-hat, y) = -( y * log(y-hat) + (1 - y) log(1 - y-hat))

Lets take a closer look at the above:
(y * log y-hat)
The logarithm is asking what the value of y-hat was raised to. 
For example, say y-hat was 16 then this would be:
log 16 = 4 (if we are using the base 2 which I think is the default when not specified).

We take that value and multiply it against y which is the known correct value for y.
Then we add this to (1 - y) log(1 - y-hat)
Remember that y-hat will be the result of the sigmoid function above.

Now, the result, y, will be either 1 or 0.
When y = 1:
= -( y * log(y-hat) + (1 - y) log(1 - y-hat))
= -( 1 * log(y-hat) + (1 - 1) log(1 - y-hat))
= -(     log(y-hat) + (0)     log(1 - y-hat))
= -log(y-hat)

And when y = 0:
= -( 0 * log(y-hat) + (1 - 0) log(1 - y-hat))
= -(                + (1) log(1 - y-hat))
= -((1) log(1 - y-hat))
= -(log(1 - y-hat))

Cost function is for the entire training set.
           1
J(w, b) = --- Sum( L(y-hat(i), y(i)))
           m
The J function is implemented using Gradient Decent.

loop {
  w = w - learning_rate * dj(w)/dw
}
The learning_rate is denoted as alpha, and we take that times the derivative at point w.
Notice that if the dirivative/slope is postive we will be subtracting w.

### Sigmoid
The forumla for the sigmoid function is:
   1
 ------
 1 + e^-x

sigmoid(-3) = 0.047
sigmoid(-2) = 0.11
sigmoid(-1) = 0.26
sigmoid(0)  = 0.5
sigmoid(1)  = 0.73
sigmoid(2)  = 0.88
sigmoid(20) = 0.9999..

If we visualize this the curve will be S-shaped. So higher are closer to 1 and lower values
are closer to 0. This mapping of input values to output values between 0 and 1 can be useful
when doing binary classification.

If we want to find out the rate of change for a particular point we can take the derivative:
So we nudge the x value of interest, say 0 just a little, like 0.001 and then calculate the
slope of the tanget line between these two points:

         f(x + dx) - f(x)     f(0 + 0.001) - f(0)    0.50025 - 0.5
df/dx =  ---------------- =   ------------------- =  ------------- = 0.25
              dx                   0.0001               0.0001

We want a function that we can plug in any x value and get the rate of change at that point, this
is where we want have a derivative function. How do we derive that for the sigmoid function?

We can rewrite the sigmoid function like this if we like:
  1
-------  = (1 + e^-x)^-1
1 + e^-x

f(x) = (1 + e^-x)^-1

We can use the chain rule here: 
f(g(x)) is f`(g(x)) * g`(x)

So lets break this up in to the outer/inner functions:
outer = (1 + e^-x )^-1
inner = (1 + e^-x)
f`(x) = outer`(x) * inner`(x)

outer`(x) = -1(1 + e^-x)^-2
          =      -1
           ----------------
              (1 + e^-x)^2

inner`(x) = (1 + e^-x)            // 1 is a constant and has not slope so it is zero 
          = (0 + e^-x)
          = e^-x                 // now this is also a compound function with an outer
                                 // function of e^-x and an inner of -x
                                 // If you think of -x as being -1x the derivtive of that 
                                 // would be -1
          = e^-x * (-1)
          = -e^-x

So that would leave us with:
f`(x) = -1(1 + e^-x)^-2 * (-e^-x)
or
              -1
f`(x) =  ------------- * -e^-x
          (1 + e^-x)^2

We can multiply -e^x-x with -1 and get:

              e^-x
      =  ------------- 
          (1 + e^-x)^2

We can add 1 and subtract one to the numerator. 


          e^-x + 1 - 1
      =  ------------- 
          (1 + e^-x)^2

This will not change the result as this is zero but it does allow us to 
rewrite this as

           1 + e^-x             1
      =  -------------  -  ------------
          (1 + e^-x)^2     (1 + e^-x)^2

Now, we can cancel out one of the (1 + e^-x) from the denominator:

              1                  1
      =  -------------  -  ------------
          (1 + e^-x)       (1 + e^-x)^2

And notice that we have the sigmoid formula - the sigmoid forula squared!
 
     =  sigmoid(x) - sigmoid(x)^2
              
So we can write this as:
sigmoid(x)(1 - sigmoid(x)) as that would expand to

              1                  1
      =  -------------  -  ------------
          (1 + e^-x)       (1 + e^-x)^2


One thing to note is that the derivative of the sigmoid function can be expressed
in terms of the function itself. This is useful as it means when the derivative is
used in backpropagation the result of the sigmod function can be cached and then
reused without having to calculate it again, improving the performance.

### Computation graph
In a neural network we have two stages, a forward stage where the output of the network
is computed. This is followed by a backward stage which is where we compute gradients/derivatives.

J(a, b, c) = 3(a + bc)

Lets named the following functions for the above:
u = bc
v = a + u
J = 3 v


a ----------------------+
                        |   
b \     +----------+    +-->+-----------+        +---------+
   ---->| u = bc   | ------>| v = a + u | -----> | J = 3v  |
c /     +----------+        +-----------+        +---------+

So lets say a = 5, b = 3, and c = 2. That would give us:
u = 6
v = 11
J = 33

In this case J would be the cost function that we are trying to minimize and this is done in the 
forward phase. 

a ----------------------+
                        |   
b \     +----------+    +-->+-----------+        +---------+
   ---->| u = bc   | ------>| v = a + u | -----> | J = 3v  |
c /     +----------+        +-----------+        +---------+

Now, lets say we want to compute the J`(v)
J`(v) = 3
Take the value of v and nudge it a little, how would that change the value of J?
J = 3v
v = 11 and if we nudge it to 11.001 that will make J become 33.003

dJ
-- = 3
dv

After doing this we have gone back one step in the computation graph.

Now, lets see what happens if we change a. Well this will change v which in turn 
will change J. So if we nudge a:
a = 5.001
v = 11.001
J = 33.001

dJ       dJ dJ
-- = 3 = -- -- = (3)(1)
da       gv da

(This is the chain rule in work here).
The reason that dj/da is one is because when we increase a, v changes by the same amount, hence 1:
dv
-- = 1
da 

Now, lets see what happens if we change a. Well this will change v which in turn 
will change J. So if we nudge a:
u = 6.001
v = 11.001
J = 33.001

dJ        dJ  dJ
-- = 3 =  --  -- = (3)(1)
du        dv  du

Let's now change the value of b to see how that affects the slope of J:
dJ   dJ  dJ
-- = --  -- = (3)(2) = 6
db   du  dd

b = 3.001
u = bc = (3.001)(2) = 6.002
v = 5 + 6.002
J = (11.002)(3) = 33.006 

Notice that we are using the derivative computed in previous steps (in the back propagation that is)
for ones earlier in the computation graph. I think this is the whole reason for the 
back propagation phase.
So the forward phase computes the cost and the back propagation to compute derivatives.

What have we got so far:
z = w^Tx + b
y-hat = a = sigmoid(z)       // note that a is the output of the logistic regression
loss(a, y) = -(y log(a) + (1 - y) log( 1 - a))

Note that w^T is the transpose of the weights and then taking the dot product with x, so that
becomes (w(1) * x(1) + w(2) + x(2)) + b.

X(1) ---->
W(1) ---->  +-----------------------------+       +------------------------+      +------------+
X(2) ---->  | z = w(1)x(1) + w(2)x(2) + b | ----> | y-hat = a = sigmoid(z) | ---> | loss(a, y) |
W(2) ---->  +-----------------------------|       +------------------------+      +------------+
b    ---->

The paremeters in the above case are w anb b, and these are the values that we want to modify in
order to reduct the output value of the loss function.

Derivative of dL/da:
dL(a, y)    y    1 - y
-------- =  - +  -----
   da       a    1 - a

dL(a, y)    dL(sigmid(w(1)*x(1) + w(2)*x(2) + b))
-------- =  -------------------------------------
   da                      da

Recall that the derivative of 'a' was:
sigmoid(x) - sigmoid(x)^2

How is that derived from -(y log(a) + (1 - y) log( 1 - a)) ? 

Logistic regression 
Tries to predict the probability for a given input that it belongs to a certain class. This solution  differs from logistic regression as the output is a certain class, say a binary either 1 or 0. 
In cases like this trying to use a scatter plot would basically place point in two lines, they would
either be part of the ones or the zeros. Not having what is called a normal distribution other types of regressions (like linear, multiple regression) are not suitable.
The predicted values of the dependant variable is between 0 and 1 since it is a probability.

The assumption here is that the input space can be divided into two regions which is separated
by a linear border. In two dimensions that would be a straight line, in three dimentions it would
be a plane.
P\ -> the probability that a certain data point belongs to class `\'.
P/ -> would then be (1 - P\)


Derivative of dL/dz:
dL(a, y)    dl    da
-------- =  -- *  --  = a - y
   dz       da    dz

dL
-- = x(1) * dz
dw(1)

dL
-- = x(2) * dz
dw(2)

dL
-- = dz
db

w(1) = w(1) - learning_rate * dw(1)
w(2) = w(2) - learning_rate * dw(2)
b = b - learning_rate * db

Cost function
            1
J(w, b) =  --- Sum(loss(y_hat^i, y^i))
            m 

### Input data

X(1) ---->
X(2) ---->  
X(3) ---->  
X(4) ---->  
When you see input data like this remember that they are one single input, this could be the pixels
of a single image, or each item could be some value like the size of a house, the number of rooms, etc. For each such training data entry we would also have an expected output which we use to compare
with the actual outcome.

The training set is all the inputs we want to train on. So these would be a data structure with one
entry being the four values (our input above) and the expected output for that input.
The loss function predicts one such entry, and then the cost function. 


If training_data was a data structure with the first entry the vector of features and the second value the expected output value (y).

Think of w and b on horizontal axis in a diagram:
J(w, b) cost_function(w, b)
      ^
      |
      |
      |
      |
      |-----------------> b
     /
    /
   /
 /
w
So the output of the cost function of w and b will be some position above the horizonal plane.
The cost function in our case is a convex function and looks like a bowl. So we can bascially give
w and b whatever values we like to initialize them and that will give some cordinate in the third
dimension (the height). The goal is for this hight to be also low as possible.

Lets take b out of the picture for a moment to simpilfy this a little:
      J(w) 
      ^  \            /
      |   \          /
      |    \        /
      |     \______/
      |
      |-----------------> w

We start with a random value for w which we pass to J(w) which will land somewhere in the
graph above. Then we can find the derivative of that point. If this value is positive then 
this slope is going upwards. In this case we take that value -w as we want to go downwards.

double rate = 0.01;
double w = 0.0;
do {
             dJ(w)
  w += w - α ----- 
              dw
} while (w <= lowest_point);

Alpha (α) is the learning_rate which is how much we should step with each iteration

      J(w) 
      ^  \            /
     4|   \          *
     3|    \        /
     2|     \______/
     1|              
      |-----------------> w
                     ^
Looking at the point above you can imaging a tangent line touching the point marked with an *.
The slope of this line would be positive.
We also have to update b in the same way so really the loop would look like:
do {
             ∂J(w, b)
  w += w - α ----- 
              dw

             ∂J(w, b)
  b += b - α ----- 
              db
} while (w <= lowest_point);

∂ is the sign for partial derivatives.

So I've thinking how does the x values (the features come into play here) and they do via
the cost function. We are taking the derivatives of J, our cost function,  which is:

            1
J(w, b) =  --- Sum(loss(y_hat^i, y^i))
            m 

And to 



### Adding Google Test

    $ mkdir lib
    $ mkdir deps ; cd deps
    $ git clone git@github.com:google/googletest.git
    $ cd googletest/googletest
    $ mkdir build ; cd build
    $ c++ -std=c++11 -I`pwd`/../include -I`pwd`/../ -pthread -c `pwd`/../src/gtest-all.cc
    $ ar -rv libgtest.a gtest-all.o
    $ cp libgtest.a ../../../../lib


### Single Instruction Multiple Data
Modern CPU's support [SIMD](https://github.com/danbev/learning-assembly#single-instruction-multiple-data-simd) and this can be useful for operations like the dot product. Instead of looping through 
an array which is what I initially did (I've left this code in the source for comparision) we 
can use a single operator for this.



