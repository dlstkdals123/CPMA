## Exercise 4.11
Show the output produced by each of the following program fragments. Assume that ```i```, ```j```, and ```k``` are ```int``` variables.
```
(a) i = 1;
    printf("%d ", i++ - 1);
    printf("%d", i);
(b) i = 10; j = 5;
    printf("%d ", i++ - ++j);
    printf("%d %d", i, j);
(c) i = 7; j = 8; 
    printf("%d ", i++ - --j);
    printf("%d %d", i, j);
(d) i = 3; j = 4; k = 5;
    printf("%d ", i++ - j++ + --k);
    printf("%d %d %d", i, j, k);
```

## Answer
(a)   
My answer : 0 2   
Actual answer : 0 2   

(b)   
My answer : 4 11 6   
Actual answer : 4 11 6   

(c)   
My answer : 0 8 7   
Actual answer : 0 8 7   

(d)   
My answer : 3 4 5 4   
Actual answer : 3 4 5 4   
