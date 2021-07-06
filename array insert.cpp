#include<stdio.h>

int main()
{
	int a[100],i,pos,size,item;
	printf("enter size of array : ");
	scanf("%d",&size);
	
	printf("enter array elements: ");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
		
	}
	printf("enter position that u want to inter: ");
	scanf("%d",&pos);
	printf("enter item that u want to insert: ");
	scanf("%d",&item);
	
	for(i=size;i>=pos;i--){
		a[i]=a[i-1];
		
	}
	a[pos]=item;
	size++;
	printf("final array\n ");
	
	for(i=0;i<size;i++){
		printf("%d",a[i]);
	}
	
	int loop, smallest;

   smallest = a[0];
   
   for(loop = 1; loop < size; loop++) {
      if( smallest > a[loop] ) 
         smallest = a[loop];
   }
   
   
   printf("\t\tSmallest element of array is %d\n", smallest); 
   
   int large;
   i=0;
    large = a[i];
    while(i<size)
    {
        if(large<a[i])
            large = a[i];
        i++;
    }
    printf("\nLargest Number = %d", large);
 
	return 0;
}
