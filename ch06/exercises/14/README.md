## Exercise 06.14
Find the error in the following program fragment and fix it.
```C
if (n % 2 == 0);
    printf("n is even\n");
```

## Answer
My answer
```C
if (n % 2 == 0)
    printf("n is even\n");
```

Actual answer
```C
if (n % 2 == 0)            /* removed semicolon */
    printf("n is even\n");
```
