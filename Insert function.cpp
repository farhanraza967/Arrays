#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> numbers(2);
numbers.insert(numbers.begin()+1, 50); //add 50 to index 1
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl;
cout << numbers.at(2) << endl;

numbers.insert(numbers.begin(), 100); //add 100 to index 1
cout << numbers.at(0) << endl;
cout << numbers.at(1) << endl;
cout << numbers.at(2) << endl; //50 now becomes index 2
  
  return 0;
}
