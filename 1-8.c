#include <stdio.h>
/*count blanks ,tabs and newline*/
int main(){
	int c , nb, nt, nl;
	nb = nt = nl = 0;
	while((c = getchar()) != EOF){
		if(c == ' ')
		  ++nb;
		if(c == '\t')
		  ++nt;
		if(c == '\n')
		  ++nl;
	}
	printf("%d %d %d", nb, nt, nl);
	return 0;
}
