/*Write a C program to input week number(1-7) and print day of week name using switch case. 
C program to find week day name using switch case. 

case 1  print "Today is SUNDAY"

for case 2 print "Today is MONDAY"

for case 3  print "Today is TUESDAY"

for case 4 print "Today is WEDNESDAY"

for case 5 print "Today is THURSDAY"

foe case 6 print "Today is FRIDAY"

 for   case 7  print "Today is SATURDAY"

for default print "Enter a valid choice"*/
#include<stdio.h>
int main(){
    int day;
    printf("Enter day of the week : ");
    scanf("%d",&day);
    switch (day)
    {
    
    case 1:
        printf("Today is SUNDAY\n");
        break;
    case 2:
        printf("Today is MONDAY\n");
        break;
    case 3:
        printf("Today is TUESDAY\n");
        break;
    case 4:
        printf("Today is WEDNESDAY\n");
        break;
    case 5:
        printf("Today is THURSDAY\n");
        break;
    case 6:
        printf("Today is FRIDAY\n");
        break;
    case 7:
        printf("Today is SATURDAY\n");
        break;
    default: printf("Enter a valid choice");
    }
}