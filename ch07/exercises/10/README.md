## Exercise 07.10
Suppose that ```i``` is a variable of type ```int```, ```j``` is a variable of type ```long```, and ```k``` is a variable of type ```unsigned int```. What is the type of the expression ```i + (int) j * k```?

## Answer
My answer : ```unsigned int```   
Actual answer : ```unsigned int```, because the ```(int)``` cast applies only to ```j```, not ```j * k```.
