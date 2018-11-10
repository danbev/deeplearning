## Learning Linear Algebra
This document is a collection of math notes.

Is about "doing math" with vectors and linear transformations instead of numbers and functions.

### Fundamentals
When solving an equation just remember that as long as you perform the same operations on both sides
of the equals sign both sides are still equal.

#### Numbers

##### Natural Numbers
Counting numbers {1, 2, 3, 4,...}.
The symbol that is used is a capital N in blackboard bold.

##### Whole numbers
Natural numbers and zero {0, 1, 2, 3, 4,...}
The symbol is a captial W in blackboard bold.

##### Intger numbers
Whole numbers and their negatives {..., -3, -2, -1, 0, 1, 2, 3,...}
The symbol for integers is a captial Z (Zahlen is a German word for number) in blackboard bold.

The symbols  is a capital R in blackboard bold.
##### Rational numbers
Numbers that can be written as a ratio of two integers and the dominator of the ratio is not 0.
nominator          1
---------          -
denominator        2

(a ratio is a relationship between two numbers indicating how many times the first number contains
the second) which is why these numbers are called retionaly numbers.

The symbol for rational numbers is a capital Q in blackboard bold.

##### Irrational numbers
Numbers that cannot be written as a ratio of two integers. Any non-terminating number.

##### Real numbers
Combining irrational numbers with rationals gives what a set which is called the real numbers.
The symbols is a capital R in blackboard bold.

##### Complex numbers
We can't take the square root of a negative number and for this we need complex numbers.
The symbols is a capital C in blackboard bold.
TODO: more details about complex numbers.


### Multiplication and Division
Take 2 x 4 = 8 which can be throught of as 2 + 2 + 2 + 2, or 4 + 4:
```
+--+ +--+ +--+ +--+
|  | |  | |  | |  |
+--+ +--+ +--+ +--+
+--+ +--+ +--+ +--+
|  | |  | |  | |  |
+--+ +--+ +--+ +--+
```
and 8 / 4 = 2. We are asking how many groups of 4 go in 8.
and 8 / 2 = 4. We are asking how many groups of 2 go in 8

```
1
- x 3 = 1 
3
```

```
+--+   +--+   +--+    3    
|x | + |x | + |x |  = -  = 1
+--+   +--+   +--+    3
+-----------+
| x | x | x |
+-----------+
```


1
- is the same as 1/3. One of three, or how many groups of one go in three.
3
```
+--+--+--+
+x |  |  |
+--+--+--+
```

3
- x 4
4
```
+--+--+--+--+
|x |x |x |  |
+--+--+--+--+
+--+--+--+   +--+--+--+   +--+--+--+   +--+--+--+
|x |x |x | + |x |x |x | + |x |x |x | + |x |x |x | = 12
+--+--+--+   +--+--+--+   +--+--+--+   +--+--+--+
```

17x18
```
             10                7
   +----------------------+----------+
   |                      |          |
 10|    100               |   70     |
   |                      |          |
   |                      |          |
   |                      |          |
   |                      |          |
   |                      |          |
   +----------------------+----------+
   |                      |          |
 8 |     80               |   56     |
   |                      |          |
   +----------------------+----------+
```

100 + 70 + 80 + 56 = 306

### Exponential
Is the act of multiplying things together many times:
```
10^0 = 1 *          = 1
10^1 = 1 * 10       = 10
10^2 = 1 * 10*10    = 100
10^3 = 1 * 10*10*10 = 1000
```
Is defined as a^n = aaa...a (n times).

Negative exponents meant divide by:
```
10^-0 = 1 /          = 1
10^-1 = 1 / 10       = 0.1
10^-2 = 1 / 10*10    = 0.01
10^-3 = 1 / 10*10*10 = 0.001
```

```
2^-0 = 1 /                 = 1
2^-1 = 1 / 2               = 1/2
2^-2 = 1 / 2 * 2           = 1/4
2^-3 = 1 / 2 * 2 * 2       = 1/9
2^-4 = 1 / 2 * 2 * 2 * 2   = 1/16
```

Fractional exponents:
a^1/2 = 2sqrt(a) What times itself 2 times is a? 

Notice that the 2 is the root index which tells us how many times itself our answer must
be multiplied with itself to give a.

So for example
4^1/2 = 2sqrt(4^1) = 2 because 2 * 2 = 4
2^2 = 4

The 2 in front of sqrt, which is really above the radical symbol is the root index which tells us how many
times itself our answer must be multiplied by itself to give 4.

8^1/3 = 3sqrt(8^1) = 2 because 2 * 2 * 2 = 8

8^1/3 = 3sqrt(8^1) = 2 
Reverse: 2^3   = 8 

5^4/3 = 3sqrt(5^4) = 3sqrt(5*5*5*5) = 3sqrt(625) = 8,549879
5^4/3 = 3sqrt(5^4) = (3sqrt(5))^4 = 8,549879

Rules:

Example the sigmoid function:

  1
----
1 + e^-x

Our first step above is to rewrite this as a negative exponent instead of devision
  1
----     =  (1 + e^-x)^-1
1 + e^-x

So we now have:
(1 + e^-x)^-1

It is not very nice to have a negative exponent so we can get rid of that using the reciprical:
x^-m = 1/x^m

    1
-----------
(1 + e^-x)^1

Now, this can be viewed as two functions
     1             u(x)         <--- one function
y = ------------   ----
    (1 + e^-x)^1   v(x)         <--- one function

So we can use the Quotient rule:
        u(x)       u`(x) v(x) - u(x) * v`(x)
f(x) = -----  =   --------------------------
        v(x)           [v(x)]^2

  u`(x) v(x) - u(x) * v`(x)
 ---------------------------
         [v(x)]^2

The nominator is 1, a constant so it's derivative is 0:
u(x) = 1
u`(x) = 0
v(x) = (1 + e^-x)^1
v`(x) = 

To take the derivative of v(x) we need to use the chain rule.

#### Chain Rule
Can be used when you have a function can be viewed as a compsition of multiple functions.
Look at this as you have an outer function and an inner function, and you can take each separately
and multiply them
The derivative of f(g(x)) is f`(g(x)) * g`(x) 

y = (3x + 1)^2
The inner function in this case is (3x + 1), lets call it g. Calling g(x) will evaluate the body of the 
function which in this case calculated 3x + 1.
The outer function in this case is ()^2, lets call it h. Calling h(x) will evaluate (3x + 1)^2 and it
will not execute g(). 
This allows us to then have h() * g()
Note that the functions should be the derivaties multiplied.

Lets see if an example can clear this up a little. 
f(x) = (3x + 1)^2
inner` = 3x + 1  = 3
outer` = (3x + 1)^2           // power rule 
outer` = 2(3x)            
We can apply the power rule to the outer function:
f`(x) = 2(3x + 1) * (3)


Example of exponent containing x:
f(x) = e^x         which is the same as e^1x
This is a compound expression with an inner and outer function.
The outer function is e^1x and the inner is just the exponent part 1x
We can then use the chain rule:
The derivative of e^1x is just e^1x.
The derivative of 1x is just 1
f`(x) = e^1x * (1)  =  e^1x = e^x

Now if this was instead e^-1x the process is the same as above only it will give:
f`(x) = e^-1x * (-1)  =  -e^-1x = -e^-x

h(x) = (sin(x)^2
h`(x) = df/dx = 

Notice that the left hand side is already in the 1/b^n form and we are writing it in the other form.
(1 + e^-x) is the value of b in this case. But why is there

1
- = 2^-1 = 0.5
2

              1         1
16^-3/4 =  ------ =  ----------  = 0.125
           16^3/4    (16^1/4)^3

f(x) = -4 3sqrt(x)
Which is the same as 
f(x) = -4 x^1/3
And now we can use the power rule:
f(x) = -4 * 1/3  x^(1/3 - 1)
f(x) = -4 * 1/3  x^(1/3 - 3/3)
f(x) = -4/3  x^-2/3




Reciprical: 
A number whose numerator and denominator have been flipped:
2    3
- => -
3    2

### Operator precedence
* Expontents and roots
* Products and division
* Addition and subtraction

### Algebra
Is all about manipulating numbers and variables.

The expression:
x = abc
We say that x factors into a, b and c. a, b, and c are the factors of x.


#### Polynomials
Poly comes from greek and means many.
nomial comes from the latin word nomen which means name. In math we deal with terms instead of names.
Examples:
10x^7 - 9x^2 + 15x^3 + 9
6

Not a polynominal:
10x^-7 - 9x^4 + 15x^3 + 9
10x^-7 - 9x^4 + 15x^3 + 9x^0
6x^0

Terms:
10x^-7, - 9x^4, 15x^3, 9x^0
Coefficients
10, -9, 15, 9

A polynominal is the sum of a finite number of terms where each term has a coefficient, being multiplied
by a variable, being raised to a non-negative integer power.
There has to be non-negative powers for it to be a polynominal.

The difference between a point (px py) and a vector (vx, vy) is that a point always originates (is drawn)
starting from the origin. This might not be the case for vectors.

Degree of a polynominal is the largest exponent of that variable:
4x
The Degree is 1 (4^1)

4x^3 + 2x^2 - 7
The x^3 makes it Degree 3

Degree		Name		Example
0               Constant	6
1		Linear		x+3
2		Quadratic	x^2-x+2
3		Cubic		x^3-x^2+5
4		Quartic		6x^4-x^3+x-2
5		Quintic		x^5-3x^3+x^2+8


### Functions

#### Even Functions
Not to be confused with even numbers.
Think for a f(x) = x^2 and its graph. It is symmetric to the y axis, even on both sides, (1, 1), (-1, 1).
f(x) = x^2

f(1) = 1^2   = 1
f(-1) = 1^2  = 1
f(2) = 2^2   = 4
f(-2) = 2^2  = 4

A function is even if:
f(x) = f(-x)
f(1) = f(-1)

This could any function that is symetric and not just for x^2


#### Odd Functions
Not to be confused with odd numbers.

f(x) = x^3
f(1) = 1^3   = 1
f(-1) = -1^3 = -1
f(2) = -2^3  = 8
f(-2) = -2^3  = -8

A function is odd if:
f(x) = -f(-x)

#### Line 
f(x) = mx + b
m = slope of the line which is the change in y / change in x, or delta y and delta x
b = the y intercept when x is 0

(-3, 5) (2, -6)

m = -6 - 5     -11
    ------- =  ---
     2 - (-3)       



### Place value
                              10000         1000      100       10       1
 +------+------+------+------+----------+---------+--------+--------+---------+
 |      |      |      |      |          |         |        |        |         |
 +------+------+------+------+----------+---------+--------+--------+---------+
                              10^4=10000 10^3=1000 10^2=100 10^1=10  10^0 = 1

### Memory layout multi-deminsional arrays

#### Row-major
For a two demensional arrays (matrices) the first rows, then the second etc as continous memory.
```
int arr[3,3] = { { 1, 2, 3}, 
                 { 4, 5, 6},
                 { 7, 8, 9}
               };
 0  1  2   3  4  5   6  7  8
[1][2][3] [4][5][6] [7][8][9]
```

Notice that incrementing a pointer to the first element will move one column.
So to index a specific entry in a row we use:
```c++
offset = row_index * number_of_columns + column_index
```

For example [1][2]:
```c++
offset = 1 * 3 + 2
offset = 5
```

#### Column-major
Puts the first column in continuous memory, then the second etc.
```
 0  1  2   3  4  5   6  7  8
[1][4][7] [2][5][8] [3][6][9]
```

Notice that incrementing a pointer to the first element will move one row.
So to index a specific entry in a row we use:
```c++
offset = column_index * number_of_rows + row_index
```
For example [1][2]:
```c++
offset = 2 * 3 + 1
offset = 7
```

The numpy.array constructor can be used to create multi-dimensional arrays. One of the parameters 
it accepts is order, which is either "C" for C-style layout (row-major) or "F" for Fortran-style 
layout (column-major). "C" is the default. 

```python
>>> from numpy import array
>>> arr = array([[1, 2, 3], [4, 5, 6], [7, 8, 9]], dtype='uint8', order='C')
>>> arr
array([[1, 2, 3],
       [4, 5, 6],
       [7, 8, 9]], dtype=uint8)
>>> '  '.join(str(ord(x)) for x in arr.data)
'1  2  3  4  5  6  7  8  9'
```
And with Fortran order:
```python
>>> arr = array([[1, 2, 3], [4, 5, 6], [7, 8, 9]], dtype='uint8', order='F')
>>> '  '.join(str(ord(x)) for x in arr.data)
'1  4  7  2  5  8  3  6  9'
```

The memory layout is important for performance reasons and and caching in the CPU must be taken
into consideration.


### Tuple
A tuple is a finite ordered list of elements. The elements do not have to be of the same type.
Example of a five-tuple:
(1, 2, 4, 5, "something")
Compare this to a list that is an ordered collection of values of the _same type_ which is immutable.



### Vector
The word vector comes from latin vhere and means means to carry. A vector [1,2] takes the point at 
[0,0] and carries it to [1,2].
Vectors are built from components which are ordinary numbers.
Is a tuple of values (one or more) called scalars.
A vector has a magnitude which is the length of the line segment. 
A vector has a direction which is angle the line forms with the positive x-axis.

An array is of fixed size and with values of the _same type_, just like a list, but is mutable.

There is a concept of a unit vectors in the x direction (i hat which is an i with a ^ above it) and the unit
vector in the y direction (y hat).
Take the vector [3,2], is really saying scale the unit x vector by 3, and the unit y vector by 2. 

Vector addition can be though of as taking the other vector and placing it at the point of the first one.
(1,2) + (3,4) = (1 + 3, 2 + 4) = (4, 6)
We can think of this as first walking (1,2) and then from that position walking (3,4). We get to know the new
location and how to walk there by following the coordinates, but the lenght (walking in a straight line) is 
not known. For this we need the lenght which we will look at shortly.

Vector subtraction can be though 
(1,2) - (3,4) = (1 - 3, 2 - 4) = (-1, -2)
So we start at (1,2) but this time imagine the point/arrow pointing the other way. So starting from 1 on the
x-axis we walk two steps backwards to (-1,2) and then from there walk downwards -2 on the y-axis.

Scaling a vector is just multiplying x and y with a constant value. Think of this as streching the vector by
increasing the x axis and then the y-axis. 
Scaling can also be done in the negative direction in which case the vector will point in the opposite direction.

Dot product:
The dot product is about finding similarites as it uses the same dimensions, x with x,
y with y etc. 
What we are doing is trying find the projection of one vector upon the other and then 
multipyling them together. This will give us the "force" they both have in the same
direction. This uses the dot product which can be calculated in two ways, one is using
the components:

vector a dot vector b = ax*bx + by*by

and the other is using the geographical version:
vector a dot vector b = ||a|| ||b|| cosine theta
where theta is the angle between the vectors.
But how does one get the angle if it is not known? 

theta = arccos     a dot b
               ( ------------ )
                  ||a|| ||b||


This is measuring similarities.

          bx    by   
	+-----+-----+
    ax	| Dot |     |
	+-----+-----+
    ay	|     | Dot |
	+-----+-----+

(1,2) * (3,4) = 1x3 + 2x4 = 3 + 8 = 11

Notice that the result is a number and not a new or modified vector.
If the vector a * vector b = 0, then vector a and b are perpendicular:

      a ^
        |
        |
        |
        |
        +------------->
                      b

The symbol for a perpendicular vector is an upside down capital T.
So the above check could be used to check if two vectors are perpendicular, which means do that form a right
triangle (90 degrees). This for when we vector a and be are in a plane.

Example:
->           ->
a = (7, 14)  b = (2, -1)
->   ->
a  *  b = 7*2 + 14*-1 = 14 -14 = 0  it is perpendicular

        ^
        |                    a (7, 14) imaging an arrow from the origin
        |
        |
        |
        |
        |
        |
        |
        |
        |
        |
        |
        |
        +------------------------>
        |
        |   b (2, -1)
        |              


If the vectors point in the same direction , then
cos (eulers totient)


Length:
  ->                     ->
||U||^2 = x^2 + v^2 => ||U|| = sqrt(x^2 = y^2)

This is using the pythagoras theorem.

                                    +
                                   / |
                                  /  |
                   hypo          /   | vy
                                /    |
                               /     |
                              +------+
                                 vx

What we are intrested in is the length of this vector, that is we want to know the length of the hypo.

x^2 + y^2 = c^2
1^2 + 2^2 = c^2 
1   + 4   = 5
          
1^2 + y^2 = 5^2

Cross product:
Is only defined for three-dimensional vectors like (ux, ux, uz)
->
u = (ux, uy, uz)
->
v = (vx, vy, vz)

(uy*vz - uz*vy, uz*vx - ux*uz, ux*vy - uy*vx) 

TODO: figure out what we are actually calculating here. The output of the cross product is vector that is prependicular to 
both vectors.
Hmm, thinkin about this we have two vectors a and b in a plane. If a is pointing in the x direction, and b in the y direction
then the resulting vector will be pointing in the z direction:

^   ^   ^
i x j = k

So the new vector is supposted to be a new 90 degree angle vector drawn from both a and b. But that is not really possible
to do with a two dimensional plane. But if it can go out towards you, or in away from you then it is possible.

Why is this computing the way it does. If we think about the coordinates (x,y,z) I would have guessed that
we would be multiplying x with x and y with y etc. This is because the cross product is the interaction 
between different dimensions (so not x with x etc).
We are trying to measure cross-interactions. Take the Area of which is a*b, this is actually using two
different dimensions a and b, or if you can see them as x and y. The cross product is using three 
dimensions.

^   ^   ^
i x j = k

^   ^   ^
j x k = i

^   ^   ^
i x k = j

          bx    by    bz
	+-----+-----+-----+
    ax	| Dot |Cross|Cross|
	+-----+-----+-----+
    ay	|Cross| Dot |Cross|
	+-----+-----+-----+
    az	|Cross|Cross| Dot |
	+-----+-----+-----+

(1, 0, 0) x (0, 1, 0) = (0, 0, 1)

          bx    by    bz
	+-----+-----+-----+
    ax	|  1  |  0  |  0  |
	+-----+-----+-----+
    ay	|  0  |  1  |  0  |
	+-----+-----+-----+
    az	|  0  |  0  |  1  |
	+-----+-----+-----+

We are crossing something in the x dimension with something in the y dimension which gives something in the
z dimension.

We can write down the pattern: xyzxyz

->  ->   ->  ->    -> ->
a * b  = b * a  = |a||b| cos theta
->  ->             -> ->           ->                                                       ->   ->
a x b           = |a||b| sin theta n       // n = unit vector that is perpendicular to both a and b


       a /
        /
       /
      /------------>
                   b
Now a and b are on the same plane, for something to be perpendicular to both of them this vector would have
to either coming out upwards or downwards.


#### Basis
This is the unit of the coordinate system whith x, y, and z are scaled by.

### Imaginary numbers
We can take the quare root of -1 but this is useful sometimes in math so an number was introduced to allow this:
The definition is :
i^2 = -1

i^0 = 1
i^1 = i
i^2 = -1
i^3 = i^2 * i = -1 * i = -i
i^4 = i^2 * i^2 = -1 * -1 = 1
i^4 = i^3 * i = -i * -1 = 1
Notice that i^4 is the same as i^0!
i^5 = i^4 * i = 1 * i = i
Notice that i^5 is the same as i^1!
i^6 = i^5 * i = 1 * i = i * 1 = -1
Notice that i^6 is the same as i^2!
This cycle continues.



### Complex numbers
Are similar to vectors and we can add and subtract complex numbers like vectors. The also have components, length,
and direction.
A complex number has a real part and an imaginary part:
z = 5 + 3i
The real part is 5 and written as Re(z) = 5
The imaginary part is 3i and written as Im(z) = 3

We can visualize this:
      Im  ^
          |
         3|        z(5,3)
          |        |
          |        |
------------------------>
          |        5   Re
          |
          |
          |

The above is called a complex plane.

We can add complex numbers together by using the follwing:
Lets take two complex numbers,
a = 2 + 3i
c = 4 + 5i

(2 + 3i) + (4 + 5i) = (2 + 4) + (3 + 5)i = (6 + 8i)

### Linear algebra
Vectors play an important part in linear algebra. A vector is a tuple.
v = (v1, v2, v3)

v1, v2, and v3 are scalar values. Scalars are single dimension, so it can hold any number of that dimension.
They are a variable and the value is within it:
v1 --> (1 or 2 or three...)

Adding vectors of the same length simply adds c = (a1 + b1, a2 + b2).
Subtracting vectors of the same length simply substracts c = (a1 - b1, a2 - b2).
Multiplying vectors of the same length simply multiplies c = (a1 * b1, a2 * b2).
Dividing vectors of the same length simply divides c = (a1 / b1, a2 / b2).

#### Linear dependent
A set of vectors are linear dependent if a vector in the set is a linear combination of other
vectors in the set. 
This will be the case if
c1v1 + c2v2 + c3c3 + ... cnvn = [0 ... n] (this is supposed to be a zero vector)

So the will be linear independant if the above is not true.

### Determinant
This is calculating the area between two vectors which is a parallelogram. Draw the parallelogram and then 
look a the sides and give them lables. You see that we can take the area of the rectangle. 

### Vector dot product
c = (a1 * b1 + a2 * b2)

```python
>>> from numpy import array
>>> a = array([1,2,3])
>>> b = array([1,2,3])
>>> c = a.dot(b)
>>> c
14
```
So that would be:
c = (1 * 1 + 2 * 2 + 3 * 3) = 15
c = (1 + 4 + 9) = 15

A vector can be multiplied by a scalar using:
c = (s * a1, s * a2) 
This does not create a single value but instead returns a modified (or creates a new) vector that has now been scaled.

### Vector Norm
Norms are a measure of distance. I think this refers to the distance between points in multiple dimensions.

The L1 norm is the sum of all absolut vector values
```python
from numpy import array
from numpy.linalg import norm
print(norm([-1, 2, 2], 1))
```
```console
5
```

The l2 norm is the square root of the sum of the squared vector values.

The max norm is (Linf) and is calculated by returning the max absolut value of the vector:
```python
from numpy import inf
from numpy import array
from numpy.linalg import norm
print(norm(array([1, 2, 3]), inf))
```
```console
3
```

### Matrix
A matrix is a two-dimensional array of scalars one or more colums and one or more rows.

A vector, for example 
```python
v = array([ 1, 2, 3 ]);
```
is only one dimentional matrix with 3 column. You should really see it as:
[ 1,
  2,
  3]

For this to be the other way, a single row and three columns:
```python
>>> array([ 1, 2, 3 ]).shape
(3,)
>>> array([[ 1, 2, 3 ]]).shape
(1, 3)
```
This would be a 2d matrix and each row has a one dimentional vector which contains the columns.


A multi dimensional matrix could look like this, 4x3 (4 rows and three columns):
```python 
from numpy import array
A = array([
        [1, 2, 3],
        [4, 5, 6],
        [7, 8, 9],
        [10, 11, 12]
        ])
print(A)
```

Just remember that like a vector, a matrix is only storing values which represent a 
compact way of storing data. These are probably implemented as arrays (continous 
memory slots, very simplified, but this means that access times are fast as it
iterating the values as they will be prefectched and cached).

Just like we can perform operations on vectors we can also do this on matrices.

Adding two matrices of the same size is done by adding element by element and creates
a new matrix:
C = (a1,1 + b1,1, a1,2 + b1,2, a1,3, b,1,3
     a2,1 + b2,1, a2,2 + b2,2, a2,3, b,2,3)

Subtraction works the same way as above.


#### Matrix multiplication
Multiplication is done like addition/substraction using element by element multiplication
and is also called Hadamard product and is not to be confused with the matrix product.
It is named after French mathematician Jacques Hadamard.

Matrix dot product:

A = (a1,1 , a1,2
     a2,1 , a2,2
     a3,1 , a3,2)

B = (b1,1 , b1,2
     b2,1 , b2,2)

C = ( 
      (a1,1 * b1,1) + (a1,2 * b2,1) , (a1,1 * b1,2) + (a1,2 * b2,2)
      (a2,1 * b1,1) + (a2,2 * b2,1) , (a2,1 * b1,2) + (a2,2 * b2,2)
      (a3,1 * b1,1) + (a3,2 * b2,1) , (a3,1 * b1,2) + (a3,2 * b2,2)
    )

```python
A = array([
        [1, 2],
        [3, 4],
        [5, 6]])
B = array([
        [1, 2],
        [3, 4]])
C = A.dot(B)
print(C)
```
So this will do
C = (1 * 1 + 2 * 3 = 7  , 1 * 2 + 2 * 4 = 10
     3 * 1 + 4 * 3 = 15 , 3 * 2 + 4 * 4 = 22
     5 * 1 + 6 * 3 = 23 , 5 * 2 + 6 * 4 = 34

C = (7, 10
     15, 22
     23, 34)

Notice the order of the multiplication which start by multiplying the first element in the first row
with the first element in the first row of B. Then multiply the second element in the first row of A
with the first element of row 2 in B.

  +-  -+ +-+
  |1  1| |0|
  |0  1| |1|
  +-  -+ +-+
The matrix above represents a transformation. The first column of the matrix is i hat and the second is j hat.
We are going to take the vector and transform it. Visualize what i hat and j hat look like.
  i hat:            j hat
    |                 | ^
    |                 | |
 ----->---        ---------
    |                 |
    |                 |

And our vector is:
    ^
    |
 ---------
    |
    |

### Determinatant
Determinant is the area of the parallelogram between two vectors. If this is zero then they basically make a line, 
this is a negative value then the parallelogram has been flipped (x an y have swapped places). 
I'm not sure about all the uses of this but one might be to calculate the area destroyed by an explosion in a game 
perhaps.

### Inverse matrix

### Column space

### Null space

### Rank

### Transformation between dimensions


#### Scalar
In linear algebra the numbers that are used are called scalars because they are used to scale value. A scalar
value is just a number, it does not tell you anything else. Compare this with a vector which has a scale and
distance.

Take [1, 2], what this really means is that we want to scale 1 with the unit vector. The unit is usually
represented with a lowercase letter and the hat (^). Normally this is of length 1. So 1 would mean:
1 * unit vector
So the 1 is used to scale the x axis and like wise with 2 but for the y axis.

#### Vector
In physics a vector is an arrow pointing in space: ---------->. What defines this arrow/vector is its length and
the direction it is pointing. So a vector [1, 2] would mean the length is 1 (x) and the direction is 2 (y).
You can always think of vectors as a line on a graph. 

Think of a vector as it represents a certain movement, a step with a certain distance and direction in space.
Adding two vectors would be like walking both vectors, starting at the arrow of the first and attaching the 
second one there and then walking what one.

  A [2,3]  ^                  
           |
	   |      ----> B [4,0]
           |
              B 
           ^---->                  
           |
	 A |                
           |
              B
           ^---->                  
           |  /
	 A | /  R  = A + B            
           |/

So what is R in this case, well A starts at 2 so x would be 2.
And B ends a 4 so y would be 4:
[2, 4]


The operation can be used in machine learning to calculate the weighted sum of a vector. The dot product is calculated as follows:
c=(a1 ×b1 +a2 ×b2 +a3 ×b3) 
or
c = (a1b1 + a2b2 + a3b3)

### Calculus
Can help find the slope of a line which is useful.

`d` means "a little bit of". So dx means a little bit of x, or an element of.

The long S or f is the sum of, so Sdx means the sum of all those small bits. This is also called the integral
which simply means "the whole". So the integral is all those small bits. 

### Area of a rectangle
To find the area of a triangle, multiply the base by the height, and then divide by 2. 
Notice that base times hight is the same as we do for calculating the area of a rectangle:

3x2 :
        3
  +---+---+---+
  |   |   |   |
2 +---+---+---+
  |   |   |   |
  +---+---+---+

So the area of a rectangle is base times hight (a x b). So I guess that any multiplcation with two terms 
can be considered be calculating the area of a rectangle (the product is the area).

If we were to draw a line from the lower left corner to the top right corner we would have two triangles. They would 
both be half of the area of the rectangle. 

If we take the same rectangle and tilt it to the right.

        +---+---+---+
       /   /   /   /
      +---+---+---+
     /   /   /   /
    +---+---+---+
This means that we can again draw a diagonal line and get two triangles from a paralellogram.

All triangles with the base a and hight b have the same area. So, no matter how you stretch or the triangle, as
long as you don't change the base or hight the area will remain the same. Just think about the rectangle that we 
started with, which we then tilted but the area remained the same. 

Every parallelogram can be subdivided into triangles so we can therefore calculate the area by adding up the 
areas for each triangle. For example, if you want to determine if two polygons have the same area you could 
start by cutting them up into triangles. Then creating rectangles of each triangle and stacking them together.
The put both of these rectangled next to each other and you can compare them.


The division by 2 comes from the fact that a parallelogram can be divided into 2 triangles

    1                   b * h
A = - * b * h    or A = -----
    2                     2

0.5 * x = 

  10
* 0.5
  ---
  5.0

  20
* 0.5
  ---
  10.0

### Area of a circle
Think of a round pizza which has been sliced into pieces. Now each piece is rounded at the non-pointed end but
the smaller slices we cut the smaller this rounded part is. Now imagine that we can all of these slices and 
put them next to each other. The we tilt them to the left, leaving the base and hight the same so we are not
changing the area of each. 

   |\...
a  | \...
   |  \...
   |   \...
   ------...
   (     ) <-- rounded part
       b

So we there have a rectangle which we know we can calculate using the base times hight divided by two.
We can call a r instead for the radius and b, C for the curcumfurence.
So that gives us:
       1
Area = - r x C
       2 

But I learned that the area is:
Area = PI x r^2

Well this is because the circumference is defined as 2 x PI x r

       1
Area = - r x (2xPIxr)
       2 

If want to find the area of a circle you can imagine that you make small inner circles/rings to divide it.
Then imagine that you straighten them out so that they are straight lines and standing next to 
each other. The thinkness of each circle when standing up and it now looks like a long rectangle we can 
call dr for difference in radius. If dr is large rectangles will just reach the line plotted by 2PIr. This
looks like the left side of all the rectangles only just touch the line. But the smaller the value of dr 
the more it looks like it touches the line completely and so do all of them giving us a good approximation.

Area ~ 2*PI*r*dr
This is done for all of the rings and then you add them together to get a sum.
The value of r will be between 0 and 3 (let say that is the radius of our original circle)
Now, this is only an approximation, but the smaller value have have for dr the closer we come.
And this will give us a triangle in the graph, and we know how to calculate the area for a 
triangle.

  1
  - (3) (2*PI*3)
  2

  1
  - PI*3^2
  2

= 28.3

Now, in the case of a circle we were lucky that the area in the graph turned out to be a triangle which is
easy to calculate the area for. What if you had a line like x^2?

Can you think of a function A(x) that gives the area of underneath x^2?
This is called an Integral of x^2 (the function A(x) that is).


### Matrix Multiplication


### Broadcasting


### Sigma notation
Instead of writing 1+2+3+...+9,10, sigma notation is used as a shorthand for this. It is the greek letter sigma:

10
+--
\ 
/      i
+--
i=1                // i for index

So, on top have the iterations, i is set to the starting index and it is what will be summed up. Like a for loop
int sum = 0;
for (int i = 1; i = 10; i++) {
  sum += i;
}

### Absolue value
Describes the distance of a number from 0 without considering the direction (-=left, +=right). So the abolute of 5 is 5,
and the absolute value of -5 is 5. The symbol use it a pipe character, the number and a pipe character:
|5|

### Equality Properties
The Addition, Subtraction, Multiplication, and Division Properties of Equality all say that two sides of an 
equation remain equal if you perform the same operation to each side of the equation, as long as you do not 
divide both sides of the equation by zero.

2x - 3 = 4
We add 3 to both sides and the equation still remains equal:
2x - 3 + 3 = 4 + 3
2x = 7
We can divide both sides with two and they will still be equal:
x = 3,5

2 * 3.5 - 3 = 4
7 - 3 = 4
4 = 4


2
-x + 4 = 8
3

2
-x = 4
3

    4    2
x = - /  -
    1    3

    4 * 3
x = -   -
    1 * 2

    12
x = --
    2

x = 6
    

### Square root
It's called because you can take the number and multiply it by itself. Just like you would with a square
+-----+
|     |
|     | 2
+-----+
  2

2^2 = 2^1 * 2^1 = 2^(1 + 1) =
4^2 = 4^1 * 4^1 = 4^(1 + 1) =

2^0,5 = 2^(0,5 + 0,5) = 2^1

### Visualizing multiplication
Lets take 3 * 4 = 12. Imaging you have 3 blocks:

	+----+
	|    |
	+----+
  3	|    |
	+----+
	|    |
	+----+

And the 4 is those 3 blocks 4 times:

	+----+----+----+----+
	|    |    |    |    |
	+----+----+----+----+
  3	|    |    |    |    |
	+----+----+----+----+
	|    |    |    |    |
	+----+----+----+----+

                  4

### Fractions

Recall that one or a whole is 

  +--------------+
  |              |
  +--------------+

1
_ :
2
  +--------------+
  |      |       |
  +--------------+

Remember that we are asking how many groups are in something.

8
-   how may groups of four go in eight
4
  +-----------------------+
  |  |  |  |  |  |  |  |  |
  +-----------------------+

3   4            3
- / -            -
5   7            5
               -----  how many groups of 4/7 go in 3/5
                 4
                 -
                 7

When divide fractions, why have we learned to invert the second fraction and multiply?

3   4
- / -
5   7

3 / 4   4      12/4
----- * - =   ------
5 / 7   4     20 / 7

  3     7      21
----- * - =   -----
20/7    7      

+----+----+----+----+----+
| x  | x  | x  |    |    |
+----+----+----+----+----+

+----+----+----+----+----+----+----+
| x  | x  | x  | x  |    |    |    |
+----+----+----+----+----+----+----+


   10
   -- = x   10 = 2x
    2

    C
    - = PI  C = PI*d
    d

### Negative numbers
Think in terms of piles and holes instead of positive and negative numbers.

  +--+  +--+
  |  |  |  |
  |  |  |  |
--+  +--+  +---------+  +--+  +-----------
                     |  |  |  |
                     |  |  |  |
                     +--+  +--+
			    opposite of one

2 + (opposite)2 = 0

-2 = opposite 2

3 + (-2) = 1
3 - 2 = 1

(-2) + (-2) = -4

(-3) + 1 = -2
(-3) + (-1) = -4
(-3) - 1 = -4

It is so much easier to just use addition and think of opposite piles instead of subtraction.
"Subtraction is the addition of the opposite"

5 - 3 = 
5 + (-3) = 2 (5 piles plus 3 holes)

4 - 6 =
4 + (-6) = -2

-(3 + (-2) = 
-3 + 2 = 1

-(5 - 4 + 1 -7)
 -5 = 4 - 1 + 7

-(x - y) = 
 -x + y 

(8 -w) - (9 - w)
 8 + (-w)  + (-9) + w


### Cards
Make two piles of 10 cards, one with only black cards and one with only red cards
Take 4 cards from the red pile and mix them with the black pile. 

Suffle the black pile and then take out 4 cards and place the on the red pile. 
Both piles will have the same number of foreign cards in them. The red might have 2 black, then the black will have 2 reds etc.
Will they always be equal? 

             Pile 1        Pile 2

             10 Red Cards  10 Black Cards

             Pile 1        Pile 2
           +------------+------------+
           |            |            |  Pile 1 will have B number of foreign black cards in it.
Black Cards|     B      |    10-B    |  
           |            |            |  Pile 2 will B number of card missing as they are now in pile 1.
           +-------------------------+
           |            |            |  
Red Cards  |            | 10-(10-B)  |  
           |            |            |
           +-------------------------+


                          10 + -10 + B = B
So both piles will have the same number of foreign cards in them.


### Groups
A collection of objects that together with one operation (think addition, mutiplication etc) have the
following properties:
* Associative
* Identity
* Inverse

Lets take an example, the set of all integers with the operator +:
Associative: a + (b + c) = (a + b) + c
Identity: a + 0 = 0 + a = a
Inverse: a + (-a) = (-a) + a = 0

### Fields
A set of elements where we can add, subtract, multiply and divide. But since subtraction is adding negatives and
division is multiplication of fractions we only mention addition and multiplication.
The are all commutative:
Rations are fields.
Reals numbers are fields.
Complex numbers are fields.


### XOR


### Matrix



A list in Python is just an ordered collection of items which can be of any type. By comparison an array is an 
ordered collection of items of a single type
```python
>>> l = [1,2,3]
>>> l
[1, 2, 3]
>>> l[0]
1
>>> l[2]
3
>>> for d in l:
...	d
1
2
3
```

### Degrees vs Radian
Degrees came about (they think) from the observation that looking at a point in the sky, it would 
move a certain distance per day. The number of these movments was counted to 360 for a whole year.
This is very specific to observations on earth and not specifically tied to math. For example, 
if someone on another planet did this they would not use this system. That is where radians come
in.
360 is totally arbitrary, chosen simply because the Babylonians preferred multiples of 60.
As it turns out, there’s a better way. But to explore it, we’ve got to lift ourselves out of this rut of thinking. 
No more dividing the circle into some arbitrary number of units.

### Radian
Take the radius and make an arc with the same lenght, this is one radian. Half a circle is a little more than
3 radians. It is actually exactly 3PI.


### Trigonometry

### sine/cosine
Think of sine, cosine as the y and x axis of a dome. Sine is where we hang a screen and x is the lenght from 
us the screen will be. The closer to the origin from 0.0 - 1.0 on the x axis, the larger the screen.
As we make the screen larger (y moves towards 1) the distance (x moves towards 0) decreases.

Remember that the trig functions sine, cosine, and tangent all deal with percentages. 
Having a exact hight (for y which is related to sine) does not say much about the hight at all in fact.
If it is 50 cm is that a small or a big "screen" relative to the whole circle (the "dome"). But if we know that 50
is 80% then we know much more.

Cosine is the ratio between the x axis and hypo.

### Tangent/secant
Imaging you have a wall that starts just outside the circle, almost touching a point on the x-axis furthest to the right.
We are going to hang our screen on the wall. Regard less of the height on the wall we choose to hang it, it will always
be the same distance from us, so x is fixed at 1.
The hight of this wall is called the tangent (and represnts the y axis just like sine). The distance to the wall is one
as we are thinking of the unit circle. But it will always be the radius. 
Now, imagine placing a ladder from the origin of the circle (dome) to a point on the wall because this is before the time
when there was a remote control and we have to be able to switch channels. This is the SeCant (hypo). Perhaps the memonic
Switch Channel might help to indicate that we have to climb the ladder to switch channels.
Notice that we can place the the screen infinitly high in contrast to then we were hanging it inside the dome, there we could
only go to the hight of the dome. The lowest it can go is just link inside the dome which is 0. 
if x = 0 then tangent will be 0, and secant will be 1 as the ladder will basically be lying flat on the ground.


### Cotangent/Cosecant
For this imagine a ceiling on top of the dome, which much like the wall (tangent) almost touches the highest y point.
We could hang our screen on the ceiling. The y axis is the high of the screen is fixed in this case at one and will
not change, just like the distance to the wall was fixed.
What the distance to the wall in this case can vary as we can chose different points on the x axis to hang the screen, 
this distance is the cotangent. 
And the ladder we need to switch channels would be called the cosecant much the same as the secant for the wall senario.


Now lets mix all of these together, what I mean here is that they all can be in the same circle at the same time.
This is a really nice visual representation and interactive app which allow one to play around with the values:
https://web.archive.org/web/20150511220229/http://www.touchmathematics.org:80/topics/trigonometry


### Tensor

### Newton
Force = mass * accelleration

The unit of mass is kg.
The unit of acceleration is m/sec^2

Lets say we have an object that weighs 2 kilograms.
And the acceleration is 4m/s^2
F = (2kg)  4m        8 kgm (8 kg * m)
    -----  ---  =   -----------------  = 8kgm/s^2
      1    s^2             s^1

Saying 8kgm/s^2 is mouthful so this is said to be 8 newton, 8N.


Mass
Is the amount of matter in an object. It does not matter where this mass is, it will be the 
same. SI unit of mass is kg.

Weight
Is the measure of the gravitational pull on an object.
W = m x g  (acceleration due to gravity)
This is almost identical to the the force and the unit is also the same, Newton.

Work
Is Force times distance:
W = F * d


### Slope
Change in y 
-----------  = percentage
Change in x

Take a triangle with a base of 3 and a hight of 2. Find the change by:
2/3 = 0.66666
So the hight will increase with 0.66 percent for x.
So for 
x = 3, 3 * 2/3 = 2
x = 6, 6 * 2/3 = 4


A sphere is the most space-efficient shape — it gives the most volume for the least surface area. No matter if you’re an elephant or mouse, you’ll conserve the most heat by curling into a ball.

### Activation functions
#### Identity
f(x) = x

#### Binary step
f(x) = { 0 for x < 0
         1 for x >= 0
So all positive input gives one and all negative input gives 0. Used in classifiers where you want to classify between 1 and 0. Think classification of cats,
either it is a cat or not a cat.

#### Logistical or Sigmoid
"Sigma like" as the curve is has looks almost like an S (sigma).

         1
f(x) = -----
       1 + e^-x

The symbol for sigmoid looks like q Q but turned upside down and rotated.

Takes the input and maps it between 0 and one. So if the input is very large (or very small (negative)) this will constrain the output to 
still be between zero and one.
         1               1
f(14) = -----        = ------
        1 + (e^-14)    
#### ReLU
f(x) = { 0 for x < 0
         1 for x >= 0

How is this different to the binary step function?


#### Leaky ReLU


#### SoftMax


### Probability

Notation:
y-hat = P(y=1|x) 
y-hat will tell us the probability that the x is of some specific type, for example if it is a picture of a
cat then the value of y-hat would be 1.


### E



### Useful rules
  1
---- = 1x^-n
 x^n

2/4^3 = 2 * 4^-3
This works both ways, so if you have a negative exponent you can rewrite it

Product rules:
a^n * a^m = a^n+m
a^n * b^n = (a * b)^n

Quotient rules:
a^n / a^m = a^n-m
a^n / b^n = (a / b)^n

        u(x)       u`(x) v(x) - u(x) * v`(x)
f(x) = -----  =   --------------------------
        v(x)           [v(x)]^2

Power rules:
(b^n)^m = b^n*m
b^n^m = b(n^m)      2^3^2 = 2(3^2) = 512

m * sqrt(b^n) = b^n/m
b^1/n = n * sqrt(b)

Negative exponents:
b^-n = 1/b^n

### Add one, subtract one
So I ran into this when looking into deriving the sigmoid function and at one stage +1 and -1 
were added to simplify the expression.


### log-odds
Remember that odds are the ration of something happening to something not happening.
I win 5 out of 8 games games. Of the total of 8 games I'll win five.
   5
 ---- = 1.7
   3

Probability is the ratio of something happening to everything that could happen. So if I win 1/4 games that would be:
    5                   5
---------         =   ----- = 0.625
5 win loose 3           8

Notice the difference in the values here.
The probability of loosing would be:
3/8
This can be calculated from the winning probability by subtracting the probability from 1:
     5     8     5
1 - --- = --- - --- =  1 - 0.625 = 0.375
     8     8     8

ratio of the probability of winning
-----------------------------------
to (1 - the probability of winning)

This is often simplified to:
   p              p = probability of winning
 ----
 (1 - p)

5/8     5
--- =  --- = 1.7
3/8     3

So that is odds, but what are the log of the odds?
Well the odds of loosing will always be between 0 and 1, and the odds of winning 1 to infinity.
For example, 
if the odds are 1 to 6, 1/6 = 0.17
if the odds are 6 to 1, 6/1 = 6

    |                         |
|----|----|----|----|----|----|----|
0    1    2    3    4    5    6    7

Look at the length(magnitude) of these compared to each other. Using the log function will allow 
this to become more symetrical:

log(1/6) = -1.79
log(6) = 1.79

        |               |
 |----|----|----|----|----|----|----|
-3   -2   -1    0    1    2    3    4

Note that the length(magnitude) is not the same (same distance from zero).

So, we can calculate the log of the odds using counts or probabilities:
                
log(odds) = log(1/6) = log(p/(1-p) = log(1/6) = -1.79
                       \_________/
                       logit function which is the log of the probabilities and used
                       in logistic regression.

### Sums/products
The symbol ∑ is the summation symbol, like a for look which adds up the components inside.
The symbol π (capital PI, coproduct) is similar but multiplies instead. 
