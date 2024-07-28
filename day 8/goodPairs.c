int numIdenticalPairs(int* nums, int numsSize) {
    int gp=0;
    for(int i=0; i<numsSize; i++){
        for (int j=i+1; j<numsSize; j++){
            if(nums[i]==nums[j]){
                gp++;
            }
        }
    }
    return gp;
}