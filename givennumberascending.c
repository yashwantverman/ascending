 #include<stdio.h>
 int main()
 {
    int n,i,j,value[100],temp;
    printf("Enter the numbers. ");
    scanf("%d",&n);
    printf("Enter %d numbers .\n",n);
    for(i=1;i<=n;i++)
      {
          scanf("%d",&value[i]);
      }
      for(i=1;i<=n;i++)
      {
         for(j=i+1;j<=n;j++)
         {
            if(value[i]>value[j])
            {
                temp=value[i];
                value[i]=value[j];
                value[j]=temp;
            }
         } 
      }
      printf("Ascending order:\n");
      for(i=1;i<=n;i++)
      {
        printf("%d\n",value[i]);
      }
    return 0;
 }