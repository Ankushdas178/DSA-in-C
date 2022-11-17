\* C Program to to Find the Second Largest & Smallest Elements in an Array *\
#include<stdio.h>
#include<conio.h>
#define max 100
void maxmin(int[],int);
void main()
{
    int a[max],i,n;
    printf("enter the limit of array: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    maxmin(a,n);
    getch();
}
void maxmin(int a[max],int n)
{
    int i,b[max],t,j;
    for(i=0;i<n;i++)
    {
         b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
        }
    }
    for(j=0;j<n;j++)
    {
         if(a[j]==b[1])
         {
              printf("\nThe second minimum element is %d and its position is:  %d ",a[j],j);
         }
         if(a[j]==b[n-2])
         {
              printf("\nThe second maximum element is %d and its position is: %d",a[j],j);
         }
     }
}
