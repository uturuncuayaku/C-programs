//First attempt
void moveZeroes(int *nums, int numsSize){

	int *start = &nums[0];
	int *end = &nums[numsSize -1];
	int temp = 0;

	while(start < end){
		if(*start == 0 && *end != 0){
			temp = *end;
			*end = *start;
			*start = temp;
		}
		else if(*start == 0 && *end == 0) {
			end--;
			continue;
		}
		else if(*start != 0 && *end != 0) {
			start++;
			continue;
		}
		start++;
		end++;
	}
}
//second attempt
void moveZeroes(int *n, int size){
		int right = 0;
		int left = 0;
		int temp = 0;
		
		while(right < size)
		{
			if(n[left] == 0 && n[right] != 0){
				temp = n[right];
				n[right] = n[left];
				n[left] = temp;
				left++;
			}
			if(n[left] != 0)
				left++;
			right++;
		}
}

//Submission
void moveZeroes(int *n, int size){
	int *left = &n[0];
	int *right = left;
	int i = 0;

	while(i < size)
	{
		if(*left == 0 && *right != 0){
			*left = *right;
			*right = 0;
			left++;
		}
		if(*left != 0)
			left++;
		i++;
		right++;
	}
}
