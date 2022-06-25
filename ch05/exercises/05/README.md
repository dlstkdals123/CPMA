## Exercise 05.05
Is the following ```if``` statement legal?
```C
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");
```
If so, what does it do when ```n``` is equal to 0?

## Answer
My answer : is legal, but is not equal to ```"n is between 1 and 10"```. When ```n``` is equal to 0, the ```printf``` statement will be run.   
Actual answer : The statement is legal, but confusing. When ```n``` equals 0, the ```printf``` statement will still be run. This is because the left-associativity of the equality test operators: ```n >= 1``` returns 0, and ```0 <= 10``` returns 1 (a true value).
