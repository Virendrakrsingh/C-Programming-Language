/*Practical 2.4: If last day of mth month of the year is Friday then find out nth day(1<=n<=31) of the same month .

Solution:*/

#include<stdio.h>

#include<string.h>



int main()

{

           int num, month;

           printf("Enter the day you want to find");

           scanf("%d", &num);

           printf("Enter the month");

           scanf("%d",&month);

           if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)

           {

                       if((31-num)%7==0)

                       printf("The day is friday");

                       if((31-num)%7==1)

                       printf("The day is Thursday");

                       if((31-num)%7==2)

                       printf("The day is Wednesday");

                       if((31-num)%7==3)

                       printf("The day is Tuesday");

                       if((31-num)%7==4)

                       printf("The day is Monday");

                       if((31-num)%7==5)

                       printf("The day is Sunday");

                       if((31-num)%7==6)

                       printf("The day is Saturday");

           }

           if(month==4||month==6||month==9||month==11)

           {

                       if((30-num)%7==0)

                       printf("The day is friday");

                       if((30-num)%7==1)

                       printf("The day is Thursday");

                       if((30-num)%7==2)

                       printf("The day is Wednesday");

                       if((30-num)%7==3)

                       printf("The day is Tuesday");

                       if((30-num)%7==4)

                       printf("The day is Monday");

                       if((30-num)%7==5)

                       printf("The day is Sunday");

                       if((30-num)%7==6)

                       printf("The day is Saturday");

           }

if(month==2)

           {

                       if((28-num)%7==0)

                       printf("The day is friday");

                       if((28-num)%7==1)

                       printf("The day is Thursday");

                       if((28-num)%7==2)

                       printf("The day is Wednesday");

                       if((28-num)%7==3)

                       printf("The day is Tuesday");

                       if((28-num)%7==4)

                       printf("The day is Monday");

                       if((28-num)%7==5)

                       printf("The day is Sunday");

                       if((28-num)%7==6)

                       printf("The day is Saturday");

           }}
