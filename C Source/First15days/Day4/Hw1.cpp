/*Make a program that reads a seller's name, his/her fixed salary, and the sale's total made 
 by himself/herself in the month (in money). Considering that this seller receives 15% over
 all products sold, write the final salary (total) of this seller at the end of the month,
 with two decimal places*/

 #include<stdio.h>
 int main(){
    char *name;
    double salary,sales;
    double final_salary;
    scanf("%s",&name);
    scanf("%lf%lf",&salary,&sales);
    final_salary= salary + (sales*0.15);
    printf("TOTAL = R$ %.2lf",final_salary);
    return 0;


 }