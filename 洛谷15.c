#include <stdio.h>
#include <stdbool.h>		//�������� 
int main()
{
	int a[100001],n,i,j,count;
	bool b[100001];
	scanf("%d",&n);
	for(i=0;i<n;++i){
		scanf("%d",&a[i]);
		b[a[i]]=true;		//ÿ������ͬ�����Կ�����˴��� 
	}for(i=0;i<n-1;++i){
		for(j=i+1;j<n;++j){
			if(b[a[i]+a[j]]){
				++count;
				b[a[i]+a[j]]=false;		//�����ظ�����ͬһ���� 
			}
		}
	}printf("%d",count);
	return 0;
}
