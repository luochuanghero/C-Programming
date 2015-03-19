#include <stdio.h>
#define MAXLINE 1000

int getline(char s[],int lim);
void copy(char to[], char from[])

/*printf the longeset line*/
int main(){
	int len;
	int max;
	char line[MAXLINE];
	char longeset[MAXLINE];
	
	max = 0;
	while (len = getline(line,MAXLINE)){
		if(len > max){
			max = len;
			copy(longeset,line);
		}
	}
	
	if(max > 0){
		printf("%s",longeset);
	}
	
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

void copy(char to[], char from[]){
	int i ;
	i = 0;
	while((to[i] = form[i]) != '\0')
	 ++i;
}

