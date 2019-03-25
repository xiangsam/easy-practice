#include <stdio.h>
int main()
{
	int i,a[1000];
	for(i=0;scanf("%d",&a[i])!=EOF;++i){
		;
	}
	for(i=i-2;i>=1;--i){
		printf("%d ",a[i]);
	}printf("%d",a[0]);
	return 0;
}
