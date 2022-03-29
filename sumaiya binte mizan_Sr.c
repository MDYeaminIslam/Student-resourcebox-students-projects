//নাম : sumaiya binte mizan; ID 221-15-5077 ; section-A ; Department-CSE ; Project name : Digital Clock
//we can know the time with it, when we input number it show what time it is .
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s;
    int d=1000;
    printf("set time :\n");
    scanf("%d%d%d",&h,&m,&s);
    if(h>12 || m>60 || s>60)
    {
        printf("ERROR ! \n");
        exit(0);

    }
    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }
        if(h>12)
        {
            h=1;
        }
        printf("\n clock :");
        printf("\n %02d:%02d:%02d",h,m,s);
        sleep(d);
        system("cls");
    }
}