#include <stdio.h>
#include <ctype.h>
#include <string.h>

int multiple (char n[10001]) {

	int aux = strlen(n), a = 1, i = 0;

	if (n[i] == '9'){
        ++i;
        multiple(n);
    } else return -1;

    aux /=9;
    a += aux;
	return a;

}


int main (){

	char n[10001];
	scanf("%s", n);
	
	while (*n != '0') {
	
		if ( multiple(n) != -1){
			printf("%s is a multiple of 9 and has 9-degree %d.\n", n,multiple(n));
		
		} else printf("%s is not a multiple of 9\n", n);

		scanf("%s", n);

	}


}