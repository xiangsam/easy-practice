#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){
	return(*(int*)a-*(int*)b);
}
int main()
{
	int i,n,a[100];
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
	}qsort(a,n,sizeof(a[0]),cmp);
	int k,num=0,j;
	for(k=2;k<n;k++){
		for(i=0;i<k-1;++i){
			for(j=i+1;j<k;++j){
				if(a[i]+a[j]==a[k])
					num++;
			}
		}
	}printf("%d",num);
	return 0;
}
