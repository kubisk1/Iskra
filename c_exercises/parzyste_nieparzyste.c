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

       
        for(int j =0; j < tab_size; j++)
        {
            if(j % 2 == 0)
            {
                tab2[(j/2)+ (tab_size/2)] = tab[j];
               
            }
        }

         for(int j =0; j < tab_size; j++)
        {
            if(j % 2 == 1)
            {
                tab2[j/2 ] = tab[j];
                
            }
        }

         for(int j =0; j < tab_size; j++)
        {
            
            printf("%d ",tab2[j]);
            
        }


        printf("\n");

        
    }


    return 0;
}