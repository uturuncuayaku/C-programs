#include <limits.h>
int maxSubArray(int nums, int numsSize){

	int i = 0;
	int sum = 0;
	int max = INT_MIN;

	for(i = 0; i < numsSize; i++){

		if(sum >= 0)
			sum += nums[i];
		else
			sum = nums[i];
		if(sum > max)
			max = sum;
	}

	return max;
}
