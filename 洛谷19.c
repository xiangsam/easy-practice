#include <stdio.h>
#include <string.h>
int main()
{
	char a[300],b[300],c[300],d[300];
	int i,mark,j,k,l;
	scanf("%s",&a);
	for(i=0;i<strlen(a);++i){
		if(a[i]=='.'){		//С����� 
			mark=i;
			for(i=mark-1,j=0;i>=0;--i,++j)
				b[j]=a[i];
			for(i=strlen(a)-1,j=0;i>mark-1;--i,++j)
				c[j]=a[i];		//����������С�����ַֿ����� 
			for(k=0;b[k]=='0'&&k<mark-1;++k)
				;
				if(k==mark)
					printf("0");	//��������ȫΪ0�����0 
				else{
					for(;k<mark;++k)
						printf("%c",b[k]);		//����ȥ����ת����ǰ��������� 
				}for(k=strlen(a)-mark-2;c[k]=='0'&&k>=0;--k)
					;
				if(k==-1)
					printf(".0");		//С������ȫΪ�� 
				else{
					printf(".");
					for(l=0;l<=k;++l)
						printf("%c",c[l]);		//ȥ��ĩβ����� 
					}return 0;
		}else if(a[i]=='/'){		//������� 
			mark=i;
			for(i=mark-1,j=0;i>=0;--i,++j)
				b[j]=a[i];
			for(i=strlen(a)-1,j=0;i>mark-1;--i,++j)
				c[j]=a[i];		//�ֱ����ĸ���� 
			for(k=0;b[k]=='0'&&k<mark-1;++k)
				;
			if(k==mark)
					printf("0");		//��ĸȫΪ�� 
			else{
				for(;k<mark;++k)
					printf("%c",b[k]);		//ȥǰ������� 
				}
			printf("/");
			for(k=0;c[k]=='0'&&k<=strlen(a)-mark-2;++k)
				;
			if(k==strlen(a)-mark-1)
				printf("0");		 
			else{
				for(;k<strlen(a)-mark-1;++k)
					printf("%c",c[k]);		//�������Ҳ��ȥǰ���� 
				}return 0;
		}else if(a[i]=='%'){		//�ٷ��� 
			for(i=strlen(a)-2,j=0;j<strlen(a)-1;--i,++j)
				d[j]=a[i];
			for(k=0;d[k]=='0'&&k<strlen(a)-1;++k)
				;
			if(k==strlen(a)-1)
				printf("0%%");
			else{
				for(;k<strlen(a)-1;++k)
					printf("%c",d[k]);
				printf("%%");
			}return 0;
		}		
	}for(i=strlen(a)-1,j=0;j<strlen(a);--i,++j)		//���� 
				d[j]=a[i];
	for(k=0;d[k]=='0'&&k<strlen(a);++k)
				;
	if(k==strlen(a))
		printf("0");
	else{
		for(;k<strlen(a);++k)
			printf("%c",d[k]);
			}
	return 0;
}
