// MARKSHEET
#include <stdio.h>
int main()
{
    char sname[20];
    int clang, cpp, java, python, php, total;
    float per;

    printf("Enter Student Name :");
    scanf("%s", &sname);

    printf("\n\nEnter Marks\n\n");

    printf("1. C Language : ");
    scanf("%d", &clang);

    printf("2. C++ :");
    scanf("%d", &cpp);

    printf("3. Java :");
    scanf("%d", &java);

    printf("4. Python :");
    scanf("%d", &python);

    printf("5. Php :");
    scanf("%d", &php);

    total = clang + cpp + java + python + php;
    printf("Total Marks = %d \n", total);

    per = total / 5;
    printf("Percentage = % \n\n", per);

    if (per >= 70)
        printf("Grade = A");

    else if (per >= 60)
        printf("Grade = B");

    else if (per >= 50)
        printf("Grade = C");

    else if (per >= 35)
        printf("Grade = D");

    else
        printf("Fail");
}
