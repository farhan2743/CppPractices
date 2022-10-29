#include<stdio.h>
int main(){
    int no;
    printf("Enter marks : ");
    scanf("%d",&no);
    if (no>=80)
    {
       printf("Grade A+");
    }
    else if (no>=70)
    {
       printf("Grade A");
    }
    else if (no>=60)
    {
       printf("Grade A-");
    }
    else if (no>=50)
    {
       printf("Grade B");
    }
    else if (no>=40)
    {
       printf("Grade c");
    }
    else printf("Grade F");
    
}