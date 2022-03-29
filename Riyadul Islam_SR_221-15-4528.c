//Namme- Riyadul Islam
//ID- 221-15-4828.
//Section- H.
//Department- Computer Science and Engineering.
//Proj. Name- Common holyday in Bangladesh for my honny.





#include <stdio.h>

int main()
{
    int date = 0;
    char month[3];
    /*month[3]-every month er 0,1,2,3 no. word er letter define korlam alada alada*/

    /*info. usually common holyday's (ata ami bangladesh bank er webside theke niasi)
    21 February-International Mother Language Day
    17 March-Birthday of the Father of the Nation Bangabandhu Sheikh Mujibur Rahman
    26 March-Independence and National Day
    14 April-Bengali New Year's Day
    01 May-May Day
    24 MAY-NAZRUL JAYANTI
    15 August-National Mourning Day
    07 OCT-PROPHET'S BIRTHDAY
    16 December-Victory Day
    25 December-Christmas Day
    31 December-31 night lets do bbq*/

    printf("WELCOME TO KNOW THE COMMON HOLYDAY FOR BANGLADESH !!!\n");

    /*project name*/

    printf("ENTER MONTH (Ex. JAN, FEB, DEC): ");
    scanf("%s", &month);
    printf("ENTER DATE (Ex. 1, 25, 31): ");
    scanf("%d", &date);


    /*amar mathay jei project ashse ami program ti if, else if and else dia koresi.
    ami project ti microsoft visual studio code e koresi*/



    if (month[0] == 'F')
    /*month[0]=1st letter ta ki hobe.
    atar jonno 1st letter ta F jodi hoy*/
    {
        if (date == 21)
        /*date jodi 21 input hoye thake*/
        {
            printf("INTERNATIONAL MOTHER LANGUAGE DAY\n");
        }
        else
        /*jodi date 21 na hoy*/
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }
    }
    else if (month[0] == 'M' && month[2] == 'R')
    /*month[0]=1st letter ta ki hobe.
    month[2]=3rd letter ta ki hobe.*/
    {
        if (date == 17)
        {
            printf("Birthday of the Father of the Nation Bangabandhu Sheikh Mujibur Rahman\n");
        }
        else if (date == 26)
        /*jehutu eki month er 2nd acta tarikh tai else if use koresi*/
        {
            printf("IT'S OUR INDEPENDENCE DAY\n");
        }
        else
        /*jodi konotai unput er sathe na mile.(try to print or show the user a nice sentence)*/
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }
    }
    else if (month[0] == 'A' && month[2] == 'R')
    /*aikane doita sortho[month 0 and 2] deoar karon-ai month ta idm catch kortesilo na debug korar somoy*/
    {
        if (date == 14)
        {
            printf("BENGALI NEW YEAR'S DAY");
        }
        else
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }

    }
    else if (month[0] = 'M' && month[2] == 'Y')
    /*aikane doita sortho[month 0 and 2] deoar karon-ai month ta idm catch kortesilo na debug korar somoy*/
    {
        if (date == 1)
        {
            printf("LABOUR DAY\n");
        }
        else if (date == 24)
        {
            printf("NAZRUL JAYANTI\n");
        }
        else
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }
    }

    else if (month[2] == 'G')
    {
        if (date == 15)
        {
            printf("NATIONAL MOURNING DAY\n");
        }
        else
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }
    }
    else if (month[2] == 'T')
    {
        if (date == 7)
        {
            printf("PROPHET'S BIRTHDAY\n");
        }
        else
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }
    }
    else if (month[2] == 'C')
    {
        if (date == 16)
        {
            printf("VICTORY DAY\n");
        }
        else if (date == 25)
        {
            printf("CHRISTMAS DAY\n");
        }
        else if (date == 31)
        {
            printf("THIRTY FIRST NIGHT, LET US DO BBQ PARTY!!!");
        }
        else
        {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
        }
    }
    else
    {
            printf("SORRY_DEAR!!\n");
            printf("IT COULD BE YOUR LUCKY DAY!!!\n");
            /*for sefty reason ami atay last e else e sorto disi*/
    }

    return 0;
}
