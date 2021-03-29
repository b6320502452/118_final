#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int like[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&like[i]);
    }
    int max=like[0],location=1,count=0;
    for(i=0;i<n;i++)
    {
        if(like[i]>max)
        {
            max=like[i];
            location=i+1;
        }
    }
    for(i=0;i<n;i++)
    {
        if(like[i]==max)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("%d",location);
    }
    else
    {
        printf("%d",count);
    }
}
