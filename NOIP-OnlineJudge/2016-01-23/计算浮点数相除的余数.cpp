#include<stdio.h>
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%g",a-(int)(a/b)*b);
    return 0;
}
