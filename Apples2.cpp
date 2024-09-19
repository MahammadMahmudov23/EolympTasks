#include<stdio.h>
int k,n,res;
int main(void)
{
    scanf("%d %d",&n,&k);
    res=k%n;
    printf("%d",res);
    return 0;
}