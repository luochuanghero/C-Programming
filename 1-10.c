#include <stdio.ah>

/*replace tabs and backspaces visiable characters*/
int main(){
	int c;
	while((c = getchar()) != EOF)
	{
	  if(c == '\t')
	    printf("\\t");
	  else if(c =='\b')
	    printf("\\b");
	  else if(c =='\\')
	    printf("\\\\");
	  else 
	    putchar(c);
	}
	return 0;
}
