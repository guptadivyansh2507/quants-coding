#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  vector<int> nums = {1,3,5,7,9,11,13,15};
  int n = nums.size();
  int target = 13;
  int low = 0;
  int high = n-1;
  
  while(low <= high){
    int mid = (low + high)/2;
    if(nums[mid] == target){
      return mid;
    }
    if(target > nums[mid]){
      low = mid + 1;
    }
    if(target < nums[mid]){
      high = mid - 1;
    }
  }
  return -1;
}
