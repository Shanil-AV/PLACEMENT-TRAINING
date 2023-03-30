#include<stdio.h>
int main()
{

    int a[10];
    int sum=0,i,j,flag,temp=0;
    printf("enter the  elements in the array");
    for(i=0;i<10;i++)
    {

        scanf("%d",&a[i]);

    }
    for(i=0;i<10-1;i++)
    {

        for(j=0;j<10-i-1;j++)
        {
           if(a[j]>a[j+1])
           {


            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
           }
        }
    }
     for(i=0;i<10;i++)
    {

        printf("%d  ",a[i]);

    }


    return 0;
}

