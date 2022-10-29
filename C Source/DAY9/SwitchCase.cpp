#include<stdio.h>
int main(){
    int no;
    printf("Enter marks : ");
    scanf("%d",&no);
    switch (no/10)
    {
    case 9:
    case 8:
        printf("Grade A+\n");
        break;
    case 7:
        printf("Grade A\n");
        break;
    case 6:
        printf("Grade A-\n");
        break;
    case 5:
        printf("Grade B");
        break;
    case 4:
        printf("Grade C");
        break;
    default:
        printf("Grade F");
        break;
    }


    /*
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
 */   
}