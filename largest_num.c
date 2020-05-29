//Program to find the Largest number among 3 input Numbers

#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    else if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);

    else
        printf("%d is the largest number.", n3);
}
