#include <iostream>
#include <vector>
using namespace std;
int main(){
vector<int> numbers(2); //vector with 2 uninitialized elements
numbers.push_back(50); //add 50 as an element to end of vector

cout << numbers.at(0) << endl; //first uninitialized element
cout << numbers.at(1) << endl; //second uninitialized element 
cout << numbers.at(2) << endl; //50 is the third element now
  
  return 0;  
}
