#include<stdio.h>
#include<stdlib.h>
int main()
{

    int *number=(int*)malloc(4* sizeof(int));
    int i;
    number[0]=1;
    number[1]=2;
    number[2]=3;
    printf("\nsorted integer are");
    for(i=0;i<4;i++)
    {
        printf("\nnumber[%d]",i,number[i]);

    }
    return 0;
}
