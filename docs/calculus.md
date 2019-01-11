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

### Limits
Basically this involves functions where there are points that are undefined but
we can find values close to 2 by letting x become closer and closer to 2.
```
f(x) = x - 1 when x ≠ 2
```
In the above made up case x=2 is not 1 but instead undefined.
The above can also be written like:
```
lim f(x) = 1
x->2
```
"the limit, as x goes to 2, of f(x) is equal to 1". When x is near but not equal
to 2 the value of f(x) is near 1.
```
          x - 1 if x ≠ 2,
g(x) = {  3     if x = 2
```
What is the limit for the above function?  
Is is the same as our first example:
```
lim g(x) = 1
x->2
```

Limits can be different for the left and right hand side. Imagine that you have 
a function that for x = 3 is undefined, but as we close to 3 y approches 1. 
And for x = -3 it is also undefined but as we get close y approches 3.
These are two limits for the same function, one limit from the left and one
limit from the right.
```
lim h(x) = 1      lim h(x) = -2
x->3-             x->3+
```
Notice the `-` and `+` signes indicate the left/right hand limits! The reason for
these symbols is that for the left hand size we are considering values less than 3
and for the right values. We get close to 3 from the left 2.99999 for example, 
and from the right 3.000001.

```
lim f(x) = L         lim f(x) = L
x->a-               x->a+
```
is the same as:
```
lim f(x) = L
x->a
```

#### Vertical Asymptote
Means that atleast on of 
```
lim f(x) = ∞ or lim f(x) = -∞
x->a-           x->a+
```

### Derivative
Is the slope of a tangent line to the point. Think of this increasing/nugging x by a small
amount, like 0.001. Then you calculate the slope of this line by using
change in y / change in x

So our average rate of change of that interval and is the secant line between the points.

Take the function f(x) = x² which is our familiar parabola. Take a point on the
curve and then nudge it a little to get a second one.
Our initial function is x² which can be seen as an area:
```
 +-------------+
 |             |
 |    x²       |
 |             |
 |             |
 |             |
 +-------------+
```
And then we nudge it a little producing:
```
 +-------------+ +--+
 |             | |  |
 |    x²       | |  |
 |             | |  | x
 |             | |  |
 |             | |  |
 +-------------+ +--+
 +-------------+ +--+
 |             | |  | dx
 +-------------+ +--+
       x          dx

```
so `df` would be:
```
              +--+    +--+
              |  |    |  |
              |  |    |  |   +--+
        df =  |  | +  |  | + |  |
              |  |    |  |   +--+
              |  |    |  |
              +--+    +--+
```
The first two rectangles have sides of `x*dx`. So we can write that as `2x dx` and
represent new area. The last box which is dx² is so small that it can be ignored.
For example if dx was 0.01 dx² would be 0.0001.

And this is the derivative of x²:
```
       df = 2x * dx

       df = 
       -- = 2x
       dx
```

#### Rules
Power rule:
```
d/dx (x^n) = nx^n-1, n != 0
```

```


### Derivative
Is the slope of a tangent line to the point. Think of this increasing/nugging x by a small
amount, like 0.001. Then you calculate the slope of this line by using
change in y / change in x

So our average rate of change of that interval and is the secant line between the points.


#### Rules
Power rule:
```
d/dx (x^n) = nx^n-1, n != 0
```

Constant rule:
```
d/dx(A) = 0
```
A constant will be a straight line and will not have a slope.
```
 d/dx (A f(x) = A d/dx f(x) = A f`(x)
```

Example:
```
d/dx (2 x^5) = 2 d/dx (x^5) = 2 5x^4 = 10x^4 
```

Sum rule:
```
d/dx (f(x) + g(x)) = d/dx (f(x)) + d/dx (g(x)) = f`(x) + g`(x)
```

The above rules can be very useful, that the following example:
```
f(x) = 2x^3 - 7x^2 + 3x - 100
f`(x) = 2 * 3x^2 - 7 * 2x + 3 - 0
f`(x) = 6x^2 - 14x + 3
```

Remember that the resulting function f`(x) allows us to pass in any value for x and get
the slope of the tangent line at that point or view it as the instantanous change with 
respect to x. Always remember what we are doing!
```
        2       1
g(x) = ---  -  ---
       x^3      x^2
```


### Partial Derivative
If you have a constant for x then that means that y will have the same value regardless of
what value of x you give it. So it will not have a slope, the slope will be zero.

When you have a multi-parameter/multi-valued function, for example
```
f(x, y) = 
```

You can determine the derivate for x and treat y like a constant which like we mentioned before
will have any change so that slope will be zero.

### Gradient
Is a way of packaging all of the partial derivatives into a vector.
```
f(x, y) = x^2 sin(y)

df/dx = 2x sin(y)
df/dy = x^2 cos(y)
```

The symbol (nabla but most often on only says del) for Gradient is an upside down triangle.
```
\/f(x, y) = [ 
  2x sin(y)
  x^2 cos(y)
]
```
This is called a vector values function, notice it takes two parameters.
Notice that this function takes in a point in two dimentional space and outputs a 2d vector.
One might think of the gradient as the full derivative, each element in the vector is one
partial derivative.
You can think of the entries in the vector as function pointers, they are functions or operators
that compute the partial derivative for x and y etc.
```
f(x, y) = x^2 + y^2

del(f(x, y) = [ 2x, 2Y ]
```

So we can fill this function with values for x and y where they will be scaled by 
two.
```
f(1, 1) = [2, 2]
f(2, 1) = [4, 2]
f(2, 2) = [4, 4]
```

The gradient is the direction (given by the direction of the vector) of steepest 
ascent and the length of the vector tells the steepness, if it is not very long 
it is a shallow asenct and if it is long it is steeper.


### Quotient rule
TODO


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
