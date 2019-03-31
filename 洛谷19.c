#include <stdio.h>
#include <string.h>
int main()
{
	char a[300],b[300],c[300],d[300];
	int i,mark,j,k,l;
	scanf("%s",&a);
	for(i=0;i<strlen(a);++i){
		if(a[i]=='.'){		//小数情况 
			mark=i;
			for(i=mark-1,j=0;i>=0;--i,++j)
				b[j]=a[i];
			for(i=strlen(a)-1,j=0;i>mark-1;--i,++j)
				c[j]=a[i];		//整数部分与小数部分分开处理 
			for(k=0;b[k]=='0'&&k<mark-1;++k)
				;
				if(k==mark)
					printf("0");	//整数部分全为0，输出0 
				else{
					for(;k<mark;++k)
						printf("%c",b[k]);		//否则去掉反转出的前导零再输出 
				}for(k=strlen(a)-mark-2;c[k]=='0'&&k>=0;--k)
					;
				if(k==-1)
					printf(".0");		//小数部分全为零 
				else{
					printf(".");
					for(l=0;l<=k;++l)
						printf("%c",c[l]);		//去掉末尾零输出 
					}return 0;
		}else if(a[i]=='/'){		//分数情况 
			mark=i;
			for(i=mark-1,j=0;i>=0;--i,++j)
				b[j]=a[i];
			for(i=strlen(a)-1,j=0;i>mark-1;--i,++j)
				c[j]=a[i];		//分别处理分母分子 
			for(k=0;b[k]=='0'&&k<mark-1;++k)
				;
			if(k==mark)
					printf("0");		//分母全为零 
			else{
				for(;k<mark;++k)
					printf("%c",b[k]);		//去前导零输出 
				}
			printf("/");
			for(k=0;c[k]=='0'&&k<=strlen(a)-mark-2;++k)
				;
			if(k==strlen(a)-mark-1)
				printf("0");		 
			else{
				for(;k<strlen(a)-mark-1;++k)
					printf("%c",c[k]);		//这里分子也是去前导零 
				}return 0;
		}else if(a[i]=='%'){		//百分数 
			for(i=strlen(a)-2,j=0;j<strlen(a)-1;--i,++j)
				d[j]=a[i];
			for(k=0;d[k]=='0'&&k<strlen(a)-1;++k)
				;
			if(k==strlen(a)-1)
				printf("0%%");
			else{
				for(;k<strlen(a)-1;++k)
					printf("%c",d[k]);
				printf("%%");
			}return 0;
		}		
	}for(i=strlen(a)-1,j=0;j<strlen(a);--i,++j)		//整数 
				d[j]=a[i];
	for(k=0;d[k]=='0'&&k<strlen(a);++k)
				;
	if(k==strlen(a))
		printf("0");
	else{
		for(;k<strlen(a);++k)
			printf("%c",d[k]);
			}
	return 0;
}
