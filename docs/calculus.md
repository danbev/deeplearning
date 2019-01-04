### Calculus
Not only how steeply a line slopes, but indeed, how steeply any curve slopes at any given time.

A tangent line skims across the curve, hitting it once in the indicated location; 
however, a secant line does not skim at all. It cuts right through a function, usually intersecting it in multiple spots.

```
f`(5) 
```
Means the slope of the tagent line at 5. Or you can see this as the rate of change
of `y` with respect to `x` of our function `f`.

Having a positive slope means that for every step in the x direction we go up 
two in the y direction. But if we have -2 that would mean that for every step 
in the x direction we would go down 2 in the y direction.

```
g`(4)    g`(6)
(4, 4,5)
(6, 0,74)
```
To estimate, draw a tangent line and then take a point on the tangent line and make
a triangle (dt/dx). 

Delta = change

slope = delta y / delta x

When we have a line we take the change in x and the the change in y. This looks like a triangle
or half a rectangle:
```
+--------+
|       /|
|     /  |  y
|   /    |
| /      |
/        |
----------
    x
```
Lets say that x = 2 and y = 3, this would give us 3/2 = 1.5.
```
 y
 -- = 1.5         y = 1.5 * 2 = y = 3 
 2
 
 3
 -- = 1.5   3 = 1.5 * x  3 / 1.5 = 2
 x                       
```

Now if you take any two point on the same line you'll get the same slope regardless of the
distance between the points.
```
y = mx + b
```


### Derivative
Is the slope of a tangent line to the point. Think of this increasing/nugging x by a small
amount, like 0.001. Then you calculate the slope of this line by using
change in y / change in x

so our average rate of change of that interval and is the secant line between the points.


#### Rules
Power rule:
d/dx (x^n) = nx^n-1, n != 0

Constant rule:
d/dx(A) = 0
A constant will be a straight line and will not have a slope.

 d/dx (A f(x) = A d/dx f(x) = A f`(x)

Example:
d/dx (2 x^5) = 2 d/dx (x^5) = 2 5x^4 = 10x^4 

Sum rule:
d/dx (f(x) + g(x)) = d/dx (f(x)) + d/dx (g(x)) = f`(x) + g`(x)

The above rules can be very useful, that the following example:
f(x) = 2x^3 - 7x^2 + 3x - 100
f`(x) = 2 * 3x^2 - 7 * 2x + 3 - 0
f`(x) = 6x^2 - 14x + 3

Remember that the resulting function f`(x) allows us to pass in any value for x and get
the slope of the tangent line at that point or view it as the instantanous change with 
respect to x. Always remember what we are doing!

        2       1
g(x) = ---  -  ---
       x^3      x^2




### Partial Derivative
If you have a constant for x then that means that y will have the same value regardless of
what value of x you give it. So it will not have a slope, the slope will be zero.

When you have a multi-parameter/multi-valued function, for example
f(x, y) = 

You can determine the derivate for x and treat y like a constant which like we mentioned before
will have any change so that slope will be zero.

### Gradient
Is a way of packaging all of the partial derivatives into a vector.
f(x, y) = x^2 sin(y)

df/dx = 2x sin(y)
df/dy = x^2 cos(y)

The symbol (nabla but most often on only says del) for Gradient is an upside down triangle.
\/f(x, y) = [ 
  2x sin(y)
  x^2 cos(y)
]
This is called a vector values function, notice it takes two parameters.
Notice that this functions takes in a point in two dimentional space and outputs a 2d vector.
One might think of the gradient as the full derivative, each element in the vector is one
partial derivative.
You can think of the entries in the vector as function pointers, they are functions or operators
that compute the partial derivative for x and y etc.

f(x, y) = x^2 + y^2

del(f(x, y) = [ 2x, 2Y ]

So we can fall this function with values for x and y where they will be scaled by 
two.
f(1, 1) = [2, 2]
f(2, 1) = [4, 2]
f(2, 2) = [4, 4]


The gradient is the direction (given by the direction of the vector) of steepest ascent and the length of
the vector tells the steepness, 
if it is not very long it is a shallow asenct and if it is long it is steeper.


### Quotient rule
f( 


### Second derivative
The syntax for this looks like
```
d²y
---
dx²
```
But what it means is we are taking the derivative of the first derivative and
it is more like a nestet function call:
```
d   d
=[  --[y] ]
dx  dx
```
We are calculating the first derivative:
```
d
--[y]
dx
````
And passing that result do calculate the derivative of that value:
```
d  d         d²y
=[---[y]] =  ---
dx dx        dx²
```
So the ² is not d*d but instead we are applying the derivative operator twice.
