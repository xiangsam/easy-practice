#include <stdio.h>
int isprime(int n)
{
	int i;
	for(i=2;i*i<=n;++i){
		if(n%i==0)
			return 0;
	}return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k;
	for(i=2;i<=n-4;i=i+1){
		for(j=2;j<=n-4;j=j+1){
			k=n-i-j;
			if(isprime(i)&&isprime(j)&&isprime(k)){
				printf("%d %d %d",i,j,k);
				return 0;
			}
		}
	}return 0;
}
