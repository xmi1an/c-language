//Check Whether a Number is Even or Odd
#include <stdio.h>
int main()
{
    int number;
    printf("Check Number Odd or Even! \n");
    printf("Enter Number : ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("%d Number is even.", number);
    else
        printf("%d Number is odd.", number);
}
