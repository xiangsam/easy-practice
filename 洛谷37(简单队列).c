#include <stdio.h>
#include <string.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int a[1000]={-1};
	int book[1011];
	int i,count=0;
	for(i=0;i<n;++i){
		scanf("%d",&book[i]);
	}int j=0,num;
	for(i=0;i<n;++i){
		num=0;
		for(j=0;j<=count;++j){
			if(a[j]==book[i]){
				++num;
			}
		}if(num>0)
			continue;
		else{
		++count;
		if(count>=m){
			a[count]=book[i];
			a[count-m]=-1;
		}
		else{
			a[count]=book[i];
		}
	}
	}printf("%d",count);
}
