#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> numbers;
  numbers.push_back(5);
  numbers.push_back(10);
  numbers.push_back(15);
  for(int i = 0; i < numbers.size(); i++){
    cout << numbers[i] << endl;
  }
}



#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> nums;
  cout << nums.capacity() << endl;
  nums.push_back(1);
  cout << nums.capacity() << endl;
  nums.push_back(2);
  cout << nums.capacity() << endl;
  nums.push_back(3);
  cout << nums.capacity() << endl;
}



#include <iostream>
#include <vector> 
using namespace std;
class Player{
  public:
  int health;
  Player(int h):health(h){}
}; 
int main(){
  vector<Player> players;
  players.push_back(Player(100));
  players.push_back(Player(50));
  cout << players[0].health;
}



#include <iostream>
#include <vector> 
using namespace std;
int main(){
  vector<string> names;
  names.push_back("rahul");
  names.push_back("deep");
  names.push_back("zigyash");
  names.push_back("bhavya");
  names.push_back("gaurav");
  for(int i = 0; i < names.size() ; i++){
    cout << names[i] << endl;
  }
  cout << "-----------------------" << endl;
  names.pop_back();
  for(int i = 0; i < names.size() ; i++){
    cout << names[i] << endl;
  }
}

#include <iostream>
#include <vector> 
using namespace std;
int main(){
  vector<int> nums;
  nums.reserve(5);
  nums.push_back(1);
  nums.push_back(2);
  nums.push_back(3);
  cout << nums.capacity();
}



#include <iostream>
#include <vector> 
using namespace std;
class Player{
  private:
  string name;
  public:
  Player(const string& n) : name(n){
    cout << "Created" << endl;
  }
};
int main(){
  vector<Player> players;
  players.reserve(2);
  players.emplace_back("Rahul");
  players.emplace_back("Deep");
}
