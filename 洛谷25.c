#include <stdio.h>
#include <string.h>
int isprime(int n)
{
	int i;
	for(i=2;i*i<=n;++i){
		if(n%i==0)
			return 0;
	}return 1;
}
int ispal(int n)
{
	char a[100];
	int i;
	sprintf(a,"%d",n);
	for(i=0;i<=strlen(a)/2-1;++i){
		if(a[i]!=a[strlen(a)-i-1])
			return 0;
	}return 1;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int i;
	if(a<10){
		if(a%2==0)
			a++;
		for(i=a;i<10&&i<=b;i=i+2){
			if(isprime(i))
				printf("%d\n",i);
		}for(i=11;i<=b&&i%2==1;i=i+2){
			if(ispal(i)){
				if(isprime(i))
					printf("%d\n",i);
			}
		}
	}else{
		if(a%2==0)
			a++;
		for(i=a;i<=b&&i%2==1;i=i+2){
			if(ispal(i)){
				if(isprime(i))
					printf("%d\n",i);
			}
		}
	}return 0;
}
