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


### Supervised Machine Learning
Always tries to take an input dataset and transform it into an output dataset.
This is the type used for image recognision. As input it takes pixels and tries to detect 
if that matches a certain output image.
Or like Netflix take movies/series that you liked and predict movies you might like.

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

