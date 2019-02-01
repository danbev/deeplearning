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

##### Integer numbers
Whole numbers and their negatives {..., -3, -2, -1, 0, 1, 2, 3,...}
The symbol for integers is a captial Z (Zahlen is a German word for number) in blackboard bold.

##### Rational numbers
Numbers that can be written as a ratio of two integers and the dominator of the ratio is not 0.
```
nominator          1
---------          -
denominator        2
```

(a ratio is a relationship between two numbers indicating how many times the first number contains
the second) which is why these numbers are called rational numbers.

The symbol for rational numbers is a capital Q in blackboard bold.

##### Irrational numbers
Numbers that cannot be written as a ratio of two integers. Any non-terminating number.

##### Real numbers
Combining irrational numbers with rationals gives what a set which is called the real numbers.
The symbols is a capital R in blackboard bold.

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


```
1
- is the same as 1/3. One of three, or how many groups of one go in three.
3
```
```
+--+--+--+
+x |  |  |
+--+--+--+
```

```
3
- x 4
4
```
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

Division rule:
```
10/2 = 10 * 1/2 = 5 * 2 * 1/2 = 5 * 1 = 5
```
Dividing by 2 is the same thing as multiplying with 1/2. This is true for all
values. Dividing by 4 is the same thing as multiplying by 1/4 etc.
We say that 1/4 is the reciprocal(complementary, corresponding, joint) to 4.
```
10x * 1/5 = 5 * 2 * x * 1/5 = 2 * x * 5/5 = 2x
```

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
We take the reciprocal of that number (putting 1 over it) and make the exponent
positive:
```
         1¹
10^-1 =  -     = 0.1
         10¹

         1                   1²   1
10^-2 =  -     = 0.01   or   -- = --- = 0.01
         10^2                10²  100
```
For fractions:
```
(1/2)^-2 = (2/1)² = 2²/1² = 4/1 = 4 
```
Notice that when we remove the parentheses from the fraction the exponents are
added to both the nominator and denominator. This is somethimes called pushing it
through the fraction.

```
2^-0 = 1 /                 = 1
2^-1 = 1 / 2               = 1/2
2^-2 = 1 / 2 * 2           = 1/4
2^-3 = 1 / 2 * 2 * 2       = 1/9
2^-4 = 1 / 2 * 2 * 2 * 2   = 1/16
```
```
(x²)³ = x²*³ = x⁶

2^5/2 = 2^(5*1/2) = (2^1/2)^5
```

Fractional exponents:
```
a^1/2 = 2sqrt(a) 
```
What times itself 2 times is a? 
Notice that the 2 is the root index which tells us how many times itself our answer must
be multiplied with itself to give a.

So for example
```
4^1/2 = 2sqrt(4^1) = 2 because 2 * 2 = 4
2^2 = 4
```

The 2 in front of sqrt, which is really above the radical symbol is the root index which tells us how many
times itself our answer must be multiplied by itself to give 4.
```
8^1/3 = 3sqrt(8^1) = 2 because 2 * 2 * 2 = 8
```
```
8^1/3 = 3sqrt(8^1) = 2 
Reverse: 2^3   = 8 
```
```
5^4/3 = 3sqrt(5^4) = 3sqrt(5*5*5*5) = 3sqrt(625) = 8,549879
5^4/3 = 3sqrt(5^4) = (3sqrt(5))^4 = 8,549879
```

Multiplying powers:
```
x³ * x² = (x * x * x)(x * x) = x*x*x*x*x = x⁵
```
When the base are the same we just `add` the exponents:
```
x^m * x^n = x^m+n
```

```
(x²)³ = (x * x)(x * x)(x * x) = x*x*x*x*x*x = x⁶
```
This is called the power or power property. You just multiply the exponents.
Just think about what it would look like if you simplified it and wrote it
out like we did above.

Rules:

Example the sigmoid function:
```
  1
----
1 + e^-x
```

Our first step above is to rewrite this as a negative exponent instead of division:
```
  1
----     =  (1 + e^-x)^-1
1 + e^-x
```

So we now have:
```
(1 + e^-x)^-1
```

It is not very nice to have a negative exponent so we can get rid of that using the reciprical:
x^-m = 1/x^m
```
    1
-----------
(1 + e^-x)^1
```

Now, this can be viewed as two functions
```
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
```
The nominator is 1, a constant so it's derivative is 0:
```
u(x) = 1
u`(x) = 0
v(x) = (1 + e^-x)^1
v`(x) = 
```

To take the derivative of v(x) we need to use the chain rule.

#### Chain Rule
Can be used when you have a function that can be viewed as a compsition of multiple functions.
Look at this as you have an outer function and an inner function, and you can take each separately
and multiply them
```
The derivative of f(g(x)) is f`(g(x)) * g`(x) 
```
For example:
```
y = (3x + 1)^2
```
The inner function in this case is `(3x + 1)`, lets call it `g`. Calling `g(x)` will evaluate the body of the 
function which in this case calculated `3x + 1`.
The outer function in this case is `()^2`, lets call it `h`. Calling `h(x)` will evaluate `(3x + 1)^2` and it
will not execute `g()`. 
This allows us to then have `h() * g()`
Note that the functions should be the derivaties multiplied.

Lets see if an example can clear this up a little. 
```
f(x) = (3x + 1)^2
inner` = 3x + 1  = 3
outer` = (3x + 1)^2           // power rule 
outer` = 2(3x)            
```
We can apply the power rule to the outer function:
```
f`(x) = 2(3x + 1) * (3)
```

Example of exponent containing x:
```
f(x) = e^x         which is the same as e^1x
```
This is a compound expression with an inner and outer function.
The outer function is `e^1x` and the inner is just the exponent part `1x`.
We can then use the chain rule:
The derivative of `e^1x` is just `e^1x`.
The derivative of `1x` is just `1`.
```
f`(x) = e^1x * (1)  =  e^1x = e^x
```

Now if this was instead e^-1x the process is the same as above only it will give:
```
f`(x) = e^-1x * (-1)  =  -e^-1x = -e^-x
```

```
1
- = 2^-1 = 0.5
2
```

```
              1         1
16^-3/4 =  ------ =  ----------  = 0.125
           16^3/4    (16^1/4)^3
```

```
f(x) = -4 3sqrt(x)
```
Which is the same as 
```
f(x) = -4 x^1/3
```
And now we can use the power rule:
```
f(x) = -4 * 1/3  x^(1/3 - 1)
f(x) = -4 * 1/3  x^(1/3 - 3/3)
f(x) = -4/3  x^-2/3
```

Reciprical: 
A number whose numerator and denominator have been flipped:
```
2    3
- => -   
3    2
```
Notice that multiplying a number with its reciprical will be `1`.

### Operator precedence
```
* Expontents and roots
* Products and division
* Addition and subtraction
```

### Algebra
Is all about manipulating numbers and variables.

The expression:
x = abc
We say that x factors into a, b and c. a, b, and c are the factors of x.

Rules for Arithmetic:
```
1) a(b+c) = ab + ac

      b      ab
2) a(---) = ---
      c      c

3)  a                     1
    -                     -
    c      a              5         1        1
   ---- = ---           ----- =  ------- =  ----
    b      bc             2       5 * 2      10

4) a       ac             1       1 * 2    2   1
  ---- =  ----          ----- =   ----- =  - = -
   b       b              6         6      6   3
   -                      -
   c                      2

5) a    c      (ad + bc)
  -- + --- =   ---------
   b    d         bd
```

You have reached the simplest form when the answer has a single term or when
all the like terms in the answer have been combined.
Expressions that include parentheses are not in simplest form if the parentheses
can be removed using the distributed property.

```
2x + 3 = 9
```
Can't we divide both sides by 2 without first subtracting the 3 from both sides?
```
2x + 3 = 9
------   -
  2      2

1x + 1.5 = 4.5
x  + 1.5 = 4.5
   - 1.5 = 4.5 - 1.5
       x = 3

2x + 3   = 9
2x + - 3 = 9 -3
      2x = 6
      --   -- = 3
      2    2
       x = 3
```

Another example of solving:
```
x - 8
----- = 5
  2
          1
(x - 8) * - = 5
          2

          1
(x - 8) * - * 2 = 5 * 2
          2

          2
(x - 8) * - = 10
          2


(x - 8) * 1 = 10
x - 8       = 10
x - 8       = 10
x - 8 + 8   = 10 + 8
x - 0       = 18
          x = 18

```
Now, is it possible to start with `-8` instead?
```

x - 8
----- + 8 = 5
  2
```
This will not make -8 zero as -8 is part of an expression.

```
3x + 2x - 8 = 3 + 9
3x + 2x - 8 = 12
3x + 2x - 8 + 8 = 12 + 8
3x + 2x = 20
5x = 20
5x = 20
--   --
5    5
x  = 4
```

```
(x + 2)(x² + 3) =
(x + 2) * x² + (x + 2) * 3 =
x³ + 2x² + 3x + 6 = 
```

When adding and subtracting terms the exponents never change, only the
coefficients will change.

Division:  
First, simplify into two multiplied fractions:
```
12b   12    b
--- = -- *  - = 4 * 1 = 4
3b     3    b
```

```
x⁴   x*x*x*x   x   x*x*x 
-- = ------- = - * ----- = 1 * x³
x       x      x     1

```
```
a³    a*a*a       a   a   a     1                  1 
--- = --------- = - * - * - * ----- = 1 * 1 * 1 * ---
a⁵    a*a*a*a*a   a   a   a    a*a                 a²
```
Now the rule states that we can just subtract the exponents when the bases
are the same, but 3-5 = -2 and our answer is 1/a². a^-2 is the same things
are 1/a². Remeber that a negative exponent is the same thing as dividing that 
number of time:
```
           1   1    1
a^-2 = 1 * - * - =  -
           a   a    a²

So if we expand this backwards:
1   1   1   1   1
- = - * - = - * - * 1 = a^-2
a²  a   a   a   a

We can see that these are just different way of writing same thing!.
```        

```
x² + 6x + 8 = 0
```
Since we have x² we need to know that the first term in the first binominal 
needs to be x
```
(x + ?)(x + ?) = x²
```
And we know that the second cannot have an x as that would been the all terms
would have x in them:
```
(x + 2)(x + 4) = x² + 2x + 4x + 8
(x + 2)(x + 4) = x² + 6x + 8
```
This was a guessing game above and I had to try different solutions before 
getting the right one. 
Take: 
```
x * y = 0
```
We know that if either x or y is 0 then the anser will be zero.
```
x * 0 = 0
0 * y = 0
```
And the same for a binominal expression:
```
(x + 2)(x + 4) = 0
x + 2 = 0
x + 2 -2 = -2
x = -2
x + 4 = 0
x + 4 -4 = -4
x = -4
(-2 + 2)(-2 + 4) = (0)(2) = 0
(-4 + 2)(-4 + 4) = (2)(0) = 0
```

The key to knowing the signs of the last terms in the binomial factors is to 
check the sign of the third trinomial term: 
A negative third term tells you the signs must be a + and a -. 
A positive third term tells you the signs must be either both + or both -. 

```
x² - 8x + 15 = (x - 3)(x - 5) = x² - 5x - 3x + 15 = x² - 8x + 15
```

```
x² - 6x - 16 = (x - 2)(x + 8) = x² - 8x - 2x - 16 = x² -8x - 16
```

### Rules for Exponents

```
a^m * a^n = a^m*n

(a^n)^m   = a^n*m

(ab)^n    = a^n * b^n
```
```
         1
a^-n =  ---
        a^n
```

```
2⁴   = 1 * 2 * 2 * 2 * 2 = 16
```
This actually means; start with 1 and multiply 1 by 2, 4 times.

A negative exponent means the oppsite of multiplication: division.
So instead of telling us how many times to multiply 2, it tells how many
times to divide by 2. So again start with 1 and divide 1 by 2, 4 times remembering
that division can be written as multiplication by the receprical.
```
            1   1   1   1   1*1*1*1     1       1
2^-4 = 1  * - * - * - * - = -------  = ----  = ---
            2   2   2   2   2*2*2*2     2⁴      16
```

```
  a          b            8                2         1
( - )^-n = ( - )^n      ( - )^-2 = 4² =  ( - )^2 = ( - )^2 = 0.25² = 0.0625
  b          a            2                8         4

$ echo '(8/2)^(-2)' | bc -l
.06250000000000000000
```
Notice that when a fraction is raised we take the reciprocal and raise that
to the positive exponent.

```
  a         a^n                  8      8²   64
( - )^n = ( --- )              ( - )² = -- = -- = 16
  b         b^n                  2      2²   4

$ echo '(8/2)^2' | bc
16
$ echo '(8^2/2^2)' | bc
16
```

```

  a^n
( --- ) = a^n-m
  a^n

a⁰ = 0
```


### Notation
```
int f(int x) {
  return 2*x;
}
```
The possible inputs are all integers and this is called the functions domain.
The type of output is int but not all ints, you can't get 3 as the output. The
actual outputs of a function is a set call the functions Range. The type of 
outputs are called it's codomain.
```
f : A -> B
```
The above specifies the domain A and the codomain B. The range depends on the
function just like we saw above.

A polynomial is specified like so:
```
f : R -> R

R  = the set of real numbers.
R² = pair of real numbers.
R³ = tripple of real numbers. 
```

#### Polynomials
Poly comes from greek and means many. A polynomial is something that is made up
from the sum of terms.
nomial comes from the latin word nomen which means name. In math we deal with terms instead of names.

A polynominal is the `sum` of a `finite` number of terms where each term has a `coefficient`, being multiplied
by a `variable`, being `raised to a non-negative integer power`.
There has to be non-negative powers for it to be a polynominal.
A coefficient is just something that is multiplied and in this case would be 
multiplied with a variable for example.
Notice that it says sums which means addition, but we can still be adding
negative terms.
```
f(x) = a₀ + a₁x + a₂x² + ... +anx^n
```
```
a is just an array of real numbers, the coefficients.
n is the degree of the polynomial. As the degree goes up so does the number of 
times the polynomial changes direction, between increasing and decreasing.
Polynomials only contain addition, multiplication and constants.
```

Just like the binary operations `AND`, `OR`, and `NOT`, when combined can be used
to implement algorithms, polynomials have the same role for arithmetic.
```
AND(x,y) = xy
NOT(x,y) = 1-x 
 OR(x,y) = 1-(1-x)(1-y)
```

So any `AND/NOT/OR` operation can be represented by using a combination of the
above three polynomials.

Examples:
```
10x^7 - 9x^2 + 15x^3 + 9
6
```
A polynomial cannot have a negative power in a polynomial. Why?

Not a polynominal:
```
10x^-7 - 9x^4 + 15x^3 + 9
10x^-7 - 9x^4 + 15x^3 + 9
6x^0
```

Terms:
```
10x⁷, - 9x⁴, 15x³, 9
```
Coefficients
```
10, -9, 15, 9. The last nine can also be written as:
9x⁰ 
```
And x⁰ is just 1 so that is just be nice so we don't have to write it all out.
So, the statement "A polynominal is the sum of a finite number of terms where 
each term has a coefficient, being multiplied by variable" must hold true.

Which of the following are polynomials:
```
f(x) = 0                     A special case called the zero polynomial
g(x) = 12                    Yes
h(x) = 1 + x + x² + x³       Yes
i(x) = x^1/2                 No, the exponent is not an integer (it is a fraction)
j(x) = 1/2 + x² - 2x⁴ + 8x⁸  Yes
k(x) = 4.5 + 1/x - 5/x²      No. 5/x^2 is the same as 5x^-1 using the rule:
                               1
                             ---- = 1x^-n
                              x^n

l(x) = pi - 1/e x⁵ + epi³x⁹  Yes. 1/e is division by a constant which is ok.
m(x) = x + x² - x^pi - x^pi + x^2 No, not if pi and e are not integer constants.
```

Take a look at the curve that a polynomial represents using Grapher.
```
Monomial: one term. Example 6 or 6x⁰, 10z⁸
Binominal: two terms
Trinominal: three terms
```

Degree of a polynominal is the largest exponent of that variable:
```
4x
The Degree is 1 (4^1)

4x^3 + 2x^2 - 7
The x^3 makes it Degree 3
```

```
Degree		Name		Example
0               Constant	6
1		Linear		x+3
2		Quadratic	x^2-x+2
3		Cubic		x^3-x^2+5
4		Quartic		6x^4-x^3+x-2
5		Quintic		x^5-3x^3+x^2+8
```

Simplifying:
Just remember that we can combine like terms. Like terms must have the
same power to be able to combine them. Start with the highest degree and move
it to the front and see if it and others can be simplified. This will also bring
the polynomial into standard form.

If you have parenthes the you need to remove them, for example
```
(3x + 4) - (x + 1) = 13
Remember that this is the same as:
1(3x + 4) - 1(x + 1) = 13
So start by removing the parentheses by multiplying them.
3x + 4 -x - 1 = 13
2x + 3 = 13
2x + 3 - 3 = 13 - 3
2x = 10
2x/2 = 10/2
x = 5
```

Leading:
Can be used to mean the first term or first coefficient depending on the context.

Standard form:
Is when you write the terms in degree order (highest to lowest).

The difference between a point (px py) and a vector (vx, vy) is that a point always originates (is drawn)
starting from the origin. This might not be the case for vectors.

### Functions

#### Even Functions
Not to be confused with even numbers.
Think for a `f(x) = x^2` and its graph. It is symmetric to the y axis, even on both sides, (1, 1), (-1, 1).
```
f(x) = x^2

f(1) = 1^2   = 1
f(-1) = 1^2  = 1
f(2) = 2^2   = 4
f(-2) = 2^2  = 4
```

A function is even if:
```
f(x) = f(-x)
f(1) = f(-1)
```

This could any function that is symetric and not just for x^2.

#### Odd Functions
Not to be confused with odd numbers.
```
f(x) = x^3
f(1) = 1^3   = 1
f(-1) = -1^3 = -1
f(2) = -2^3  = 8
f(-2) = -2^3  = -8
```

A function is odd if:
```
f(x) = -f(-x)
```

#### Line 
```
f(x) = mx + b
m = slope of the line which is the change in y / change in x, or delta y and delta x
b = the y intercept when x is 0. (0, y)
```

```
y = 2x + 3

            2
m = slope = -
            1

b = y = 2(0) + 3
b = y = 3
```
So we now know that the interept is at point (0, 3)


### Place value
```
                              10000         1000      100       10       1
 +------+------+------+------+----------+---------+--------+--------+---------+
 |      |      |      |      |          |         |        |        |         |
 +------+------+------+------+----------+---------+--------+--------+---------+
                              10^4=10000 10^3=1000 10^2=100 10^1=10  10^0 = 1
```

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
y with y etc. This does not have anything to do with the magnitude (length) of the
vector, it is based only on it's direction.
One way to visualize this is taking rotating the vectors so that one becomes 
the x-axis. Then the project is the other vectors length on this x-axis.

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
i = imaginary unit

Definition:
```
i² = -1         i =√-1
Just like:
2² = 4          2 = √4
```

We can't take the quare root of -1 but this is useful sometimes in math so an
number was introduced to allow this:
The definition is :
```
i^2 = -1
```

Here are some examples of using different values for he exponent of i:
```
i⁰ = 1
i^1 = i
i^2 = -1
i^3 = i^2 * i = -1 * i = -i
i^4 = i^2 * i^2 = -1 * -1 = 1
i^4 = i^3 * i = -i * -1 = 1
Notice that i^4 is the same as i^0
i^5 = i^4 * i = 1 * i = i
Notice that i^5 is the same as i^1
i^6 = i^5 * i = 1 * i = i * 1 = -1
Notice that i^6 is the same as i^2
```

This cycle continues.
```

      Im  ^
         i-
          |
          |
<----|---------|--------->
    -1    |    1 (i⁰)
          |
        -i-
```

√-52 can be simplified to:
```
√(-1)(52) = √-1 * √52
```

Now √-1 is also our definition of i so we can replace it:
```
i * √52 

 √52 
 / \
2 * 26
   /  \ 
  2   13

i * √52 = i * √4*13
        = i * √4 * √13
        = i * 2 * √13
        = 2 * √13 * i
```

### Complex numbers
Are similar to vectors and we can add and subtract complex numbers like vectors.
They also have components, length, and direction.

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
    

### Radicals/Roots
You write a radical with a funny sign that almost looks like a division: 16√=4. 
There is an invisible '2' inside the square root sign, since we are finding two
numbers multiplied together that equal 4. If we are finding 3 numbers multiplied 
ogether, we are taking what we call the cube root of a number and we put a little 3 in the root sign.

It's called because you can take the number and multiply it by itself. 
Just like you would with a square
```
+-----+
|     |
|     | 2
+-----+
  2

2^2 = 2^1 * 2^1 = 2^(1 + 1) =
4^2 = 4^1 * 4^1 = 4^(1 + 1) =

2^0,5 = 2^(0,5 + 0,5) = 2^1
```
Taking the square root of a number is the same thing are raising it to the 1/2:
```
√16 = 4
```
Take √9 * √9 = 9 (3 * 3 = 9)
√9 = 9^1/2 we can express √9 * √9 as:
```
9^1/2 * 9^1/2 = 9^1/2+1/2 = 9¹
```


### Visualizing multiplication
Lets take 3 * 4 = 12. Imaging you have 3 blocks:
```
	+----+
	|    |
	+----+
  3	|    |
	+----+
	|    |
	+----+
```

And the 4 is those 3 blocks 4 times:
```
	+----+----+----+----+
	|    |    |    |    |
	+----+----+----+----+
  3	|    |    |    |    |
	+----+----+----+----+
	|    |    |    |    |
	+----+----+----+----+

                  4
```

### Fractions

Recall that one or a whole is 
```
  +--------------+
  |              |
  +--------------+

1
_ :
2
  +--------------+
  |      |       |
  +--------------+
```

Remember that we are asking how many groups are in something.
```

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
```

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

### Unit circle
Is a circle where the radius is 1 for. Also if you take this length of one and
curve it and then add three of them (back to back) along the circle you find
that they almost complete half the circle. The little bit remaining is about
0.14 long. So this in total will be 3.14 for half the circle. So half the circumference
is π, then the whole circle must be π + π or 2π.
Remember that the cicumference forumla:
```
C = 2πr
```
And in the case of a unit circle `r` is just 1.


```
Angle (Degrees)       Angle (Radians)    Coordinates of Points on circle
0                     0                  (1, 0)
30                    π/6                (√3/2, 1/2)
45                    π/4                (√2/2, 2/2)
60                    π/3                (1/2, √3/2)
90                    π/2                (0, 1)

120                   2π/3               (-1/2, √3/2)
135                   3π/4               (√2/2, √2/2)
150                   5π/6               (√3/2, 1/2)
180                   π                  (-1, 0)

210                   7π/6               (-√3/2,-1/2)
225                   5π/4               (-√2/2,-√2/2)
240                   4π/3               (-1/2,-√3/2)
270                   3π/2               (0,-1)
300                   5π/3               (1/2,-√3/2)
315                   7π/4               (√2/2,-√2/2)
330                   11π/6              (√3/2,-1/2)
360                   2π                 (1, 0)
```

Note that the points are calculated as P = (Px, Py) = (cos(angle), sin(angle))

Looking at the radians and I understand the first quarter being, π/2, π/3 etc but
for the second quarter. Remember that our starting position is (1,0) and the
radian is similar to degrees going from 0-180, but radians go from 0-π.
In the second quarter we have to take into account the first half that so for
the first entry we can just multiply with 2π/3.

Also notice that the if we ignore the sign for a moment there are only three
lengths for both sine and cosine:
```
short: 1/2
medium: √2/2
long: √3/2
```

```
|---|---|---|---|---|---|---|---|--->
0   π   π   π   2π  5π  π
    -   -   -   --  --
    6   3   2   3   6

    1   2   3   4   5   6
|---|---|---|---|---|---|---|---|--->
0   6   6   6   2*6 5*6 6
    -   -   -   --  --
    6   3   2   3   6
```

A few important angles to remember are:
```
30 / π/6
45 / π/4
60 / π/3
```

Take 30, π/6, (√3/2, 1/2):
```
                |  1
                |  -
                |  2
                |
----------------+
     √3
     --
      2
```


### Trigonometry

### sine/cosine
Think of sine, cosine as the y and x axis of a dome. Sine is where we hang a screen and x is the length from 
us the screen will be. The closer to the origin from 0.0 - 1.0 on the x axis, the larger the screen.
As we make the screen larger (y moves towards 1) the distance (x moves towards 0) decreases.

Remember that the trig functions sine, cosine, and tangent all deal with percentages. 
Having a exact hight (for y which is related to sine) does not say much about the hight at all in fact.
If it is 50 cm is that a small or a big "screen" relative to the whole circle (the "dome"). But if we know that 50
is 80% then we know much more.

Cosine is the ratio between the x axis and hypo.

You can see simply plot using `gnuplot`:
```console
$ gnuplot -e 'set term dumb; plot cos (x);'
```
And use Grapher to see "nicer" looking graphs but gnuplot is pretty nice when
you don't want to leave the shell.

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

The derivative for sin(x) = cos(x)
If you plot a graph with y = sin(x) and one with y = cos(x) you will be able
to visually see that where the first curve has a slope of 0 it will match the
value of the second curve (the cos curve).
So when y` = sin(x) = 0, that will be equal to cos(x).
```
d
-- [sin x] = cos x
dx

d
-- [cos x] = -sin x
dx
```


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

Take a deck of cards:
4 different suites/types wich 13 in each
4 * 13 = 52

        4      1
P(5) = ---- = ---
        52    13

                   1  
P(5 and hearts) = ---
                   52

                   4     13     17-1
P(5 or hearts) =  --- +  -- =  ---
                  52     52     52

Note that there will be a card which is both a 5 and of types heart which is why
we need to subtract the difference.

Notation:
y-hat = P(y=1|x) 
y-hat will tell us the probability that the x is of some specific type, for example if it is a picture of a
cat then the value of y-hat would be 1.


### Combinatorics


#### Permutations
Say you have three different chairs, a, b, and c. How many different ways
can you combine hem:
1. abc
2. acb
3. bac
4. bca
5. cab
6. cba

Permuations: 3! = 3 * 2 * 1 = 6
The number of ways to order/arrange the list/array.


Now, lets say you have 4 chairs and 5 people to sit:
People: a, b, c, d, e

5  4  3  
-  -  -  = 5 * 4 * 3  = 60
1  2  3      

So, for a normal permutation we could use factorials. How does that relate to 
this problem?
5! = 5 * 4 * 3 * 2 * 1 = 120
But above we never did (2 * 1) so that would be the same as:
5 * 4 * 3 * 2 * 1
----------------- = 60
    2 * 1

 5!
--- = 60
 2!

But why 2 when we have 3 chairs? Well we left out two people from our list and
we have three chairs. 5 - 3 = 2, so we could re-write the above as

So, there are six options of sitting on the first chair, 5 on the second etc.
    5!
 -------- = 60
 (5 - 2)!

        n!
nPr = -----
      (n-r)!

How many 3 letter words are there in the english alphabet?
We have 26 letters in the alpabet:

26  26  26   
-   -   -  =   26³
1   2   3    
So above we are allowing repeating letters, so aaa, bbb are alright. But what
if we don't want to allow that?

26  25  24     26!
-   -   -  =  -------  = 15600
1   2   3     (26-3)!

Note that 26*25*24 = 15600

0! = 1
This is required, consider the situation where you have the same number of 
items and:
nPk = n!/(n-k)!
1  2  3
-  -  - = 3!/0! which has to be one to work out. 
1  2  3


### E

### Useful rules

#### Exponent in divisor
```
  1
---- = 1x^-n
 x^n
```

Why is this true?
```
 2     2
--- = --- = 0.03125
4³    64

2*4^-3 = 0.03125
```
This works because 
```
        2       2
4^-³ = --- = -------
        4³    4*4*4
```
So what we are doing is going from the middle representation above to the 
first (that has the negative exponent).

This works both ways, so if you have a negative exponent you can rewrite it.

Product rules:
```
a^n * a^m = a^n+m

a^n * b^n = (a * b)^n
```

Quotient rules:
```
a^n / a^m = a^n-m

a^n / b^n = (a / b)^n

        u(x)       u`(x) v(x) - u(x) * v`(x)
f(x) = -----  =   --------------------------
        v(x)           [v(x)]^2
```

Power rules:
```
(b^n)^m = b^n*m
b^n^m = b(n^m)      2^3^2 = 2(3^2) = 512

m * sqrt(b^n) = b^n/m
b^1/n = n * sqrt(b)
```

Negative exponents:
```
b^-n = 1/b^n

2^-3 = 1/2^3
```

### Add one, subtract one
So I ran into this when looking into deriving the sigmoid function and at one stage +1 and -1 
were added to simplify the expression.


### odds
       P(occuring)            p
odds = -----------        = ------
        P(not occuring)     (1 - p)

The later is called the logit function which is the log of the probabilities and used in 
logistic regression.

              0.5
odds(heads) = --- = 1 or 1:1
              0.5 

### odds-ratio
Is the ratio of two odds.
Fair coin flip:
           1 
P(heads) = - = 0.5
           2

               0.5
odds(heads) =  --- = 1 or 1:1
               0.5

Loaded coin flip:
            7
P(heads) = --- = 0.7
            10
                 0.7
odds(heads) =    --- = 2.333
                 0.3

              odds_1     p1/(1-p1)
adds ratio = ------- =   ---------
              odds_2     p2/(1-pw)
               
             0.7/0.3    0.7   0.5   0.35
odds ratio = ------- =  --- * --- = ---- = 2.333
             0.5/0.5    0.3   0.5   0.15

The odds of getting "heads" on the loaded coin are 2.333 times greater than with the fair coin.
           
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

Remember that the max probability is 1 so if we take 1 minus probability of winning we get
the probability of the event not occuring, in our case not winning.

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

log here is the natural log of the odds ration (ln).
logit:
                p
ln(odds) -> ln(---)  is logit(p) of ln(p) - ln(1-p) = logit(p)
               1-p

And recall that log_e^x = ln x.

The inverse of the logit function is:
               p                            1         e^a
logit(p) = ln(----)        logit^-1(a) = -------- =  --------
              1-p                        1 + e^-a     1 + e^a

How did we get to that last simplification?  

      1              1          1 * 2^3                   2^3
  ---------  =  ----------- =   --------             =  --------
  1 + 2^-3       1     1              1    1             2^3 + 1
                 - +  ---       2^3 * - + --- * 2^3
                 1    2^3             1    2^3

I think the point here is that when you want to get rid of the fraction in the denominator
you have to take into account that the denominator is the whole term (1 + 1/2^3 in this case).

Logit is sometimes called the mean function:

          1         e^a
μy|x = -------- =  --------
       1 + e^-a     1 + e^a

The mean of y given x is the same as the inverse logit we say above.

### Sums/products
The symbol ∑ is the summation symbol, like a for look which adds up the components inside.
The symbol π (capital PI, coproduct) is similar but multiplies instead. 

### Stochastic
Means something that is randomly determined. 

### Descrete vs continuous
Descrete (distinct) is data that can only take a certain value, like number of students in a class (
you can't have half a student).
Continuous data can take any value (within a range), like a persons height.


### Statistics
What if you have a function say f(x) for which we have multiple values. Imagine a scatterplot where
there are multiple different values for x = 4. What value should be returned?
f(4) = E(Y|X=4)
Read as the expected value of y when x equals 4. Expected in this case mean average, like if I pass
in 4 I'd expect it to be a value of 4. We can only output a single value for y remember.
This is called a regression function and is a curve of all these average values.
But what if there are now values for a given x, like that particulare point does not have any values to average?
For this we can use N(x) which stands for Neighborhood of x.


### Bernoulli distribution
P(X=x) = p^x (1 - p)^(1-x)
This is basically a short hand way of writing:
P(success) = p
P(failure) - 1 - p
P(X=1) = p^1 * (1 - p)^(1-1) = p * (1 - p)^0 = p * 1 = p
P(X=0) = p^0 * (1 - p)^(1-1) = 1 * (1 - p)^0 = 1 - p

### Variance
The average of the squared differences from the Mean
1. Calculate the Mean (sum of numbers/count)
2. For each number subtract the mean and square the result which is the squared differenct
   Find the distance to the mean (think of it a a line)
3. Calculate the average for those squares

Example:
600 + 470 + 170 + 430 + 300 / 5 = 394
σ² = (600 - 394)² + (470 - 394)² + (170 - 394)² + (430 - 394)² + (300 - 394)² / 5 
   =    42436     +    5776      +    50176     +    1295      +  8836 / 5
   = 108520 / 5 
   = 21704

So the standard deviation is the square root of 21704.

### Why square
In these cases we are adding up differences from the mean and say we have:
     3|
2 |   |
  |   |
----------------------
-2| -3|
  |   |
      |
2 + 3 + (-2) + (-3) = 0

But what if we use absolute values instead:
2 + 3 + |-2| + |-3| = 10
      
     5|
      |
 3|   |
  |   |
  |   |
----------------------
-1| -1|

sqrt(2^2 + 3^2 + 2^2 + 3^2) = 5.099
sqrt(3^2 + 5^2 + 1^2 + 1^2 = 6
While this difference is not much (mostly because of the number I chose) there is a difference.
The difference is bigger when the values are more spread out.



### Standard Deviation
Is a measure of how spread out numbers are. Deviation means how far from the normal.


### Terms
#### Feature
Like a column in a table.
Synonyms: attribute, input, predictator, variable

#### Outcome 
The outcome of the of an experiment or study.
Synonyms: dependant variable, response, target, output

Think of y = f(x), y is function of x, it is dependant on x. And x is our independant variable.

#### Records
A row in the table.
Synonyms: case, example, instance, observation, pattern, sample.


### ANOVA (ANalysis Of VAriance)

### Degrees of freedom
Say you toss a coin, you know that it will either be heads or tails. If we know
the outcome we also know what the other possible value would be. Like we the 
coin lands on heads we know that the only other possibility would be tails.
We say that only one piece of information is required to also work out that
we did not get tails. This is an example of a system with a one degree of 
freedom.
Likewise if we toss the coin 100 times and using a single piece of information,
how many heads we got, we know how many tails there were too, so this is still
a system of 1 degrees of freedom.

Say you are talking with a friend on the phone and he says he is waiting at a
trafic light. You ask what color the light is (red, yellow, or green) and he
says "not green". You can't determine the color without more information. But
if he now says "not yellow" then we know the light is red. You needed to pieces
of information. There where 3 possible outcomes and 2 degrees of freedom.

degrees of freedom = k-1
k = the number of categories (heads, tails)

So our first example would yield:
df = 2 - 1 = 1

To calculate the mean (x bar) we don't have any pre-existing knowledge of
anything (not outcomes for example):

x_bar = ∑ x
       -----
         N

But when we go to calculate the standard deviation we use the mean:

SD = √ ∑(x₁ - x_bar)²
       --------------
          N-1

Lets say we have the following values:
x₁ = 4
x₂ = 5
x₃ = 6
x_bar = (4 + 5 + 6)/3 = 15/3 = 5

SD = √ (4-5)² + (5-5)² + (6-5)² 
       ------------------------
                 2

   = √  1 + 1 + 1
       ------------------------
           2
   = √3/2 = 1.2247

If you know the mean the last value i your sample is no longer independant. If
we know the mean is 5 and we have two or the three values 4, 5 we know that the
last value is 6.


### Quantum computing
Representing classical bits as a vector:
One bit with the value 0:
(1
 0)
This can also be written in Dirac vector notation as: |0>
One bit with the value 1:
(0
 1)
|1>

If we think of this as a vector originating from the origin (0) then the
0 will be along the x axis, really a unit on it. And 1 will be a unit in the
y axis and x will be zero.

Quantum computing uses these vectors (and later matrixes) just like a normal 
computer would use bits and bytes.

(1 0 0 0   (0      (0
 0 0 1 0    1    =  0
 0 1 0 0    0       1
 0 0 0 1)   0)      0)

There are 4 operations on a single bit:
1) Set it to 1
2) Set it to 0
3) Negate/Not~
4) Identity (multiplied by 1)

Identity:
f(x) = x    0 -> 0     (1 0  (1   = (1        (1 0  (0   = (0
            1 -> 1      0 1)  0)     0)        0 1)  1)     1)
Is reversable. If we know the outcome and the operation we can reverse this.

Negation:
f(x) = ¬x   0 -> 1     (0 1  (1   = (0        (0 1  (0  = (1
            1 -> 0      1 0)  0)     1)        1 0)  1)    0)
Is reversable. If we know the outcome and the operation we can reverse this.

Constant-0
f(x) = 0    0 -> 0     (1 1  (1  = (1*1 + 0*1  = (1     (1 1  (0   = (0*1 + 1*1  = (1
            1 -> 1      0 0)  0)    1*0 + 0*0)    0)     0 0)  1)     0*0 + 0*1)    0)
Is not reversable. If we know the outcome and the operation we still can't know
the input value, it would be either 0 or 1.

Constant-1
f(x) = 1    0 -> 1    (0 0  (1  = (0         (0 0  (0  = (0
            1 -> 1     1 1)  0)    1)         1 1)  1)    1)
Is not reversable. If we know the outcome and the operation we still can't know
the input value, it would be either 0 or 1.

Quantum computers only use reversable operations.
Also all operations are there own inverse, so if you apply the operation twice
you get back the input value.


A qbit is represented by (a
                          b) where a and b are complex numbers and
||a²|| + ||b²|| = 1



### Distibrute sign
-(8 + 2) 
Notice that the negative sign is outside of the parentheses and could also
be written as:
-1(8 + 2)
And that would give
= ((-1* 8) + (-1*2)
= -8 + -2
 =-10
So the sign of each term in the group is changed.

### Theorm
For any integer x ≥ 0 and any list of n + 1 points (x₀, y₀),(x₁, y₁),...(xn,yn)
in R² with x₀ < x₁ < ... < xn, there exists a unique degree n polynomial p(x)
such that p(xi) = yi, for all i.

So we have an list of pairs of... 

### E
If we think of something that doubles in growth for a time period it will go
from 1 - 2 after 1 time period. 
growth = 2^x
2⁰ = 1
2¹ = 2
2² = 4
2³ = 8
2⁴ = 16
2⁵ = 32
2⁶ = 64
...
This could also be written as:
growth = (1 + 100%)^x
1 is the original value which we double x number of times.

But things don't really grow that was. 

Is defined as:
            1
e(n) = (1 + - )^n
            n

1        (1+1/1)¹ =  2¹         = 2
2        (1+1/2)² =  1.25²      = 2.25
3        (1+1/3)³ =  1.3333...³ = 2.37037037
4        (1+1/4)⁴ =  1.25⁴      = 2.4414
5        (1+1/5)⁵ =  1.2⁵       = 2.48832
6        (1+1/6)⁶ =  1.16.....⁶ = 2.5216
100000   (1+1/100000)^100000    = 2.718268237

e is the rate of growth if we continually compound 100% return on smaller
and smaller time periods.

perfect compound growth = e = lim (1 + 1/n)^1*n
                              n=∞

The first 1 is the unit quantity. The second 1 (in 1/n) is the earning unit 
interest. The third (^1*n) is the unit time.
n is the number of periods to split the growth into.

As we take finer and finer time periods the total return stays around 2.718.
Notice that we are taking smaller and smaller values since we are dividing 1/n.

2.718 is the max possible return when compounding 100% growth for 1 time period,
if we start with 1 SEK and get 100% compound return we would get 1e = 2.718...
If we start with 2 SEK we would get 2e = 5.436

Say we don't want 100% rate but only 50%? 
e = lim (1 + 0.5/n)^1*n
    n=∞

1 = (1 + 0.5/1)^1*1 = 1.5^1 = 1.5
2 = (1 + 0.5/2)^1*2 = 1.255^1 = 1.25


When we write e^x the variable x is a combination of rate and time.
growth = e^x = e^r*t

Logarithm naturali (ln) is the inverse of e. So if e gives us the growth for
x units of time, then ln gives us the time for a specific growth. Now recall
that what e is raised to is a combination of rate * time. 

ln(x) = log_e(x)


e³ = 20,085533692
Is asking for the max growth for 3 time units.
ln(20,085533692) = 3

ln(1) 
How long do I have to wait to get my current amount?

ln(negative nr) = undefined

ln(0.5)
How long would it take to get half of my current amount.



### Entropy
In physics entropy is the number of microstates or microscopic configuration.
If the particles inside a system have many possible possitions to move around
then the system has high entropy, and if not it has low entropy.
Entropy in probability:
     1                       2                         3
 [ 0 0 0 0 ]             [ 0 0 0 x ]               [ 0 0 x x ]
 Most knowledge          Some knowledge            Least knowledge
 Low entropy             Medium entropy            High entropy

If we pick something from the first bucket we know it will be a 0.
If we pick something from the second bucket there is a 75% chance of it being 0
and 25% chance of it being an x.
If we pick something from the third bucket the chances are 50% that it is going
to be a 0 and 50% of it being an x.

So, we know we have a high probablity for the 1 bucket, but low entropy. How do
we get a formula that give a low entropy for a high probability, and a high entropy 
for a low probability?

What are the different ways we can arrange the items in the bucket.
For the first one there is only one combination:
0 0 0 0

1 1 1 1
- - - -
1 2 3 4

For the second bucket we have the following:
0 0 0 x
0 0 x 0
0 x 0 0
x 0 0 0

2⁴ = 16

We have 4 possible combinations.

For the third bucket we have the following:
0 0 x x
x x 0 0
x x 0 0

Game:
1. Choose one of the buckets.
2. We are shown all the items in the bucket, in some order and then the items
are placed back in the bucket.
3. We pick one item from the bucket, record its value, and return the item to 
the bucket.
4. If the items recorded match the squence from step 2 then we win, and if not
we loose.

Take the second bucket for example:
 [ 0 0 0 x ]
So lets try to draw item in that order to win, what is the probability of doing
that?
1. The first item is 0 3/4 (0.75)
2. The second item is 0 3/4 (0.75)
3. The third item is 0 3/4 (0.75)
4. The fourth item is x 1/4 (0.25)
These are all independant values as we put the items back every time.

(3/4) * (3/4) * (3/4) * (1/4) = 27/256 = 0.105

For the first bucket:
(4/4) * (4/4) * (4/4) * (4/4) = 256/256 = 1

For the third bucket:
  [ 0 0 x x ]
(2/4) * (2/4) * (2/4) * (2/4) = 16/256 = 0.0625
(1/2) * (1/2) * (1/2) * (1/2) = 1/16   = 0.0625
  0.5 * 0.5   * 0.5   * 0.5   = 16/256 = 0.0625

Probabilities:
Bucket 1: 1
Bucket 2: 0.105
Bucket 3: 0.0625

Now for entropy we want the opposite, some measure that gives a low value for
bucket 1 and a high value for bucket 3.

In this example we only have 4 items in each bucket so using multiplication is
not too bad. But imagine if we had millions of items in each bucket. We would
be multiplying and producing a very tiny number. How about using a sum instead.

 0.75 * 0.75  * 0.75  * 0.25  = 0.105
-log₂(0.75) - log₂(0.75) - log₂(0.75) - log₂(0.25)           = 3.245112498
-log₂(0.75) + (-log₂(0.75)) + (-log₂(0.75)) + (-log₂(0.25))  = 3.245112498
We are using negative/opposite/subtraction or otherwise the answer will be negative.
We are using probabilities and they will be between 0 and 1. And log of a number
less than 1 will be a negative number.

We can then take the average (remember we have four items so we just divide by
3.245112498/4). Which can also be written as:
1/4 (-log₂(0.75) - log₂(0.75) - log₂(0.75) - log₂(0.25)) = 0.8112781245
1/4 ( (-0.4150)  - (-0.4150)  - (-0.4150)  - (-0.4150))  = 0.8112781245

1/4 (-log₂(1) - log₂(1) - log₂(1) - log₂(1)) = 0
1/4 (0 - 0 - 0 - 0) = 0
1/4 (0) = 0

1/4 (-log₂(0.5) - log₂(0.5) - log₂(0.5) - log₂(0.5)) = 1
1/4 ( (-1)      - (-1)      - (-1)      - (-1) = 1

m = number of 0
n = number of x
           -m          m      -n          n
Entropy = ---- * log₂(---) + ---- * log₂(---)
           m+n        m+n     m+n        m+n

So using the above forula we can calculate for the second bucket like this:
m = 3
n = 1

           -3          3      -1          1
Entropy = ---- * log₂(---) + ---- * log₂(---)
           3+1        3+1     3+1        3+1
        
           -3                  -1          
Entropy = ---- * log₂(0.75) + ---- * log₂(0.5)
            4                   4        

           -3                      -1          
Entropy = ---- * -0.4150374993 +  ---- * -2
            4                      4        

Entropy = 0.312781245 +  0.5
Entropy = 0.8112781245
          
If molecules have many possible rearrangements, then the system has high 
entropy, and if they have very few rearrangements, then the system has low entropy.

### Series
Is about adding up sequences of numbers.
Think about a square with the area of 1. Then divide it into two halves, each
of 1/2. Now divide one of them in half again and you'll get 1/4
+--------------------+
|         1/2        |
|                    |
|--------------------+
| 1/4      |      1/6|
|          |  1/8    |
+--------------------+
And keep doing this. We know that the area is one and all the parts should add
up to one.
1/2 + 1/4 + 1/8 + 1/16 + 1/32 + 1/64 ... = 1

So, while the series is infinite it will converge to 1.
A convergence is defined by looking at the sequence of partial sums:
     1
S₁ = -
     2

     1   1   3
S₂ = - + - = -
     2   4   4

     1   1   1   7
S₃ = - + - + - = -
     2   4   8   8

Taking the partial sums gives a sequence of numbers that get closer and closer
to 1. But there other series where the sequence of numbers do this. For example
S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1 ...

#### Geometric sequence
```
{ 1, 1/2, 1/4, 1/8, ... } = {a_n}^∞ with a_n = 1(1/2)^-1

Index
1    = 1 * 1/2^(1-1) = 1 * (1/2)^0 = 1 * 1 = 1
2    = 1 * 1/2^(2-1) = 1 * (1/2)^1 = 1 * 1/2 = 1/2
3    = 1 * 1/2^(3-1) = 1 * (1/2)^2 = 1 * 1/2 = 1 * (1/2 * 1/2 * 1/2) = 1 * (1/2^3) = 1 * 1/8
...
```

#### Geometric series
Is the sum of a geometric sequence, for example
```
{1, 1/2, 1/4, 1/8,...}
```

```
S = a + ar + ar² + ... + ar^(n-1)
```
`r` is the common ratio. For example, {in a⁰, ar¹, ar², ar³} the ratio is
```
ar³           2³    8
--- = r       -- =  - = 2
ar²           2²    4
```

Is called geometric because it is like the dimentions in geometry:
<---- n ----->           1D just a line.

+----+
|    |
| n² |                   2D a square
+----+

                         3D a square

...

Forumla:
```
n-1          1-r²
∑ (ar^k) = a(----)
k=0          1-r
```
How did we get that formula?  
```
S = a + ar + ar² + ... + ar^(n-2) + ar^(n-1)
```
We multiply `S` by `r`:
```
S*r = ar + ar² + ar³ + ... + ar^(n-1) + ar^n
```
Next we subtract S - Sr:
```
   S = a + ar + ar² + ... + ar^(n-2) + ar^(n-1)
-S*r =   - ar - ar² - ... - ar^(n-1) - ar^(n-1) - ar^n
------------------------------------------------------
-S*r =   - ar                                   - ar^n
```
Notice how all the middle terms cancel out leaving us with:
```
S-Sr = a - ar^n
```


#### Rotating the parabola
```
y = x²
```
This is a parabola with the tip at the origin.
```
y = x² - 2
```
This is also a parabola but with all y values -2.
If you instead add all y values will be shifted upwards.
We add/subtract 2 from all y-values we get from the basic curve y = x².

```
y = (x - 1)²
```
Notice the parentheses here! Notice that we are squaring so y will never be 
negative. 
What happens if we set x = 0, -1² = 1. (0, 1)
What happens if we set x = 1, 0² = 1.  (1, 1)
This will be shifted to the right.

```
y = (x + 2)²
```
Will move the parabola 2 units to the left.

Now, lets see how we can rotate the parabola.
```
y² = x
```
This represents a parabola rotated 90 degrees to the right.
This is actually two functions:
```
y = √x         top half
y = -√x        bottom half
```
Try x = 0 and you get √0 = 0, -√0 = 0 (0, 0)
Try x = 1 and you get √1 = 1, -√1 = 0 (1, 1), (1, -1)
Notice that we get two values for each y value of x larger than 0. This is called
a relation.

### Euclidian Algorithm
Is an algorithm to find the greatest common denominator.
For example
```
gcd(10, 45)
45 = 10 * q + r
q = how many times does 10 go into 45
r = is the remainder
45 = 10 * 4 + 5
     |        |
+----+  +-----+
10    = 5 * 2 + 0
When we get a remainder of 0 we are done.
```

### Extended Euclidian Algorithm
The normal Euclidiean algorithm is:
```
gcd(13, 7)
```
Bezout's theorm:
```
13s + 7t = gcd(13, 7)
```
Extends the Ecludian alg to also tell us what `s` and `t` are.

13 = 7(?) + (?)
13 = 7(1) + (6)

7 = 6(?) + (?)
7 = 6(1) + (1)
6 = 1(6) + (0) <--- we are done

gcd(13, 7) = 1

### Absolute number
Is defined as the distance from zero (neither positive or negative).


### Euler formula
```
e^iπ = -1
```
Think about multiplication as a transformation, if you multiply by 2 you are stretching
the number and it becomes double of what it currently is. If you multiply by i
you are rotating. So multiplication takes something and moves it around (stretches/rotates).
Remember that exponential growth e is the continuous growth of something on the 
number line, well sort of. What I mean is that it is growth added continously in
the quantity growing. But if imaginary exponential growth is instead rotation.

```
e^iπ = -1
```
So the forumla means, start at 1 and rotate π (halfway around the circle) to get
to -1.

```
e^i = e^i*1
```
Says that instead of growing normally start growing up (rotating). How far we 
should rotate is given by the `1`, and is one radian.

This comes from a more general form:
```
e^iπ = cos(π) + isin(π)
```
There are two ways to describe motion 

### Cirular Path
Thing about the smoothie process from betterexplained.com about the fourier transform
where we can determine the ingredenents of the smoothie using filters. If we
have filters for all ingreedients we can separate them and the quantity of each.
These need to be independant of each other and it must be possible to combine them
back into the smoothie.

Say you want to draw a circle simultaneously as someone else, you'd have to
describe the circle and tell them how big the radius is (center 
to perimiter) (the amplitude), how fast to draw it (frequency 1 circle/second is
a frequency of 1 Hertz (Hz) or 2*π radians/second), and also where to start (the
Phase angle, where 0 degrees is the x-axis.

Pretty much any pattern can be described as cirular paths.
The cicular path has the following properties:
```
Amplitude the size of the radius.
Speed the frequency or speed that we go along the path
Angle the starting angle
```

1) Start with a time based signal, bascially a signal that does on for a certain 
amount of time. A voice signal for example.

2) Apply filters to measure each possible "circular ingredient", like described with 
the filter for the smoothie.

3) Collect the full recipe
Listing the mount of each "circular ingredient"

For example, if computer data can be represented with oscillating patterns
perhaps the least important ones can be ignored.

The combination of all of the cycles is our signal.

0 Hz means 0 circle/second so never goes around but just follows the x-axis in a
straight line.

The Fourier transform finds the set of cycle speeds, amplitudes and phases to
match any time signal.


### JPEG (Joint Photography Expert Group)
This was super cool and something that I was not aware about before and that is
how cosine is used in the formula for jpeg compression.
At the very basic level take a photo represented as a pixel grid (black/white) 
so only one channel. Take a line or a grid of pixel values (0 represents white, and
100 would be black) with the following 12 numbers:

72 70 65 65 66 68 72 75 80 84 84 89

The average of these numbers is:
72 + 70 + 65 + 65 + 66 + 68 + 72 + 75 + 80 + 84 + 84 + 89
--------------------------------------------------------- = 74.16666
                   12

Next, we can plot these values as a curve.



### Taylor and Maclaurin polynomials
Take a function f(x) which we don't know much about, but we do know that we
can evaluate the function at f(0). So f(0) gives us some value, and we can take
the derivative at that point, and the first derivative, the second and so on.

This is what we know:
```
f(0), f`(0), f``(0), f```(0)...
```
So we what a polynomial that represents the function/graph.
```
p(0) = f(0)
```

We also want the first derivative of our polinomial to be equal to the
functions derivative when evaluated at zero: 
```
p`(0) = f`(0)
```

So we add another term (constraint) to our polynomial:
```
p(x) = f(0) + f`(0)x
```
So the second term in the polynomial is the first power: 
```
p(x) = c₀ + c₁x¹ + c₂x² + c₃x³ + ... +
```
Now passing 0 into our polynomial yields:
```
p(0) = f(0) + f`(0) * 0
p(0) = f(0)
```
So our first constraint still holds true when x = 0.

```
p`(x) = f`(0)   <-- constant value
p`(0) = f`(0)
```


```
              1              1                 1                  1
p(x) = f(0) * - x⁰ + f`(0) * - x¹  + f``(0) * --- x² + f```(0) * --- x³
              0              1                2*1                2*3

```

### Variable-Length Integer Encoding
QUIC packets and frames commonly use a variable-length encoding for non-negative 
integer values. This encoding ensures that smaller integer values need fewer bytes to encode.

The QUIC variable-length integer encoding reserves the two most significant bits 
of the first byte to encode the base 2 logarithm of the integer encoding length in bytes.

This means that integers are encoded on 1, 2, 4, or 8 bytes and can encode 
6, 14, 30, or 62 bit values respectively. 

```
2 bit  Length  Usable bits      Range
00	1	   6	        0-63
01	2	   14	        0-16383
10	4	   30	        0-1073741823
11	8	   62	        0-4611686018427387903
```

37 = 0000 0000 0000 0000 0000 0000 0010 0101
Take the two most significant bytest `01` (the right most bits):
log(01) = 0.
