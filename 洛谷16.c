#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a,const void *b){ 
	return(*(int*)a-*(int*)b);
	} 
int main()
{
	int a[1000000]={0},b[1000000]={0};
	int n,i=0,j;
	scanf("%d",&n);
	for(;i<n;++i)
		scanf("%d",&a[i]);
	i=-1;
	for(j=0;i<n;++j){
		for(i=i+1;a[i]<a[i+1];++i){
			++b[j];
		}++b[j];
	}qsort(b,j,sizeof(b[0]),cmp);
	printf("%d",b[j-1]);
	return 0;
}
