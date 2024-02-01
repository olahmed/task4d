/**
 ******************************************************************************
 * @file           : task 4
 * @author         : ola ahmed
 * @brief          : functions task
 ******************************************************************************
 */
//the program crashes
/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */
void prime(int upper,int lower);
/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    unsigned int lower_limit;
    unsigned int upper_limit;
    printf("\n enter the lower limit:");
    scanf("%i",&lower_limit);
    printf("\n enter the upper limit:");
    scanf("%i",&upper_limit);
    prime(upper_limit, lower_limit);
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

//number4
void prime(int upper,int lower)
{
unsigned int indecator , test;
for(indecator=lower;indecator<=upper;indecator++)
{
for(test=lower;test<=upper/2;++test)
{
    if (0==indecator%test)
    {
        printf("%d \t",indecator);
        break;
    }
    else
    {
    }
}
}
}


/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      1 feb 2024           fourth task 3
*/
