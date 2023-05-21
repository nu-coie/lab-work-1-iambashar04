#include<stdio.h>
#include<cs50.h>
int main(void){
   int number=get_int("enter the number: ");
   for(int i=1;i<=number;i++)
     number*=i;
     {
      return number;
     }
   }
   int main (void)
   
      int main(void) {
    int number;

    printf("Enter a number: ");
    number = get_int("");

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int factorial = calculateFactorial(number);
        printf("%d! = %d\n", number, factorial);
    }

    return 0;
   }