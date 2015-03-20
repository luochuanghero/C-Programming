#include <stdio.h>

/*this file determine range of types*/
int main(){
 /*singed types*/
 printf("signed char min = %d\n",-(char)(unsigned char)~0 >>1));
 printf("signed char max = %d\n", (char)(unsigned char)~0 >>1));
 printf("signed short min = %d\n",-(short)(unsigned short)~0 >>1));
 printf("signed short max = %d\n", (short)(unsigned short)~0 >>1));
 printf("signed int min = %d\n",-(int)(unsigned int)~0 >>1));
 printf("signed int max = %d\n", (int)(unsigned int)~0 >>1));
 printf("signed long min = %d\n",-(long)(unsigned long)~0 >>1));
 printf("signed long max = %d\n", (long)(unsigned long)~0 >>1));

 /*unsinged types*/
 printf("unsigned char max = %d\n",(unsigned char)~0);
 printf("unsigned char max = %d\n",(unsigned short)~0);
 printf("unsigned char max = %d\n",(unsigned int)~0);
 printf("unsigned char max = %d\n",(unsigned long)~0);
 return 0;
}
