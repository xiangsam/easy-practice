#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,i;
	char a[100],mark;
	scanf("%d",&n);
	if(n<0)
		printf("-");
	n=fabs(n);
	sprintf(a,"%d",n);
	if(a[0]=='0')
		printf("0");
	else{
		for(i=strlen(a)-1;a[i]=='0';--i)
			;
		mark=i;
		for(i=mark;i>=0;--i)
			printf("%c",a[i]);
	}return 0;
}
