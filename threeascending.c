#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b,a>c)
    {
        if(b>c)
        {
            printf("Ascending order of the number:\n %d\n%d\n%d",c,b,a);
        }
        else
        {
            printf("Ascending order of the number:\n %d\n%d\n%d",b,c,a);
        }
    }
    else if(b>c,b>a)
    {
        if(c>a)
        {
            printf("Ascending order of the number :\n %d\n%d\n%d",a,c,b);
        }
        else
        {
            printf("Ascending order of the number :\n %d\n%d\n%d",c,a,b);
        }
    }
    else if(c>a,c>b)
    {
        if(a>b)
        {
            printf("Ascending order of the number:\n %d\n%d\n%d",b,a,c);
        }
        else
        {
            printf("Ascending order of the number:\n %d\n%d\n%d",a,b,c);
        }
    }
    
    return 0;
}