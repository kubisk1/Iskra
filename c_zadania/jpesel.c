/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int main()
{
   int long long pesel;
   int pesel_array[100];
   int wynik;
   int testy;
   
   scanf("%d",&testy);
   
   while(testy --)
   {
   
    int i, number_of_digits;
    
    for (i = 0; i < 11; i++) {
  
        // %1d reads a single digit
        scanf("%1d", &pesel_array[i]);
    }
    wynik = pesel_array[0] + 3*pesel_array[1] + 7 * pesel_array[2]+ 9 *  pesel_array[3]+pesel_array[4]+ 3 * pesel_array[5]+ 7* pesel_array[6]+ 9* pesel_array[7]+ 1*pesel_array[8]+ 3*pesel_array[9]+ 1*pesel_array[10];
  
  if(wynik > 0 && wynik % 10 == 0)
  {
      printf("D\n");
  }else
  {
      printf("N\n");
  }
   }
    return 0;
}
