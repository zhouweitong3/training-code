#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
struct student
{
    string name;  //string �����ַ��� ����ָ��Ԫ�ظ���
    float mark;
}cls[50];
bool comp(student a,student b)  //�ֶ���дcomp������ע�⴫����ֵһ����0��1
{
    if(a.mark==b.mark)  return a.name<b.name;
    else return a.mark>b.mark;
}
int main()
{
    freopen("03.in","r",stdin);
    freopen("03.out","w",stdout);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>cls[i].name>>cls[i].mark;
    }
    sort(cls,cls+n,comp);  //�ṹ����Ϊ����Ԫ�ؽ����������ֺͳɼ�֮����Ȼ��Ӧ
    for(int i=0;i<n;i++)
    {
        cout<<cls[i].name<<" "<<cls[i].mark<<endl;
    }
    return 0;
}
