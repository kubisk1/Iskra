/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
   int testy;
   double wysokosc, promien, ilosc;
   double wynik;
   double pi = 3.141592653589793;
   
   scanf("%d",&testy);
   
   while(testy != 0)
   {
       
     
       scanf("%lf",&wysokosc);
       scanf("%lf",&promien);
       scanf("%lf",&ilosc);
       wysokosc = wysokosc/ilosc;
       wynik = ilosc * sqrt((2*pi*promien)*(2*pi*promien)+(wysokosc*wysokosc));
       
       if(testy > 1)
       {
           
       printf("%.2lf\n", wynik);
   }else{
       printf("%.2lf", wynik);
   }
    testy = testy - 1;
       
   }

    return 0;
}