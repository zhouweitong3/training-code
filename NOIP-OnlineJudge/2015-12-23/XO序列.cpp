#include<stdio.h>
#include<string.h> 
int main()
{
    char a[81];  //�����Ԫ�ظ�����1����Ϊ�ַ����н����� /0 .
    scanf("%s",a);   //��Ҫ���ϵ�ַ��� & . 
    int b=strlen(a);  //����ֱ��ʹ�� a.length() ������� b . 
    int c=0,d=0;
    for(int i=0;i<b;i++)
    {
		if(a[i]=='X')   //�������ڵ����ţ���ʾ��Ϊһ���ַ��� �е��ַ��ı���ֵ . 
		{
			c=c+0;
			d=0;
		}
		else if(a[i]=='O')
		{
			d++;
			c=c+d;
		}
	}
	printf("%d",c);
	return 0;
}
