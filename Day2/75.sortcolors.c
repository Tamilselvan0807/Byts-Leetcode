void sortColors(int* nums, int numsSize){
    int z=0;
    int o=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==1){
            o++;
        }
        if(nums[i]==0){
            z++;
        }
    }
    for(int i=0;i<z;i++){
        nums[i]=0;
    }
    for(int i=z;i<o+z;i++){
        nums[i]=1;
    }
    for(int i=o+z;i<numsSize;i++){
        nums[i]=2;
    }

}
