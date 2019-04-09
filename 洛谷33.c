#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char a[10000];
	scanf("%s",a);
	int temp,num,numa,mark;
	int i;
	for(i=0;i<strlen(a);++i){
		if(a[i]=' ')
			mark=i;
	}for(i=0;i<mark;++i){
		if(isdigit(a[i])){
			
		}
	}
}

