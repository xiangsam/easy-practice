#include <stdio.h>
int main()
{
	int i;
	double x,length[100000],l;
	scanf("%lf",&x);
	length[1]=2;
	l=length[1];
	for(i=1;l<x;++i){
		length[i+1]=length[i]*(0.98);
		l=l+length[i+1];
	}
	printf("%d",i);
	return 0;
 } 
