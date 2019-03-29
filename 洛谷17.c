#include <stdio.h>
#include <string.h>
int main()
{
	char a[7],b[7];
	long sum1=1,sum2=1,i;
	scanf("%s",a);
	scanf("%s",b);
	for(i=0;i<strlen(a);++i)
		sum1*=(a[i]-'A'+1);
	sum1%=47;
	for(i=0;i<strlen(b);++i)
		sum2*=(b[i]-'A'+1);
	sum2%=47;
	if(sum1==sum2)
		printf("GO");
	else
		printf("STAY");
	return 0;
}
