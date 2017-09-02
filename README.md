## Deep Learning
This project only exists to help me learn about deep learning

## Introduction
Deep learning is a subfield of machine learning. Machine learning is where machines learn to 
perform tasks they were not specifically programmed to perform.
Machines observe a pattern.

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

