/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int testy;
    int v1,v2;
    int vsr;
    
    scanf("%d",&testy);
    
    while(testy --){
        
        scanf("%d", &v1);
        scanf("%d", &v2);
        
        vsr = 2*v1*v2/(v1+v2);
        
        printf("%d\n",vsr);
    }

    return 0;
}
