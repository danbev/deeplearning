
### Place value
                              10000   1000   100     10       1
 +------+------+------+------+------+------+------+------+------+
 |      |      |      |      |      |      |      |      |      |
 +------+------+------+------+------+------+------+------+------+


### Tuple
A tuple is a finite ordered list of elements. The elements do not have to be of the same type.
Example of a five-tuple:
(1, 2, 4, 5, "something")
Compare this to a list that is an ordered collection of values of the _same type_ which is immutable.

An array is of fixed size and with values of the _same type_, just like a list, but is mutable.

### Linear algebra
Vectors play an important part in linear algebra. A vector is a tuple.
v = (v1, v2, v3)

v1, v2, and v3 are scalar values. Scalars are single dimension, so it can hold any number of that dimension.
The are a variable and the value is within it:
v1 --> (1 or 2 or three...)

Adding vectors of the same length simply addes c = (a1 + b1, a2 + b2).
Subtracting vectors of the same length simply addes c = (a1 - b1, a2 - b2).
Multiplying vectors of the same length simply addes c = (a1 * b1, a2 * b2).
Dividing vectors of the same length simply addes c = (a1 / b1, a2 / b2).

### Vector dot product
c = (a1 * b1 + a2 * b2)

A vector can be multiplied by a scalar using:
c = (s * a1, s * a2) 
This does not create a single value but instead returns a modified (or new) vector that has now been scaled.

### Vector Norm
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
can be considered a matrix with one row and 3 columns.

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


#### Matric multiplication
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

### Algebra
   3x = x + 5 = 
   -1   -1      2x = 5  = x =  2.5
                ------
                  2

2.5 * 3 = 2.5 + 5 
7.5 = 7.5


### Real numbers
* Natural Numbers
Counting numbers {1, 2, 3, 4,...}.

* Whole numbers
Natural numbers and zero {0, 1, 2, 3, 4,...}

* Intgers
Whole numbers and their negatives {..., -3, -2, -1, 0, 1, 2, 3,...}

* Rational numbers
Numbers that can be written as a ratio of two integers and the dominator of the ratio is not 0. 
nominator          1
---------          -
denominator        2

(a ratio is a relationship between two numbers indicating how many times the first number contains the second) which
is why these numbers are called retionaly numbers.

* Irrational numbers
Numbers that cannot be written as a ratio of two integers. Any non-terminating number.


### Multiplication and Division
Take 2 x 4 = 8 which can be throught of as 2 + 2 + 2 + 2, or 4 + 4:
+--+ +--+ +--+ +--+
|  | |  | |  | |  |
+--+ +--+ +--+ +--+
+--+ +--+ +--+ +--+
|  | |  | |  | |  |
+--+ +--+ +--+ +--+
and 8 / 4 = 2. We are asking how many groups of 4 go in 8
and 8 / 2 = 4. We are asking how many groups of 2 go in 8

1
- x 3 = 1 
3

+--+   +--+   +--+    3    
|x | + |x | + |x |  = -  = 1
+--+   +--+   +--+    3
+-----------+
| x | x | x |
+-----------+


1
- is the same as 1/3. One of three, or how many groups of one go in three.
3
+--+--+--+
+x |  |  |
+--+--+--+


3
- x 4
4

+--+--+--+--+
|x |x |x |  |
+--+--+--+--+
+--+--+--+   +--+--+--+   +--+--+--+   +--+--+--+
|x |x |x | + |x |x |x | + |x |x |x | + |x |x |x | = 12
+--+--+--+   +--+--+--+   +--+--+--+   +--+--+--+

12
-- = 3
4

3   2
- x -
4   3

+--+--+--+--+
|x |x |x |  |
+--+--+--+--+

17x18
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

100 + 70 + 80 + 56 = 306


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

