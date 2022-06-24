## Exercise 03.04
Suppose that we call ```scanf``` as follows:
```C
scanf("%d%f%d", &i, &x, &j);
```
If the user enters
```
10.3 5 6
```
what will be the values of ```i```, ```x``` and ```j``` after the call? (Assume that ```i``` and ```j``` are ```int``` variables and ```x``` is a ```float``` variable.)

## Answer
My answer	: i = 10, x = 5.0, j = 6   
Actual answer	: i = 10, x = 0.3, j = 5   
