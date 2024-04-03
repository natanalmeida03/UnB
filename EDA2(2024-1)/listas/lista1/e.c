#include <stdio.h>

int main (){
     int ax = 1, ay = 1, bx, by;
     scanf("%d %d", &bx, &by);

     int p, c = 1;
     scanf("%d", &p);

     int cpx=bx,cpy=by;
     while(p--){
          int pa, pb;
          scanf("%d %d", &pa, &pb);
          
          if(pa == 1)
               ay++;
          else if(pa == 2)
               ay--;
          else if(pa == 3)
               ax++;
          else if(pa == 4)
               ax--;

          if(pb == 1)
               by++;
          else if(pb == 2)
               by--;
          else if(pb == 3)
               bx++;
          else if(pb == 4)
               bx--;

          //printf("PA = (%d, %d) | PB = (%d, %d) | passo %d\n", ax, ay, bx, by, c);
          if(ay == 0 || ax == 0 || ax > cpx || ay > cpy){
               printf("PA saiu na posicao (%d,%d) no passo %d\n", ax, ay, c);
               return 0;
          }

          if(by == 0 || bx == 0 || bx > cpx || by > cpy){
               printf("PB saiu na posicao (%d,%d) no passo %d\n", bx, by, c);
               return 0;
          }

          if(ax == bx && ay == by){
               printf("Encontraram-se na posicao (%d,%d) no passo %d\n",bx, by, c);
               return 0;
          }


          
          c++;
     }

     printf("Nao se encontraram\n");
     return 0;
}