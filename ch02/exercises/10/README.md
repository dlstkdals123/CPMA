## Exercise 02.10
In the ```dweight.c``` program (Section 2.4), which spaces are essential?

## Answer
Below is the complete ```dweight.c``` program, as written in Section 2.4:

```C
/* Computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    height = 8;
    length = 12;
    width = 10;
    volume = height * length * width;
    weight = (volume + 165) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
```
● is blank

	#include●<stdio.h>
	int●main(void)
	int●height
	return●0;
