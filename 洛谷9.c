#include <stdio.h>
int main()
{
	int n, x,i,j;
	int a, b;
	j=0;
	scanf("%d %d",&n,&x);
	for(i=1;i<=n;++i){
		a = i;
		while(a>0){
			b=a%10;
			a/=10;
			if(b==x){
				j++;
			}
		}	
	}
	printf("%d",j);
	return 0;
}
