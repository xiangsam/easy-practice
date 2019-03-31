#include <stdio.h>
int fac(int n){
	if(n==1||n==0)
		return 1;
	else 
		return n*fac(n-1);
}int s(int n,int m){
	int ans,upper,lower;
	upper=fac(n);
	lower=fac(n-m);
	ans=upper/lower;
	return ans;
}int main()
{
	int x;
	scanf("%d",&x);
	int m,n,ans=0;
	if(x%2==1)
		n=(x-1)/2;
	else
		n=x/2;
	for(m=0;m<=n;++m){
		ans+=s(n,m);
	}printf("%d",ans);
	return 0;
}
