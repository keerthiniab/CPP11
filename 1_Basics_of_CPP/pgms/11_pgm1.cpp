//Automatic Type Inference (C++11)

#include<iostream>
#include<vector>
using namespace std;
int main() {
   vector<int> arr(10);
   for(auto it = arr.begin(); it != arr.end(); it ++) {
      cin >> *it;
   }
   return 0;
}