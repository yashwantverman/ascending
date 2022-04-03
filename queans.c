#include<stdio.h>
#include<string.h>
int main()
{
    char que[50],ans[50];
    int i,flag,j;
    for(i=1;i<=3;i++)
    {
        printf("Who is the inventor of c?\n");
        printf("A.");
        scanf("%s",ans);
        for(j=0;j<=strlen(ans);j++)
        {
            if(ans[j]>=65&&ans[j]<=90)
            {
                ans[j]=ans[j]+32;
            }
        }
        flag = strcmp(ans,"yashwant");
        if(flag==0)
        {
             printf("Good!");
             break;
        }
        else
        {
            if(i==3)
            {
                printf("yashwant");
            }
            else
            {
                printf("Try again!\n");
            }    
        }
    }
    return 0;
}