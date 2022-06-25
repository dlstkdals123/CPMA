## Exercise 04.10
Show the output produced by each of the following program fragments. Assume that ```i``` and ```j``` are ```int``` variables.
```
(a) i = 6;
    j = i += i;
    printf("%d %d", i, j);
(b) i = 5;
    j = (i -= 2) + 1;
    printf("%d %d", i, j);
(c) i = 7;
    j = 6 + (i = 2.5);
    printf("%d %d", i, j);
(d) i = 2; j = 8;
    j = (i = 6) + (j = 3);
    printf("%d %d", i, j);
```

## Answer
(a)   
My answer : 12 12   
Actual answer : 12 12   

(b)   
My answer : 3 4   
Actual answer : 3 4   

(c)
My answer : 2 8   
Actual answer : 2 9   

(d)
My answer : 6 9   
Actual answer : 6 9   
