#include "bsearch.h"
#include <stdio.h>
#include <stdlib.h>

static const int MAX_ARRAY_LENGTH=1024; 

int comp(const void* a, const void* b)
{
	return (*(int*)a)-(*(int*)b);
}

int main (int argc, char* argv[]) {
	int x;
	int index;
	int length;
	int arr[MAX_ARRAY_LENGTH];
	printf("Enter array length\n");	
	if(1>scanf("%d",&length)) {
		printf("Wrong input data");
		exit(EXIT_FAILURE);
	}
	if ((length <= 0)||(length>MAX_ARRAY_LENGTH)) {
		printf("Wrong length\n");
		exit(EXIT_FAILURE);
	}
	printf("Enter array \n");	
	for(int i=0; i < length; i++)
		scanf("%d",&arr[i]);
		
	qsort(arr,length,sizeof(int),comp);	

	printf("sorted arr:\n");
	for(int i=0; i < length; i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("Enter X\n");	
	if(1>scanf("%d",&x)) {
		printf("Wrong input data");
		exit(EXIT_FAILURE);
	}
	if(0>(index = _bsearch(x,arr,length))) {
		printf("Not found\n");
		exit(EXIT_SUCCESS);
	}
	printf("The first element of the sorted array, greater then %d,  has index %d\n",x,index);
	exit(EXIT_SUCCESS);
}
	
