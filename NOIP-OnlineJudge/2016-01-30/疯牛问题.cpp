#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,c,pos[100000];
int BS();
int judge(int k);
int main()
{
    while(~scanf("%d%d",&n,&c))     //~Ϊ��ȡ����֮�⣬�������ݷǷ�����������
    {
        for(int i=0;i<n;i++)
            scanf("%d",&pos[i]);
        sort(pos,pos+n,less<int>());
        printf("%d\n",BS());
    }
}
int BS()    //��������������
{
    int left=0;
    int right=pos[n-1]-pos[0];
    int mid=(left+right)>>1;
    //>>1��������λ�����ƶ�һλ���൱�ڳ�����ͬ������һλ�൱�ڳ˶�
    while(left<=right)
    {
        if(judge(mid))     //��������̰�ķ������������Ƿ��ܸ���
            left=mid+1;
        else
            right=mid-1;
        mid=(left+right)>>1;    //����midֵ
    }
    return left-1;
    //left��Ҫ-1���������midֵ��left=mid+1;left-1=mid)
}
int judge(int k)
{
    int cnt=1,start=pos[0];
    for(int i=1;i<n;i++)
    //�ж���һͷţ�Ƿ��ܷ��ڳ�����С�����λ��
    //��һͷţ�Ѿ����ڵ�һ��λ�ô�������i��1��ʼ
    {
        if(pos[i]-start>=k)
        {
            cnt++;
            if(cnt>=c)
            //�ж��Ѿ����ŵ�ţ�������Ƿ��Ѿ��ﵽ������������ţ������
                return true;
            start=pos[i];       //����startֵ
        }
    }
    return false;
}
