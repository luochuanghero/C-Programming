#include <stdio.h>
/*replace string of blanks with a single blank*/
#define NONBLANK 'A'
int main(){
	int c, lastc;
	
	lastc = NONBLANK;
	while((c = getchar()) != EOF){
		if(c != ' ' || lastc != ' ')
	      putchar(c);
	  lastc = c;
	}
	return 0;
}
