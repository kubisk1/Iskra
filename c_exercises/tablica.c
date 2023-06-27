#include <stdio.h>

int main()
{
    int t,i;
    int tab[100000];
    while (scanf ("%d", &t) == 1)
    {
        tab[i] = t;
        

         
        i++;
    }
        i--;
    for(int j = i; j >= 0; j-- )
    {
        printf("%d ",tab[j]); 
    }




    return 0;
}