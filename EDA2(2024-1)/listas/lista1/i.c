#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void fr(char *v, int t) {
     for (int i = t; i >= 0; i--) 
          v[i] = v[i - 1];
     v[0] = '1';
}
void sm1 (char *prin){
	int c = 1;
	for(int i=(int)strlen(prin)-1; i>=0; --i) {
	
		int nv = (prin[i]-'0')+c;
		c = 0;
		if(nv>=10) {
			c = 1;
			nv-=10;
		}
		prin[i] = ('0'+nv);
	}
	
	if(c)
     {
          //printf("c = %s\n", s);
		fr(prin, strlen(prin));
     }
		
	return;
}

int main(){
     int n;
     scanf("%d", &n);

     char xs[n+1];
     int x[n+1];
     for(int i = 0; i < n; i++){
          int t;
          scanf("%d", &t);
          xs[i]=t+'0';
          x[i]=t;
     }

     xs[n] = '\0';

     char res[n+1];
     
     for(long long i = 1; i <= strlen(xs); i++){
          int gh[i + 1];
          char ghstr[i+1];
          memset(gh, 0, sizeof(gh));
          memset(ghstr, 0, sizeof(ghstr));
          for(long long j = 0; j < i; j++){
               gh[j] = x[j];
               ghstr[j] = xs[j];
          }

          char nm1[n+2], p[n+2];
          memset(nm1, '\0', sizeof(nm1));
          memset(p, '\0', sizeof(p));

          int ok = 1, pos = 0;
          int tm = strlen(ghstr);
          strcpy(nm1, ghstr);

          //printf("INICIAL: %s\n", nm1);
          while(strlen(p) < strlen(xs))
          {
              strcat(p, nm1);
              sm1(nm1);
          }

          //printf("%s - %s ==> %d\n", p, xs, strcmp(p, xs));
          //printf("---------------\n");
          if(strcmp(p, xs) == 0) {
			printf("%s\n", ghstr);
			return 0;
		}
          //printf("-----------------\n");
     }

}