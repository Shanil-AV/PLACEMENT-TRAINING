#include<stdio.h>
void main()
{

    int a=12;
    int *ptr;
    ptr=&a;
    printf("Address of a direct :%p\n",&a);
    printf("Addres of a usinng pointer : %p\n",ptr);
    printf("value of a:%d\n",a);
    printf("value of a using pointer :%d\n",*ptr);

}
