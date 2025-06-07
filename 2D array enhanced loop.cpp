#include <iostream>
using namespace std;
int main(){
int digits[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
for (auto &i : digits){
  for (int j : i) {
    if ((j == 3) | (j == 6) | (j == 9)) {
      cout << j << endl;
    }
    else {
      cout << j << " ";
    }
  }
}
  return 0;
}
