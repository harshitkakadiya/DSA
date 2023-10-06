#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],arr3[10];
	int i,j;
    for(i=0;i<5;i++)
    {
        printf("Enter One: ");
        scanf("%d",&arr1[i]);
        arr3[i]=arr1[i];
    }
    for(j=0;j<5;j++)
    {
        printf("Enter tow: ");
        scanf("%d",&arr2[j]);
        arr3[i]=arr2[j];
        i++;
    }
    printf("merge array is\n");
    for(j=0;j<10;j++)
    {
        printf("%d ",arr3[j]);
    }
}