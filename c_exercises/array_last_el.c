#include <stdio.h>

int main()
{
    int test, tab_size;
    
    scanf("%d",&test);
    
    while(test--)
    {
         scanf("%d",&tab_size);
        int tab[tab_size], tab2[tab_size];
        // printf("%d",tab_size);

        for(int i =0; i < tab_size; i++)
        {
            scanf("%d", &tab[i]);
            // printf("%d\n",tab[i]);
        }

        tab2[tab_size ] = tab[0];
        for(int j =0; j < tab_size-1; j++)
        {
            tab2[j] = tab[j+1];
            printf("%d\n",tab2[j]);
        }
        printf("%d\n",tab2[tab_size]);

        
    }
    

    return 0;
}