#include<stdio.h>
void ck(int a[20][20],int n)
{
    int chk=1,sumrow[n],sumco[n],i,j,cross[2];
    for(i=0; i<n; i++)
    {
        sumrow[i]=0;
        sumco[i]=0;
    }
    cross[0]=0;
    cross[1]=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sumrow[i]+=a[i][j];
        }
        printf("%d ",sumrow[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            sumco[i]+=a[j][i];
        }
    }
    for(i=0; i<n; i++)
    {
        cross[0]+=a[i][i];
        cross[1]+=a[i][n-i-1];
    }
    for(i=0; i<n-1; i++)
    {
        if(sumco[i]!=sumco[i+1])
        {
            chk=0;
            break;
        }
        if(sumrow[i]!=sumco[i+1])
        {
            chk=0;
            break;
        }
    }
    if(cross[0]!=cross[1])
    {
        chk=0;
    }
    if(sumrow[0]!=sumco[0])
    {
        chk=0;
    }
    if(cross[0]!=sumco[0])
    {
        chk=0;
    }
    if(chk==0)
    {
        printf("no\n");
    }
    else printf("yes\n");
}
int main()
{
    int a,b,c,i,j;
    scanf("%d %d %d",&a,&b,&c);
    int a1[a][a],a2[b][b],a3[c][c];
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0; i<b; i++)
    {
        for(j=0; j<b; j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0; i<c; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&a3[i][j]);
        }
    }
    ck(a1,a);
    ck(a2,b);
    ck(a3,c);
}
