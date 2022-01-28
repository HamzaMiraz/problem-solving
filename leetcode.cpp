#include <iostream>
#include <vector>
#include<stdio.h>


class Solution {
public:
    int search(vector<int>& nums, int target) {


        int low = 0;
        int high = nums.size()-1;

        while(low<high)
        {
            int mid=(low+high)/2;
            if(target=nums[mid]) return mid;
            if(target>nums[mid]) low=mid+1;
            if(target<nums[mid]) high=mid;

        }
        return -1;

    }
};
int main() {

    vector<int> nums1 = {-1, 0, 3, 5, 9, 12};
    int t;
    scanf("%d",t);
    cout <<search(nums1, target1) << endl;


    return 0;
}
