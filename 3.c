#include<stdio.h>
#include<string.h>

void main()
{
    char s[10],i,count1=0;
    int flag=0;
        printf("enter the string/n");
        scanf("%s",s);
        int len =strlen(s);
        for(i=0;i<len;i++)
        {
            if (s[i]=='*')
            {

                count1++;
            }
            else if(s[i]=='#')
            count1--;
            else
            flag=1;
        }
        if (flag==1)
            printf("invalid");
      printf("%d",count1);
}
