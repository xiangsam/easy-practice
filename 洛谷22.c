#include <stdio.h>
int countf(int n){
	int i;
	int ans[2000]={1,1};
	if(n>=2){
	    for(i=2;i<=n;++i){
		if(i%2==0)
			ans[i]=ans[i-1]+ans[i/2];
		else
			ans[i]=ans[i-1];
	   }
	 }
	return ans[n];
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans;
	ans=countf(n);
	printf("%d",ans);
	return 0;
 } 

