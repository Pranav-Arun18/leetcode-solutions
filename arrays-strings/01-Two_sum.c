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
/* ---------- LOCAL TESTING ---------- */

int main(){

    /* Test Case 1 - Typical Case */
    int nums1[] = {2,7,11,15};
    int target1 = 9;
    int returnSize1;

    int* result1 = twoSum(nums1,4,target1,&returnSize1);

    printf("Test Case 1:\n");
    printf("Input: [2, 7, 11, 15], Target = 9\n");

    if(returnSize1 == 2){
        printf("Output: [%d, %d]\n",result1[0],result1[1]);
    }
    else{
        printf("No solution found\n");
    }

    free(result1);


    /* Test Case 2 - Edge Case with Duplicate Values */
    int nums2[] = {3,3};
    int target2 = 6;
    int returnSize2;

    int* result2 = twoSum(nums2,2,target2,&returnSize2);

    printf("\nTest Case 2:\n");
    printf("Input: [3, 3], Target = 6\n");

    if(returnSize2 == 2){
        printf("Output: [%d, %d]\n",result2[0],result2[1]);
    }
    else{
        printf("No solution found\n");
    }

    free(result2);

    return 0;
}