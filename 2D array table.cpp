#include<iostream>
using namespace std;
int main(){
string names[3][2];
names[0][1] = "First name";
names[0][0] = "Last name";
names[2][0] = "Man";
names[1][1] = "Peter";
names[1][0] = "Parker";
names[2][1] = "Spider";

int row = sizeof(names) / sizeof(names[0]);
int col = sizeof(names[0]) / sizeof(string);

for (int i = 0; i < row; i++) {
  for (int j = 0; j < col; j++) {
    if (j == col - 1) {
      cout << names[i][j] << endl;
    }
    else {
      cout << names[i][j] << " ";
    }
  }
}
return 0;
}
