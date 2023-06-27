#include <stdio.h>
#include <stdlib.h>


int main() {
  
    int test,a,b;
   scanf("%d",&test);
    while (test--) 
    { 
        scanf("%d",&a);
        scanf("%d",&b);

        while(a != b)
        {
          if(a > b) 
          {
            a = a - b;
          }
        if(b > a) 
          {
            b = b - a;
          }
        }
        printf("%d\n",a*2);

            
    }
    return 0;
}