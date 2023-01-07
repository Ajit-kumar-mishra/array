#include <stdio.h>  
  
void  main()  
{  
    int arr1[100],arr2[100]; 
    int i,num;  
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input number of  elements in the array :\n");  
    scanf("%d",&num);
    for(i=0; i<num; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr1[i]);  
    }  
  
    printf("\nElements in array are:    ");  
    for(i=0; i<num; i++)  
    {  
        printf("%d\t", arr1[i]); 
    } 
    for(i=0;i<num;i++)
    {
        arr2[i]=arr1[i];
    }
    printf("\ncopy of  array  1 elements into another array are:   ");
    for(i=0;i<num;i++)
    {
        printf("%d\t",arr2[i]);
    }
     
     return 0;

    
}
