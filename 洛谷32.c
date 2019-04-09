#include <stdio.h>
int line(int i){
	int sum;
	sum=(1+i)*i/2;
	return sum;
}
int main()
{
	int n,left;
	scanf("%d",&n);
	int i,mark;
	for(i=1;;++i){
		if(n>line(i)&&n<=line(i+1)){
			mark=i+1;
			break;
		}
	}
	left=n-line(mark-1);
	if(n==1)
		printf("1/1");
	else if(mark%2==1){
		printf("%d/%d",mark-left+1,left);
	}else
		printf("%d/%d",left,mark-left+1);
	return 0;
}
