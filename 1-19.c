#include <stdio.h>
#define MAXLINE 1000

int getline(char s[],int lim);
void reverse(char s[]);

/*revert input lines, a line at a time*/
int main(){
	char line[MAXLINE];
	
	while(getline(line,MAXLINE) > 0){
		reverse(line);
	}
	printf("%s",line);
	return 0;
}

/*getline:read a line into string s*/
int getline(char s[],int lim){
	int c, i;
	for(i = 0 ; i < lim - 1 && ( c = getchar()!= EOF) && c != '\n';++i){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


/*reverse: reverse string s*/
void reverse(char s[]){
	int i, j;
	char temp;
	
	i = 0;
	while(s[i] !='\0')
	{
		++i; /*find the end of string s*/
	}
	--i;
	if(s[i] == '\n')
	    --i;/*leave newline in place*/
	j = 0;
	while(j < i){  /*swap the characters*/
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		--i;
		++j;
	}
}

