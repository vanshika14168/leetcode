class Solution {
    public:
    int first_index(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        int first=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
            first=mid;
            high=mid-1;
            }
           else if(target>nums[mid]){
            low=mid+1;
           }
           else{
            high=mid-1;
           }
        }
        return first;
    }

    public:
    int last_index(vector<int>& nums,int target){
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        int last=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
            last=mid;
            low=mid+1;
            }
           else if(target>nums[mid]){
            low=mid+1;
           }
           else{
            high=mid-1;
           }
        }
        return last;
    
    }

    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=first_index(nums,target);
        int last=last_index(nums,target);
        if(first==-1) return {-1,-1};
        else return {first,last};
    }
};