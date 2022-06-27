#include <stdio.h>

int main(void)
{
    int i1, i2, remainder;
    
    printf("Enter two integers : ");
    scanf("%d %d", &i1, &i2);
    
    while (i2 != 0) {
        remainder = i1 % i2;
        i1 = i2;
        i2 = remainder;
    }
    printf("Greatest common divisor : %d\n", i1);
    
    return 0;
}
