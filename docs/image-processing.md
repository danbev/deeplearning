### Image processing


### Memory representation
Take a 2x2 image and lets see how it might be stored in memory:
```
+----+----+
| 1  |  2 |
+----+----+
| 3  |  4 |
+----+----+

            stride
        |-------------|
+-------+----+----+---+----+----+
|Header | 1  | 2  | P | 3  | 4  |
|Hight  |    |    |   |    |    |
|Stride |    |    |   |    |    |
+-------+----+----+---+----+----+
                    |
                   padding

Header
Hight:  (the length of the image in memory).
Stride: 
```
Each pixel representation in memory would have a number of channels, for example
rgb might have 3. And each channel can have a certain number of bits, like 8 bits
allows values between 0-255. If more precision of the colour scale i required the
more bits would be used.
For example 3 channels each of 8 bits:
```
r = 0000 0000 (none) (1111 1111 most of this colour)
g = 0000 0000
b = 0000 0000
```
If you add all the colours together you get white, and if all are 0 the you get
black.
So each pixel will have the following:
```             Alpha`
+----+----+---+----+
| r  | g  | b | a  |
+----+----+---+----+
  8    8    8   8       32 bits
```
```
   red     yellow    green
   
    magenta  white   cyan

             blue

```

To get to a pixel we go from the beginning of the images a certain number of
rows (the stride) plus the pixel index.
```
p = start * stride + pixel_index
```

