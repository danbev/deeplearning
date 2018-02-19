### Linear algebra


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



### Calculus
Can help find the slope of a line which is useful.

`d` means "a little bit of". So dx means a little bit of x, or an element of.

The long S or f is the sum of, so Sdx means the sum of all those small bits. This is also called the integral
which simply means "the whole". So the integral is all those small bits. 

### Area of a rectangle
To find the area of a triangle, multiply the base by the height, and then divide by 2. 
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

(a ratio is a relationship between two numbers indicating how many times the first number contains the second)

* Irrational numbers
Numbers that cannot be written as a ratio of two integers. Any non-terminating, n

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

