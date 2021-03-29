#include<stdio.h>
int main()
{
    int n,i,j,ck=0;
    scanf("%d",&n);
    int coment[n],count[n],top=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&coment[i]);
    }
    count[0]=-1;
    for(i=0; i<n; i++)
    {
        ck=0;
        for(j=0+i;j<n;j++)
        {
            if(coment[i]==count[j])
            {
                ck=1;
            }
        }
        if(ck==1)
            continue;
        count[top]=coment[i];
        top++;
    }
    printf("%d",top);
    for(i=0; i<n; i++)
    {

    }
}
