/*Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and 
Computer, calculate percentage and grade according to given conditions:
If percentage >= 90% : Grade A
If percentage >= 80% : Grade B
If percentage >= 70% : Grade C
If percentage >= 60% : Grade D
If percentage >= 40% : Grade E
If percentage < 40% : Grade F*/


#include<stdio.h>
int main (){
    int a,b,c,d,e,f,g,h;
    printf("Enter your number in physics :");
    scanf("%d",&a);
    printf("Enter your number in chemistry : ");
    scanf("%d",&b);
    printf("Enter your number in mathematics : ");
    scanf("%d",&c);
    printf("Enter your number in biology : ");
    scanf("%d",&d);
    printf("Enter your number in computer : ");
    scanf("%d",&e);
    
    h = a + b + c + d +e ;
    
    g= h/5;
    
    printf("Marks percentage : %d\n",g);
    
    if (g>=90)
    {
        printf("Grade A");
    }
    else if (g>=80)
    {
        printf("Grade B");
    }
    else if (g>=70)
    {
        printf("Grade C");
    }
    else if (g>=60)
    {
        printf("Grade D");
    }
    else if (g>=40)
    {
        printf("Grade E");
    }
    else printf("Grade F");


    return 0 ;
}