#include<stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,m=0,n=0,i=0,t=0,result=0;
    printf("�ó������a��m�η���b��n�η�֮�͡�\n");
    printf("������a��ֵ��\n");
    scanf("%d",&a);
    printf("������b��ֵ��\n");
    scanf("%d",&b);
    printf("������m��ֵ��\n");
    scanf("%d",&m);
    printf("������n��ֵ��\n");
    scanf("%d",&n);
    c=a;
    d=b;
    for(i=2;i<=m;i++)
    {
    	c=c*a;
	}
	for(t=2;t<=n;t++)
	{
		d=d*b;
	}
	result=c+d;
	printf("ƽ����Ϊ��\n");
	printf("%d",result);
    getchar(); getchar();
    return 0;
}
