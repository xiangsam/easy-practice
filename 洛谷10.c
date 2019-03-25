#include <stdio.h>
int main()
{
	int a[9],h;
	int i,j=0;
	for(i=0;i<=9;++i){
		scanf("%d",&a[i]);
	}
	scanf("%d",&h);
	for(i=0;i<=9;++i){
		if((30+h)>=a[i])
			++j;
	}
	printf("%d",j);
	return 0;
}
