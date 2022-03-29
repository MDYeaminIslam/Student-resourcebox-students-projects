// name : shahriar hasan
// department : cse
// ID : 221-15-4978
// section : z
// project name : Marksheet


#include<stdio.h>
#include<string.h>
int main ()

{
    // creating marksheet in c programming
    //OBTAINED MARKS
    // PERCENTAGE
    // GRADE
    // REMARKS
    char name[30], fname[30];
    int  rollNo, standard, physics, chemisty , biology, english, obtained, percentage;



      // taking user details


    printf ("enter your name = \n");
    scanf ("%s",&name);

    printf ("enter you father name = \n");
    scanf ("%s",&fname);

    printf("enter your roll no = \n");
    scanf ("%d",&rollNo);

     printf("enter your class = \n");
     scanf ("%d",&standard);

    //taking user marks

    printf ( "the marks of physics = ");
    scanf ("%d",&physics);

    printf (" the marks of chemisty = ");
    scanf ("%d",&chemisty);

    printf ("the marks of biology  = ");
    scanf ("%d",&biology);

    printf (" the marks of english  = ");
    scanf ("%d",&english);


    //calculating obtained marks and percentage
    obtained   =   physics  + chemisty + biology + english;
    percentage = obtained *100/400;



    //printing marksheet

    printf ("..........MARKSHEET.......\n");

    printf ("Your name is = %s \n", name);
    printf ("Your father name is = %s \n", fname);
    printf ("your roll number is = %d \n", rollNo);
    printf ("Your class is = %d \n", standard);
    printf ("your obtained marks are = %d \n", obtained);
    printf ("your percentage is = %d \n", percentage);

// if else if for  grade

     if ( percentage>100 || percentage <0)
        printf ("Invalid Mark");

     else if( percentage >=70 && percentage<=100)
       {
           printf ("Grade =A+ \n");
       }

    else if ( percentage >=50 && percentage<=69)
      {
          printf (" Grade = A- \n");
      }
     else if (percentage >=30 && percentage<=49)

        {
            printf("Grade = C \n");
        }
    else if (percentage >=20 && percentage<= 29)
       {

        printf ("Grade = D \n");
       }

    else
    {
            printf(" Grade = fail...\n");
        }




   // if else if for remarks

         if( percentage >=70 && percentage<=100)
       {
           printf ("Remarks = excellent \n");
       }

    else if ( percentage >=50 && percentage<=69)
      {
          printf (" Remarks = Good \n");
      }
     else if (percentage >=30 && percentage<=49)

        {
            printf("Remarks = poor \n");
        }
    else if (percentage >=20 && percentage<= 29)
       {

        printf ("Remarks = again exam \n");
       }

    else
    {
            printf(" Grade = fail \n");
        }









}
