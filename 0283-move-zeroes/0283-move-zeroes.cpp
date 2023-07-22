// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
        
//         int j = -1;
//         int n = nums.size();
//         for(int i = 0;i<n;i++){
//             if(nums[i] == 0){
//                 j = i;
//                 break;
//             }
//         }
        
//         if(j == -1){
//             for(int i = 0;i<n;i++){
//             cout<<nums[i];
//         }
            
//         }
//         for(int i = j+1;i<n;i++){
//             if(nums[i] != 0){
//                 swap(nums[i],nums[j]);
//                 j++;
//             }
//         }
        
//         for(int i = 0;i<n;i++){
//             cout<<nums[i];
//         }
        
//     }
// };

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[count]);
                count++;
            }
        }
        
    }
};