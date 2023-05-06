/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b=0, c=0;
    while(1)
    {
        scanf("%d",&a);
        
        printf("%d\n",a);
        
        if(a == 42 && b !=42 && b !=0)
        {
           
            c = c + 1;
            if (c == 3)
            {
                return 0;
            }
        }
        b = a;
        
    }

    return 0;
}

