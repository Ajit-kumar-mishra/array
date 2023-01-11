#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,num,n,pos,arr[100];
    printf("enter the number of elements:");
    scanf("%d",&num);
    printf("input elements in the array :");
    for(i=0;i<num;i++)
    {
        printf(" elements -[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("enput the number who will be inserted :");
    scanf("%d",&n);
    printf("input the number of possition will be inserted:");
    scanf("%d",&pos);
    for(i=num-1;i>0;i--)
    {
        a[i+1]=a[i];
    }
    arr[pos]=n;
    num=num+1;
    printf("the array after insertion:");
    for(i=0;i<num;i++)
    {
        printf(" elements-[%d] =%d",i,arr[i]);
    }
    return 0;
}
