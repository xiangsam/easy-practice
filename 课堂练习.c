#include <stdio.h>
#include <string.h>
char a[100];
int count;
void swap(char x,char y)
{
	int temp;
	temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void fun(int p,int left)
{
	int i;
	if(left==0){
		++count;
		printf("%s\n",a);
		return;
	}else{
		for(i=p;i<strlen(a);++i){
			swap(p,i);
			fun(p+1,left-1);
			swap(i,p);
		}
	}
}
int main()
{
	scanf("%s",&a);
	fun(0,strlen(a)-1);
	printf("%d",count);
	return 0;
}
