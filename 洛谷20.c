#include <stdio.h>
#include <string.h>
int main()
{
	char str[5000];
	int num[100]={0};
	int i=0,j=0;
	int c;
	while((c=getchar())!=EOF){
		str[i]=c;
		++i;
	}
	for(i=0;i<strlen(str);++i){
		if(str[i]<='Z'&&str[i]>='A'){
			num[str[i]-'A']+=1;
		}
	}
	int max=0;
	for(;j<26;++j){
		if(num[j]>num[max])
			max=j;
	}max=num[max];
	for(;max>0;--max){
	for(j=0;j<26;++j){
		if(num[j]<max){
			if(j!=25)
				printf("  ");
			else
				printf(" ");
		}
		else{
			if(j!=25)
				printf("* ");
			else
				printf("*");
			}
	}printf("\n");
}printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n");
return 0;
 } 
