#include <stdio.h>  
  
void  main()  
{  
    int arr[100]; 
    int i,num,sum=0;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input number of  elements in the array :\n");  
    scanf("%d",&num);
    for(i=0; i<num; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<num; i++)  
    {  
        printf("%d  ", arr[i]);  
        sum=sum+arr[i];
    } 
    printf("\nsum of the all elements of the array are :%d",sum);
    printf("\n");	
}
