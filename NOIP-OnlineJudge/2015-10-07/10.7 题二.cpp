//ԭ����FloatӦ��ΪȫСд;2������֮��Ӧ�г˺�(*)��MֵӦ������� 
#include<iostream> 
using namespace std;
int main()
{
	float L,W,H,M;
	cout<<"Input L,W,H:";
	cin>>L>>W>>H;
	M=2*(L*W+L*H+W*H);
	cout<<M;
	system("pause");
	return 0;
}
