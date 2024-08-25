void sortColors(int* nums, int numsSize) {
    int zero = 0, one = 0, two = 0;
  
    for(int i = 0; i < numsSize; i++) {
        if(nums[i] == 0) zero++;
        else if(nums[i] == 1) one++;
        else if(nums[i] == 2) two++;
    }
    int i = 0;
    for(; i < zero; i++) nums[i] = 0;
    for(; i < zero + one; i++) nums[i] = 1;
    for(; i < zero + one + two; i++) nums[i] = 2;
}
