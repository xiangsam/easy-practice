#include <stdio.h>
int main()
{
	int groundx[200000]={-1},groundy[200000]={-1};
	int n;
	scanf("%d",&n);
	int a[10000],b[10000],g[10000],k[10000];
	int i;
	for(i=0;i<n;++i)
		scanf("%d %d %d %d",&a[i],&b[i],&g[i],&k[i]);
	int x,y;
	int ans=-1;
	scanf("%d %d",&x,&y);
	for(i=0;i<n;++i){
		if(x>=a[i]&&x<=a[i]+g[i]){
			if(y>=b[i]&&y<=b[i]+k[i])
				ans=i+1;
		}
	}printf("%d",ans);
	return 0;
}
