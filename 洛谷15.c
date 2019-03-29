#include <stdio.h>
#include <stdbool.h>		//布尔类型 
int main()
{
	int a[100001],n,i,j,count;
	bool b[100001];
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
		b[a[i]]=true;		//每个数不同，所以可以如此处理 
	}for(i=0;i<n-1;++i){
		for(j=i+1;j<n;++j){
			if(b[a[i]+a[j]]){
				++count;
				b[a[i]+a[j]]=false;		//避免重复计数同一个和 
			}
		}
	}printf("%d",count);
	return 0;
}
