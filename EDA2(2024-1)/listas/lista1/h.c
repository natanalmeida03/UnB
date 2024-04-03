#include <stdio.h>
#include <string.h>
int main(){
     char sh[9], raj[9];
     scanf("%s %s", sh, raj);

     if (strcmp(sh, raj) == 0)
          printf("De novo!\n");
     else if ((strcmp(sh, "pedra") == 0 && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "lagarto") == 0)) || (strcmp(sh, "papel") == 0 && (strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0)) || (strcmp(sh, "tesoura") == 0 && (strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0)) || (strcmp(sh, "lagarto") == 0 && (strcmp(raj, "Spock") == 0 || strcmp(raj, "papel") == 0)) || (strcmp(sh, "Spock") == 0 && (strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0))) {
          printf("Bazinga!\n");
     } else
          printf("Raj trapaceou!\n");

     return 0;
}