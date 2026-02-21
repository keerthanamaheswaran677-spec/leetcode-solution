int maxSubArray(int* nums, int numsSize) {
    int currentSum=nums[0];
    int maximumSum=nums[0];
    for(int i=1;i<numsSize;i++) {
        if(currentSum<0) {
            currentSum=nums[i];
        } else {
            currentSum=currentSum+nums[i];
        }
    if(currentSum>maximumSum) {
            maximumSum=currentSum;
        }
    }
return maximumSum;
}
