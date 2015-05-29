#include "bsearch.h"
#include <stdlib.h>

int _bsearch(int x, int* arr, int length) {
	int mid;
	int start;
	int end;
	int last_gt_index;
	start=0;
	end=length-1;
	if(length==0)
		return -3;
	if(arr==NULL)
		return -2;
	if(arr[end]<=x)
		return -1;
	if(arr[start]==arr[end])
		return 0;
	while(start<=end) {
		mid=start+(end-start)/2;
		if(arr[mid]<=x)
			start=mid+1;
		else {
			end=mid-1;
			last_gt_index=mid;
		}
	}
	return last_gt_index;
}

