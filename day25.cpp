class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = (int)numbers.size() - 1;
        while(left < right && left >= 0 && right <= numbers.size()){
            long long current_sum = (long long)numbers[left] + numbers[right];
            if(current_sum == target){
                return{left + 1 , right +1};
            }
            else if(current_sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return{};
    }
};
