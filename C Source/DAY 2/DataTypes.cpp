#include<stdio.h>
int main(){
    printf("%d\n",sizeof(int));
    int x=2147483647; //Max value of int
    printf("x is= %d\n",x);

    printf("size of float: %d\n",sizeof(float));
    printf("size of float: %d\n",sizeof(double));
    float f=23.2314568744;
    double d=23546475.2314568744;
    printf("float will loass point number 23546475.2314568744 ---> %f\n",f);
    printf("Double not loass point number 23546475.2314568744 ---> %lf\n",d);

printf("size of float: %d\n",sizeof(char));
    // Char 1 byte = 8 bit
    // char is recognaized by its ASCII code
    char a='D';
    int b= 66;  // ASCII of b is 66
    printf("%c %c %d\n",'A',b,a);
    
    
    long long int ll=2147483647;
    long int la=2323;
    printf("%ld\n",ll);
    printf("soze of long long int %d\n",sizeof(ll));
    printf("soze of long long int %d\n",sizeof(la));

    unsigned int ab= -2155758;
    printf("%u\n",ab);
}
