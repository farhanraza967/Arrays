#include <iostream>
using namespace std;
int main(){
string letters[] = {"A", "B", "C", "D", "E"};
int elements = sizeof(letters) / sizeof(letters[0]); 
for (int i = elements - 1; i >= 0; i--) {
  cout << letters[i] << endl;
}
  return 0;
}
