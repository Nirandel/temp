#include <stdio.h> 
void main()
{
float liczba; /* deklaracja zmiennej liczba czyli nazwa typu zmiennej oraz jej nazwa*/
liczba = 0.5; /* nadanie zmiennej liczba wartości 0.5 */
     printf("To jest pierwszy program\n");
     printf("wypisujacy liczbe rzeczywista.\n");
     printf("zwróć uwage na to jak sie to robi w funkcji printf!");
     printf("oto ona: %f \n",liczba);
printf("Pierwsza roznica jaka zauwazylem jest rozwiniecie dziesietne (lub wieksze) liczby \n");
printf("Druga roznica jest wykorzystanie znaku %%f do wywolania zmiennej typu float, zamiast %%d do wywolania int'a \n");
printf("Trzecia roznica jest wykorzystanie typu zmiennej float, zamiast int'a \n");
}