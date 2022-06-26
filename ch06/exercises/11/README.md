## Exercise 06.11
What output does the following program fragment produce?
```C
sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);
```

## Answer
My answer : 20   
Actual answer : 20
