#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 6
int main()
{
    int hours,minutes,seconds;
    printf("Please enter time");
    scanf("%d%d%d",&hours,&minutes,&seconds);
    system("cls");
    int h=0,m=0,s;
    for(s=0;1;s++)
    {
        printf("#####  ");
    printf("%.2d : %.2d : %.2d",h,m,s);
     printf("  ######3##");

    sleep(1);

    if(h == hours && m == minutes && s == seconds)
    {
        break;
    }
   else
   system("cls");

    if(s==MAX)
    {
        m++;
        s=0;
    }
    if(m==MAX)
   {
    h++;
    m=0;
   }

    }
    return 0;
}
