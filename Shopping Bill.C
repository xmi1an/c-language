#include <stdio.h>
int main()
{
    char cname[20], gender[6], pname[10];
    int qty, price, total;
    int pen = 10;
    int pencil = 5;
    int discount;
    float netprice;

    printf("Enter Customer Name : ");
    scanf("%s", &cname);

    printf("Enter Gender : ");
    scanf("%s", &gender);

    printf("Enter Product Name : ");
    scanf("%s", &pname);

    printf("Enter Qty : ");
    scanf("%d", &qty);

    printf("Enter Price : ");
    scanf("%d", &price);

    total = (price * qty);
    printf("_____________________________________");
    printf("\nTotal = %d", total);
    if (total >= 1500)
    {
        printf("\nWooho..You got 15% Discount..\n");
        discount = (total * 15) / 100;
        netprice = total - discount;
        printf("You have to paid: Rs.%2f", netprice);
    }
    else if (total > 1000)
    {
        printf("\nWooho..You got 10% Discount..\n");
        discount = (total * 10) / 100;
        netprice = total - discount;
        printf("You have to paid: Rs.%2f", netprice);
    }
    else if (total > 500)
    {
        printf("\nWooho..You got  5% Discount..\n");
        discount = (total * 5) / 100;
        netprice = total - discount;
        printf("You have to paid: Rs.%2f", netprice);
    }
    else if (total < 500)
    {
        printf("\n Sorry! Discount is Not Avaiable for you!");
    }

    printf("\n\nThank you for Shopping %s \n\n", cname);
}
