#include<stdio.h>
int main(){
    printf("Enter time:");
    int h1,m1,h2,m2,min,hr,hour;
    scanf("%d%d",&h1,&m1);
    printf("Enter 2nd time:");
    scanf("%d%d",&h2,&m2);

    printf("Time 1 is: %d : %d\n",h1,m1);

    printf("Time 2 is: %d : %d\n",h2,m2);

    min= (m1+m2)%60;
    hr= (m1+m2)/60;
    hour= h1+h2+hr;
     printf("Expected time:%d:%d",hour,min);

}
