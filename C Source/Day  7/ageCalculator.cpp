/*Given the current date and birth date, find the present age. 

Examples: 

Input : Birth date = 07/09/1996 
        Present date = 07/12/2017
Output : Present Age = Years: 21  Months: 3  Days: 0
While calculating the difference in two dates we need to just keep track of two conditions that will do.  

    If the current date is less than that of the birth date, then that month is not counted, and for subtracting dates we add number
    of month days to the current date so as to get the difference in the dates.
    If the current month is less than the birth month, then the current year is not taken into count as this year has not been 
    completed and for getting the difference of months, we subtract by adding 12 to the current month.
    At the end we just need to subtract the days, months and years to get the difference after the two conditions are dealt with*/

    # include <stdio.h>
int main(){
    int bDay,day, month , year,  bMonth, bYear,pDay, pMonth, pYear;
    char c;
    
    printf("Birth date (dd/mm/yy): ");
    
    scanf("%d%c%d%c%d", &bDay,&c,&bMonth,&c,&bYear);
    printf("Present date (dd/mm/yy): ");
    scanf("%d%c%d%c%d", &pDay,&c,&pMonth,&c,&pYear);
    if (pDay < bDay)
    {
         if (pMonth==1 || pMonth==3 || pMonth== 5 || pMonth==7 || pMonth == 8 || pMonth ==10 || pMonth== 12)
        {
            pDay = pDay + 31;
        }
        else if (pMonth == 2){
            pDay = pDay + 28;
        }
        else {
            pDay = pDay + 30;
        }
        pMonth--;  
    }
    day = pDay- bDay;

    if (pMonth<bMonth)
    {
        pMonth=pMonth+12;
        pYear--;
    }
    month= pMonth-bMonth;
    year=pYear-bYear;
    printf(" Present Age = \nYears: %d  Months: %d  Days: %d",year,month,day);
    
    }

    
    