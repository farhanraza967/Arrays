#include <iostream>
using namespace std;
int main(){
int a = 5;
int* p = &a;
int** p2 = &p;

cout << *p << endl;
cout << **p2 << endl; //pointer of a pointer 

  return 0;
  
}
