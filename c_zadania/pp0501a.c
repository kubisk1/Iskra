/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>



int NWD(int a, int b)
{
    while(a!=b)
       if(a>b)
           a-=b; //lub a = a - b;
       else
           b-=a; //lub b = b-a
    return a; // lub b - obie zmienne przechowują wynik NWD(a,b)
}

int main()
{
    int testy;
    int a, b;
    scanf("%d",&testy);
    while(testy != 0)
    {
   testy = testy - 1;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    
    printf("%d\n",NWD(a,b));
   
    
    }
    return 0;
}
