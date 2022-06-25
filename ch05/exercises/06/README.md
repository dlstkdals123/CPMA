## Exercise 05.06
Is the following ```if``` statement legal?
```C
if (n == 1-10)
    printf("n is between 1 and 10\n");
```
If so, what does it do when ```n``` is equal to 5?

## Answer
My answer : is legal, but is not equal to ```"n is between 1 and 10"```. It will be run when ```n``` equals to -9. So the ```printf``` statement is not run when n is equal to 5
