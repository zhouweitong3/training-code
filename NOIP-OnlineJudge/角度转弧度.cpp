#include<stdio.h>
int main()
{
	double a=0,b=0,c=0,pi=3.1415926535898;
	printf("���������ڽ��Ƕ�ת��Ϊ���ȡ�\n");
	printf("�˳����Ц�ֵΪ3.1415926536��\n");
	printf("������Ƕ�ֵ��\n");
	scanf("%lf",&a);
	b=pi/180;
	c=a*b;
	printf("����ֵΪ��\n");
	printf("%.10lf",c);
	getchar(); getchar();
	return 0;
}
