#include <stdio.h>
#define MAXLINE 1000

int getline(char s[],int lim);
int atoi(char[]s);

int main(){
	char line[MAXLINE];
	while(getline(line,MAXLINE) > 0){
	    atoi(line);	
	}
    printf("%s\n",line);
	return 0;
}

int getline(char s[],int lim){
	int c,i;
	for(i = 0; i < lim - 1 && (c = getchar()!= EOF) && c != '\n';++i){
		s[i] = c;
	if(s[i] == '\n'){
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;  
	}
}

/*change string s to integer*/
int atoi(char[]s){
	int i,n;
	n = 0;
	for(i = 0; s[i] > = '0' && s[i] <= '9';++i){
		n = 10 * n + (s[i] - '0');
	}
}
