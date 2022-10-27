/*Given the current date and birth date, find the present age. 

Examples: 

Input : Birth date = 07/09/1996 
        Present date = 07/12/2017
Output : Present Age = Years: 21  Months: 3  Days: 0
01) JAN----31
02) FEB----28/29
03) MAR-----31
04) APR------30
05) MAY------31
06) JUN------30
07) JUL------31
08) AUG ------31
09) SEP-------30
10) OCT-=------31
11) NOV--------30
12) DEC--------31
 Here are the rules of leap years:

 1) A year may be a leap year if it is evenly divisible by 4.
 2) Years that are divisible by 100 (century years such as 1900 or 2000) cannot be leap years unless
  they are also divisible by 400. (For this reason, the years 1700, 1800, and 1900 were not leap years, 
  but the years 1600 and 2000 were.)*/


#include <stdio.h>
int main(){
    int pDay , pMonth, pYear, bDay, bMonth, bYear , day , month, year;
    char c;

    printf("Enter present date :");
    scanf("%d%c%d%c%d",&pDay,&c,&pMonth,&c,&pYear);
    printf("Enter birth date :");
    scanf("%d%c%d%c%d",&bDay,&c,&bMonth,&c,&bYear);


    if (pDay>bDay)
    {
        pMonth--;
        if (pMonth==1||pMonth==3||pMonth==5||pMonth==7||pMonth==8||pMonth==10||pMonth==11)
        {
            pDay=pDay+31;
        }
        else if (pMonth=2)
        {
            if (pYear%4==0 && pYear%400==0 &&pYear%100!=0 )
            {
                pDay=pDay+29;
            }
            else pDay=pDay+29;
            
        }
        else pDay=pDay+30;
        
    }
    
    if ( pMonth<bMonth)
    {
       pMonth=pMonth+12;
       pYear--;
    }

    day=pDay-bDay;
    month=pMonth-bMonth;
    year=pYear-bYear;

    printf(": Present Age = \nYears: %d  Months: %d  Days: %d", year,month,day);

}
