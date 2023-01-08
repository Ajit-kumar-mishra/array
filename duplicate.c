#include <stdio.h>  
  
void  main()  
{  
    int arr[100]; 
    int i,j,num,count=0; 
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");	
  
    printf("Input number of  elements in the array :\n");  
    scanf("%d",&num);
    for(i=0; i<num; i++)  
    {  
	    printf("element - %d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are:    ");  
    for(i=0; i<num; i++)  
    {  
        printf("%d\t", arr[i]); 
    } 
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
           if(arr[i]==arr[j]){
        count++;
        break;
           }
        }
    }

    printf("\nduplicate elements are %d",count);

     
     return 0;

    
}
