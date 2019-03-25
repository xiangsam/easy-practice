#include <stdio.h>
int main()
{
	int x,l=0;
	long i=1,n;
	scanf("%d %ld",&x,&n);
	while(i<=n){
		if(x<=5){
			l=l+250;
			++i;
			++x;
		}else if(x>5&&x<=7){
			++i;
			++x;
		}else{
			x=x-7;
		}
	}printf("%d",l);
	return 0;
	}

