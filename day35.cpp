#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
class StudentSystem{
    private:
    vector<pair<string,int>> students;
    vector<vector<int>> marks;
    public:
    void AddStudent(string name, int roll){
        students.push_back({name, roll});
    }
    void PrintStudents(){
        cout << "\nStudents: \n";
        for(int i = 0; i < students.size(); i++){
            cout << students[i].first <<" " << students[i].second <<endl;
        }
    }
    void SortStudents(){
        sort(students.begin(), students.end());
        cout << "\nSorted Students:\n";
        PrintStudents();
    }
    void SwapStudents(int a, int b){
        swap(students[a],students[b]);
    }
    void SearchRoll(int target){
        vector<int> rolls;
        for(int i = 0; i < students.size(); i++){
            rolls.push_back(students[i].second);
        }
        sort(rolls.begin(),rolls.end());
        int low = 0;
        int high = rolls.size() - 1;
        while(low <= high){
            int mid = (low + high)/2;
            if(rolls[mid] == target){
                cout <<"\n Roll found!\n";
                return;
            }
            if(target > rolls[mid]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        cout << "roll not found\n";

    }
    void CreateMarksMatrix(){
        int rows = students.size();
        int cols = 3;
        marks.resize(rows, vector<int>(cols));
        cout << "\nEnter 3 marks for each studnet:\n";
        for(int i = 0; i < rows;i++){
            cout << students[i].first << ": ";
            for(int j = 0;j <cols;j++){
                cin >> marks[i][j];
            }
        }
    }
    void PrintMarks(){
        cout << "\nMarks Matrix: \n";
        for(int i = 0; i < marks.size(); i++){
            for(int j  = 0; j < marks[i].size();j++){
                cout << marks[i][j] << " ";
            }
            cout << endl;
        }
    }

    void Topper(){
        int bestStudent = 0;
        int bestMarks = 0;
        for(int i = 0; i < marks.size();i++){
            int sum = 0;
            for(int j = 0; j < marks[i].size();j++){
                sum+=marks[i][j];
            }
            if(sum > bestMarks){
                bestMarks = sum;
                bestStudent = i;
            }
        }
        cout << "\nTopper: " <<students[bestStudent].first << endl;
        cout << "total marks: " << bestMarks << endl; 
    }

    void Transpose(){
        int rows = marks.size();
        int cols = marks[0].size();
        vector<vector<int>> trans(cols,vector<int>(rows));
        for(int i = 0;i < rows;i++){
            for(int j = 0; j < cols; j++){
                trans[j][i] = marks[j][i];
            }
        }
        cout <<"\n Transpose:\n";
        for(int i = 0; i < trans.size();i++){
            for(int j = 0; j <trans[i].size();j++){
                cout << trans[i][j]<< " ";

            }
            cout << endl;
        }
    }
};

int main(){
    StudentSystem s;
    s.AddStudent("Rahul", 101);
    s.AddStudent("Deep", 102);
    s.AddStudent("Bhavya", 103);
    s.PrintStudents();
    s.SortStudents();
    s.SearchRoll(102);
    s.CreateMarksMatrix();
    s.PrintMarks();
    s.Topper();
    s.Transpose();
    return 0;
}
