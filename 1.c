#include<stdio.h>
int main()
{

    int a[10];
    int sum=0,i,flag;
    printf("enter the  elements in the array");
    for(i=0;i<10;i++)
    {

        scanf("%d",&a[i]);

    }
    for(i=0;i<10;i++)
    {

        sum=sum+a[i];
    }
    printf("the sum is %d",sum);
    for(i=0;i<=sum/2;i++)
    {

    if (sum%i==0)
    {

        flag=1;
    }
    }
    if (flag==1)
    {

        printf("the number is  not prime");
    }
    else
        printf("the number prime");


}
