/***
  * Given a non-empty array of integers, every element appears twice except for one. Find that single one.
  *
  *  Note:
  *  Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
 */

int singleNumber(int* nums, int numsSize){
    int ret = 0;
    while(numsSize--)
        ret ^= *nums++;                                                 /*  We will end up with the odd                  */
    return ret;                                                                    /*  number out if it doesn't have a               */
}                                                                                         /*  pair in the array.                                      */ 

/* First attempt without using extra memory
  * and had an issue with while loop starting at 0
  */

int singleNumber_v1(int* nums, int numsSize){
    int i;
    for(i = 1;  i < numsSize; i++)
        nums[0] ^= nums[i];                                            /*  Checking the first number instead        */
    return nums[0];                                                           /*  of zero, because it it has a pair we         */
}                                                                                          /*  will return 0                                              */ 

/* Doesn't check the last  digit
  * before incrementing pointer
  * heap buffer overflow error
  */
int singleNumberv2(int* nums, int numsSize){
    nums++;
    whille(numsSize--)
    if (numsSize -1 == 0){break;}
    else
        nums[0] ^= *nums++; 
    return nums[0];  
}
//Final solution
int singleNumberv3(int* nums, int numsSize){
    
    do{
      if (numsSize -1 == 0) 
        break;
      else
          nums[0] ^= *nums++; 
    } while (numsSize--);
    
    return nums[0];                                                            
}          
