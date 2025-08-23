#include<stdio.h>
int main()
{
    int n,i;
    long long fact=1;
    printf("enter the number");
    scanf("%d",&n);

    if(n<0)
    printf("not defined");
    else{
    for(i=1;i<=n;i++)
    fact*=i;
    

}
printf("%lld",fact);
}