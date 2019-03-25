#include <stdio.h>
int main()
{
	int a[200],n,b[200];
	scanf("%d",&n);
	int i,num=0,j=1;
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}int temp=1;
	b[0]=0;
	for(;temp<n;++temp){
		for(i=0;i<temp;++i){
			if(a[temp]>a[i])
				++num;
		}b[j]=num;
		++j;
		num=0;
	}for(i=0;i<n-1;++i){
		printf("%d ",b[i]);
	}printf("%d",b[n-1]);
	return 0;
 } 
