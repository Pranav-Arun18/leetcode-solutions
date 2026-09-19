#include<stdio.h>
#include<stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
typedef struct{
    int value;
    int idx;
}Pair;
int cmp(const void*a,const void*b){
    Pair*pa=(Pair*)a;
    Pair*pb=(Pair*)b;
    return pa->value-pb->value;
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Pair*pairs=malloc(numsSize*sizeof(Pair));
    for(int i=0;i<numsSize;i++){
        pairs[i].value=nums[i];
        pairs[i].idx=i;
    }
    qsort(pairs,numsSize,sizeof(Pair),cmp);
    int left=0;
    int right=numsSize-1;
    while(left<right){
        int sum=pairs[left].value+pairs[right].value;
        if(sum==target){
            int*result=malloc(2*sizeof(int));
            result[0]=pairs[left].idx;
            result[1]=pairs[right].idx;
            *returnSize=2;
            free(pairs);
            return result;
        }
        else if(sum<target){
            left++;
        }
        else{
            right--;
        }
    }
    free(pairs);
    *returnSize=0;
    return NULL;
}