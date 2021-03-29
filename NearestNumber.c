#include<stdio.h>
int founddi(int n)
{
    int di;
    for(di=0;n!=0;di++,n/=10);
    return di;
}
int mypow(int n,int pow)
{
    int i,result=1;
    for(i=0;i<pow;i++)
    {
        result*=n;
    }
    return result;
}
int main()
{
    int n,k,com=0,dik,i;
    scanf("%d %d",&n,&k);
    dik=founddi(k);

    for(i=0;i<dik;i++)
    {
        com+=(n%10)*mypow(10,i);
        n/=10;
    }
    if(k>=com)
    {
        printf("%d%d",n,k);
    }
    else
    {
        printf("%d%d",n+1,k);
    }
}
