/* Strong number is a special number whose sum of the factorial of digits is equal to the original number.
 For Example: 145 is strong number. Since, 1! + 4! + 5! =145 */


 #include<stdio.h>
 
 int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
 }

 bool isStrong(int n){
    int num=n,sum=0;
    while(n!=0){
        sum+=fact(n%10);
        n/=10;
    }
    printf("sum = %d\n",sum);
    return num==sum;
 }
 int main(){
    int p;
    scanf("%d",&p);
    if(isStrong(p)) printf("Strong\n");
    else printf("Not Strong\n");
 }