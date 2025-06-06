#include <iostream>
using namespace std;
int main(){
  
string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", "Fred", "Grace", "Henry", "Ian", "Jen"};
for (int i = 0; i < sizeof(friends) / sizeof(friends[0]); i++) {
  cout << "Element at " <<i<<" is "<< friends[i] << endl;
}
  
  return 0;
  
}
