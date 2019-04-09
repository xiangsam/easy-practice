#include <stdio.h>
int main()
{
	double s,x,sum,go;
	scanf("%lf %lf",&s,&x);
	sum=0.0;
	for(go=7.0;sum+go<=s-x;go=go*0.98){
		sum=sum+go;
	}if(sum>s-x){
		if(sum+go>s+x)
			printf("n");
		else
			printf("y");
	}else if(sum<s-x){
		if(sum+go+go*0.98>s+x)
			printf("n");
		else 
			printf("y");
	}
	return 0;
