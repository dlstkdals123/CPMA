## Exercise 06.08
What output does the following ```for``` statement produce?
```C
for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);
```

## Answer
My answer : 10 5 3 2 1 1 1...   
Actual answer : The program will print ```10 5 3 2``` then print an endless stream of ```1``` s. The postfix increment operator in the print statement will always cause the conditional in the ```for``` loop to return true.
