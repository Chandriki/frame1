#include<stdio.h>
#include<conio.h>
void main()
{
     int arr[20],n,i,j,k=0;
    printf("array size:\n");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=(k+1);j<n;j++)
    {
            if(arr[k]>arr[j])
            {
                printf("largest element%d",arr[k]);
                 k++;
            }
    }
getch();
}
