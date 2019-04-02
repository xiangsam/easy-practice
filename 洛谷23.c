#include <stdio.h>
int n,k,count;
int a[100];
int isprime(int n){
	int i=2;
	for(;i*i<=n;++i){
		if(n%i==0)
			return 0;
	}return 1;
}
void dfs(int sum,int p,int left){
	if(left==0){
		if(isprime(sum))
			count++;
		return;
	}int i;
	for(i=p;i<=n-left;++i)
		dfs(sum+a[i],i+1,left-1);
}
int main()
{
	scanf("%d %d",&n,&k);
	int i;
	for(i=0;i<n;++i)
		scanf("%d",&a[i]);
	dfs(0,0,k);
	printf("%d",count);
	return 0; 
}
