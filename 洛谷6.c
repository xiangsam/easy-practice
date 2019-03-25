#include <stdio.h>
int main()
{
	int i,k;
	double s[100000];
	scanf("%d",&k);
	s[1]=1; 
	for(i=1;s[i]<=k;++i){
			s[i+1]=s[i]+1.0/(i+1.0);
	}
	printf("%d",i);
	return 0;
 } 
