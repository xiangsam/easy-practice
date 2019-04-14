#include <stdio.h>
int main()
{
	int n;
	int a[1000]={0};
	scanf("%d",&n);
	int i=0;
	for(;i<n+1;++i)
		scanf("%d",&a[i]);
	i=0;
	if(n>0){
	if(a[0]>0){
		if(a[0]==1)
		  (n==1)?(printf("x")):(printf("x^%d",n));
		else
			(n==1)?(printf("%dx",a[0])):(printf("%dx^%d",a[0],n));
		}
	else if(a[0]==-1)
			(n==1)?(printf("-x")):(printf("-x^%d",n));
	else
		(n==1)?(printf("%dx"),a[0]):(printf("%dx^%d",a[0],n));
	for(i=1;i<n;++i){
		if(a[i]==1)
			(i==n-1)?(printf("+x")):(printf("+x^%d",n-i));
		else if(a[i]>0)
			(i==n-1)?(printf("+%dx",a[i])):(printf("+%dx^%d",a[i],n-i));
		else if(a[i]==0)
			continue;
		else if(a[i]==-1)
			(i==n-1)?(printf("-x")):(printf("-x^%d",n-i));
		else if(a[i]<0)
			(i==n-1)?(printf("%dx",a[i])):(printf("%dx^%d",a[i],n-i));
	}
	if(a[n]==0)
		;
	else if(a[i]>0)
		printf("+%d",a[n]);
	else 
		printf("%d",a[n]);
}	else
		printf("%d",a[0]);
	return 0;
}
