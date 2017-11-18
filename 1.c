#include <cs50.h>
#include <stdio.h>

int main(void)
{

    printf("Please input the exponent:");
    int x = get_int();

    printf("The expansion for the polinomial (a+b)^%i is: \n" , x);

   for(int i=0; i<=x; i++)
    {
        printf("%iC%i a^%i b^%i \n", x-i , i , x-i , i);
    }
}
