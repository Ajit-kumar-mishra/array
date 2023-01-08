#include <stdio.h>

int  main()
{
    int arr1[100];
    int i, mx, mn, n;
	
	
       printf("\n\nFind maximum and minimum element in an array :\n");
       printf("--------------------------------------------------\n");	

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
        printf("even elements are:");
for(i=0;i<n;i++)
{
if(arr1[i]%2==0)
        printf("%d\n",arr1[i]);
}

printf("odd elements are :");
for(i=0;i<n;i++)
{
if(arr1[i]%2==1)
        printf("%d\n",arr1[i]);
} 
       return 0;
}
