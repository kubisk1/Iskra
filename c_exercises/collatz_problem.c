#include <stdio.h>

int main()
{
    int x, test, counter;

    scanf("%d",&test);
    while(test--)
    {
        counter = 0;
        scanf("%d",&x);

        while(x != 1)
        {
            counter++;
              if(x % 2 == 1)
              {
                x = 3 * x + 1;
              }else
              {
                x = x / 2;
              }
        }
        printf("%d\n",counter);
    }
    

    return 0;
}