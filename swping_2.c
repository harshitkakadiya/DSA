/*#include<stdio.h>
int main()
{
int x,i,a[]={10,20,30,40,50};
    printf("\nNumber is : ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
        x=a[0];
        a[0]=a[4];
        a[4]=x;
    }
    
    printf("\nvalue is : ");
    for(i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
}

*/

// SCANF VALUE

#include<stdio.h>
int main()
{
int n,x,i,a[]={10,20,30,40,50};
   // printf("\nNumber is : ");
    for(i=0;i<5;i++)
    {
        printf("Enter arr: [%d]",i);
        scanf("%d",&a[i]);
        x=a[0];
        a[0]=a[4];
        a[4]=x;
    }
    
    printf("\nvalue is : ");
    for(i=0;i<5;i++)
    {
       printf("%d ",a[i]);
    }
}