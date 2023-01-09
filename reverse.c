#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num;
    int arr[100];
    printf("enter the  number  of elements are: \n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("array - %d :" ,i);
        scanf("%d",&arr[i]);
    }
   printf("\nelements of the array are:\n"); 
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nreverse elements of the array are :\n");
    for(i=num-1;i>=0;i--)
    {
        printf("%d\t", arr[i]);
    }
    return 0;

}