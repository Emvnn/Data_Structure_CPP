/*

Plus ou Moins
-------------

Created by M@teo21, for the Site du Zér0 courses
siteduzero.com (C/C++ programming course for beginners)

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ( int argc, char** argv )
{
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;

     // Generation of random numb

    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    /* The program loop. It repeats as long as the user
    didn't find the mystery number */

    do
    {
         // We request the numb
        printf("Quel est le nombre ? ");
        scanf("%d", &nombreEntre);

         // We compare between inputNumber and mysteriousNumbe

        if (nombreMystere > nombreEntre)
            printf("C'est plus !\n\n");
        else if (nombreMystere < nombreEntre)
            printf("C'est moins !\n\n");
        else
            printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
    } while (nombreEntre != nombreMystere);

}
