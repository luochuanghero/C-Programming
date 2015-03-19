#include <stdio.h>
#define MAXLINE 1000

int getline(char s[],int lim);
int remove(char s[]);

/*remove trailing blanks and tabs, and delete balnk lines*/
int main(){
	char line[MAXLINE];
	
	while(getline(line,MAXLINE)){
		if(remove[line]){
			printf("%s",line);
		}
	}
	return 0;
}


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

/*remove trailing blanks and tabls from character string s*/
int remove(char s[]){
	int i = 0;
	while(s[i] != '\n') /*find newline character*/
	  ++i;
	--i;            /*back off form '\n'*/
	while(i >=0 && s[i] == ' '|| s[i] == '\t')
	{
		--i;
	}
	if( i >=0 ){
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
	}
	
	return i;
}
