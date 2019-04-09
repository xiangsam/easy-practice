#include <stdio.h>
#include <stdlib.h>
int apple[10000][2],f[10000],num;
void choose(int n,int a,int b)
{
	int i,j=0;
	for(i=0;i<n;++i){
		if(apple[i][0]<=a+b){
			f[j]=apple[i][1];
			++j;
			num=j;
		}
	}
}
int cmp(const void *a,const void *b){
	return(*(int*)a-*(int*)b);
}
int main()
{
	int n,s,a,b;
	scanf("%d %d",&n,&s);
	scanf("%d %d",&a,&b);
	int i=0;
	for(;i<n;++i)
		scanf("%d %d",&apple[i][0],&apple[i][1]);
	choose(n,a,b);
	qsort(f,num,sizeof(f[0]),cmp);
	int count=0,pay=0;
	for(i=0;i<num;++i){
		pay+=f[i];
		if(pay<=s)
			++count;
	}printf("%d",count);
	return 0;
}
