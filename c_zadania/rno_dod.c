#include <stdio.h>
#include <stdint.h>



int main()
{
    int testy,ilosc;
    int l1 =0;
    int l2 = 0;
    scanf("%d",&testy);
    
    while(testy--)
    {
        l1=0;
        l2=0;
        scanf("%d",&ilosc);
    
        for(int i = 1; i <= ilosc; i++ )
        {
            scanf("%d",&l1);
            l2 = l2 + l1;
        }
        printf("%d\n",l2);
    }

    return 0;
}