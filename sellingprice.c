#include <stdio.h>

int main() {
    int cp = 3500; // Cost price
    int pp = 27;   // Profit percentage
    float vp = 12.7; // VAT percentage (should be float)
    float sc = 3.87; // Service charge percentage (should be float)
    float sp;      // Selling price
    float profit;  // Profit
    float vat;     // VAT
    float servicecharge; // Service charge
    
    sp = cp + ((pp / 100.0) * cp); // Calculate selling price
    profit = sp - cp;              // Calculate profit
    vat = (vp / 100.0) * sp;       // Calculate VAT
    servicecharge = (sc / 100.0) * sp; // Calculate service charge
    
    printf("Selling Price: %.2f\n", sp);
    printf("Profit: %.2f\n", profit);
    printf("VAT: %.2f\n", vat);
    printf("Service Charge: %.2f\n", servicecharge);
    
    return 0;
}

