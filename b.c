#include<stdio.h>

int main() {
    int cid;
    char name[50];
    float bill = 0, prev, pres, unit, a;
    
    printf("Enter the Consumer ID: ");
    scanf("%d", &cid);
    printf("Enter the Previous Reading: ");
    scanf("%f", &prev);
    printf("Enter the Present Reading: ");
    scanf("%f", &pres);
    printf("Enter the Name: ");
    scanf("%s", name);

    unit = pres - prev;

    if (unit > 500) {
        a = unit - 500;
        bill += a * 6.25;
        unit = 500; 
    }
    if (unit > 300) {
        a = unit - 300;
        bill += a * 6.00;
        unit = 300; 
    }
    if (unit > 200) {
        a = unit - 200;
        bill += a * 4.75;
        unit = 200; 
    }
    if (unit > 100) {
        a = unit - 100;
        bill += a * 3.05;
        unit = 100;
    }
    if (unit > 50) {
        a = unit - 50;
        bill += a * 2.80;
        unit = 50; 
    }
    
    bill += unit * 1.45;

    printf("\nConsumer ID: %d\n", cid);
    printf("Name: %s\n", name);
    printf("Previous Reading: %.2f units\n", prev);
    printf("Present Reading: %.2f units\n", pres);
    printf("No of Units Consumed: %.2f units\n", pres - prev);
    printf("Bill Amount: Rs. %.2f\n", bill);
}

