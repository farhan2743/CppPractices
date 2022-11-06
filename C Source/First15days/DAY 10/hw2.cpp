/*Write a C program to check calculate profit or loss using conditional operator

Test Case-1
Enter cost price: 5000 
Enter selling price: 5500 
Profit = 500 

Test Case-2
Enter cost price: 5000 
Enter selling price: 4500 
Loss = 500 

Test Case 3
Enter cost price: 5000 
Enter selling price: 5000 */


#include <stdio.h>

int main()
{
    int cost_price,selling_price;
    printf("Enter cost price: ");
    scanf("%d", &cost_price);
    printf("Enter selling price: ");
    scanf("%d", &selling_price);

    (selling_price > cost_price)?printf("Profit = %d", selling_price - cost_price):(cost_price > selling_price)? printf("Loss = %d", cost_price - selling_price):printf("No Profit");

    return 0;
}