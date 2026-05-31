
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  vector<int> nums = {8 , 3 , 1, 7, 4};
  sort(nums.begin(), nums.end());
  for(int i = 0; i < 5; i++){
    cout << nums[i] << endl;
  }
  cout <<"----------"<< endl;
  cout << nums[0] << endl;
  cout << nums[4] << endl;
}



#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
  vector<int> num = {1 , 3, 4,5, 6, 7,3 };
  bool containsduplicate = false;
  sort(num.begin(), num.end());
  for(int i = 0; i < num.size() - 1; i++){
    if(num[i] == num[i+1]){
      containsduplicate = true;
      break;
    }
  }
  cout << containsduplicate;
}
