/*#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}*/
#include <stdio.h>  
#include <math.h>  
int main ()  
{  
int base, exp;  
int result;   
printf (" Enter the base value from the user: ");  
scanf (" %d", &base);  
printf (" Enter the power value for raising the power of base: ");  
scanf (" %d", &exp);  
  
result = pow ( base, exp);  
printf (" %d to the power of %d is = %d ", base, exp, result);  
return 0;  
}  