#include <stdio.h>

int main()
{
    int test, eaters, cakes, nr_of_boxes;
    long int cakes_in_box;
    int time[10000], nr_of_cakes[10000];
    int day_sec = 60 * 60 * 24;
    

    scanf("%d",&test);

    while(test--)
    {
    scanf("%d",&eaters);
    scanf("%d",&cakes_in_box);

    for(int i = 0; i<eaters;i++)
    {
        scanf("%d",&time[i]);
         nr_of_cakes[i] = (day_sec) / (time[i]);
      
        cakes = nr_of_cakes[i]+cakes;
    }
    if(cakes % cakes_in_box == 0)
    {
    nr_of_boxes = cakes / cakes_in_box ;
    
    }else 
    {
       nr_of_boxes = (cakes / cakes_in_box)+1; 
    }
      printf("%d\n", nr_of_boxes);

      cakes = 0;

      


    }
}