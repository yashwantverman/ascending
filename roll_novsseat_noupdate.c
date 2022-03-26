#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
     
    int min=1,max,seats ;
    int roll_no[100],b; 
    printf("Please enter the no of student present in the class.");
    scanf("%d",&max);
    
     printf("Please enter the roll no.\n ");
   for(b=1;b<=max;b++)
   {
       scanf("%d",&roll_no[b]);
   }
 
    printf("Please enter the no of seats.");
    scanf("%d",&seats);
     
   int a[max],i,j ,temp;
    srand(time(NULL));

    for(i=1;i<=max;i++)
    {
       temp=rand()%seats+min;
      for(j=1;j<=i-1;j++)
      {
          if( temp==a[j])
          break;
      }
      if(i==j)
          a[i]= temp;
      else
           i--;

    }
    for(b=1;b<=max;b++)
    {
        printf("Roll no: %d\n",roll_no[b]);
    }
    for(i=1;i<=max;i++)
    {
        
       printf("Seats_no: %d\n",a[i]);
    }



    
 
    return 0;
}