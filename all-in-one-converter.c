#include <stdio.h>
int main()
{
    int ch;
    float rupee, doller, cm, n, km;
    float feet = 0, celsius, fahrenheit, pound;
    const float kilogram = 0.453592;

    printf("\n\n************ All in One Converter 2020 ***************");
    printf("\n\n 1. Doller -> Ruppes");
    printf("\n\n 2. Rupees -> Doller");
    printf("\n\n 3. Centimeters  -> Feet");
    printf("\n\n 4. Kilometer  -> Feet");
    printf("\n\n 5. Pound  -> Kilogram");
    printf("\n\n 6. Fahrenheit  -> Celcius");
    printf("\n\n 0. Exit");
    printf("\n\nEnter your choice : ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("\n\nEnter the currency in Dolller : ");
        scanf("%f", &doller);
        rupee = doller * 75.30;
        printf("\n\nThe currency in Ruppes is = %.2f", rupee);
        break;
    case 2:
        printf("\n\nEnter the currency in Rupees : ");
        scanf("%f", &rupee);
        doller = rupee / 75.30;
        printf("\n\nThe currency is doller is = %.3f$", doller);
        break;

    case 3:
        printf("\n\nCentimeters to Feet : ");
        scanf("%f", &cm);

        feet = cm / 30.48;
        printf("\n\nCentimeters to Feet = %f", feet);
        break;

    case 4:
        printf("\n\nKilometer to Foot : ");
        scanf("%f", &km);

        feet = km * 3281;
        printf("\n\nKilometer to Foot : %.2f", feet);
        break;

    case 5:
        printf("\n\nEnter weight in pounds :");
        scanf("%f", &pound);

        pound *kilogram;

        printf("Weight in Kilograms is %f\n", (pound * kilogram));
        break;

    case 6:
        printf("\n\nFerenhit to Celcius : ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
        break;
    case 7:
    default:
        printf("Invalid Choice!");
        break;
    }
}
