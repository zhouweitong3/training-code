#include<iostream>
#include<vector>	//��������������ɱ����� 
#include<queue>
using namespace std;
void Func(); 
int n;
struct comp		//���������,��ס 
{
	bool operator()(const int &a,const int &b)
	{
		return a>b;
	}
};
int main()
{
	cin>>n;
	Func();
	return 0;
}
void Func()
{
	priority_queue <int,vector<int>,comp> q;  //����vector��compʵ���������� 
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int read;
		cin>>read;
		q.push(read);
	}
	while(q.size()!=1)
	{
		int a=q.top();
		q.pop();
		int b=q.top();
		q.pop();
		int c=a+b;
		ans+=c;
		q.push(c);
	}
	cout<<ans;
}
