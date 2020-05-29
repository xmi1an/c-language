// MARKSHEET
#include <stdio.h>
int main()
{
    char sname[20];
    int clang, cpp, java, python, php, total, grace = 8;
    float per;

    printf("Enter Student Name :");
    scanf("%s", &sname);

    printf("\n\nEnter Marks\n\n");

    printf("1. C Language : ");
    scanf("%d", &clang);
    while (clang > 100)
    {
        printf("Invalid Marks! (Please Enter Under 100)\n");
        printf("Re-Enter Marks : ");
        scanf("%d", &clang);
    }

    printf("2. C++ :");
    scanf("%d", &cpp);
    while (cpp > 100)
    {
        printf("Invalid Marks! (Please Enter Under 100)\n");
        printf("Re-Enter Marks : ");
        scanf("%d", &cpp);
    }

    printf("3. Java :");
    scanf("%d", &java);
    while (java > 100)
    {
        printf("Invalid Marks! (Please Enter Under 100)\n");
        printf("Re-Enter Marks : ");
        scanf("%d", &java);
    }

    printf("4. Python :");
    scanf("%d", &python);
    while (python > 100)
    {
        printf("Invalid Marks! (Please Enter Under 100)\n");
        printf("Re-Enter Marks : ");
        scanf("%d", &python);
    }

    printf("5. Php :");
    scanf("%d", &php);
    while (php > 100)
    {
        printf("Invalid Marks! (Please Enter Under 100)\n");
        printf("Re-Enter Marks : ");
        scanf("%d", &php);
    }

    printf("-------------------------------------\n");
    total = clang + cpp + java + python + php;
    printf("Total Marks = %d \n", total);

    if (clang < 35 || cpp < 35 || java < 35 || php < 35 || python < 35)
    {

        printf("You Failed ! \n");
    }
    else
    {
        per = total / 5;
        printf("Percentage = %2f \n\n", per);

        if (per >= 70)
            printf("Grade = A");

        else if (per >= 60)
            printf("Grade = B");

        else if (per >= 50)
            printf("Grade = C");

        else if (per >= 35)
            printf("Grade = D");
    }
}
