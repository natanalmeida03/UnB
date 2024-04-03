#include <stdio.h>
#include <stdlib.h>

int main (){
     int n, m;
     scanf("%d %d", &n, &m);

     int x, y;
     scanf("%d %d", &x, &y);

     int k;
     scanf("%d", &k);

     int px=0, py=0, r=0;

     while(k--){
          int j;
          scanf("%d", &j);

          if(j == 1)
               py++;
          else if(j == 2)
               py--;
          else if(j == 3)
               px++;
          else if(j == 4)
               px--;

          //printf("(%d, %d)", px, py);
          if (abs(px - x) <= 1 && abs(py - y) <= 1)
          {
               r++;
               //printf(" *%d");
          }

          //printf("\n");


     }

     printf("%d\n", r);
     return 0;
}