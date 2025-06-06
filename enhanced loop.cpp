#include <iostream>
using namespace std;
int main(){
  // use to print all values of an array in one loop
string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", "Fred", "Grace", "Henry", "Ian", "Jen"};
for (string i : friends){
  cout << "he is " <<i << endl;
}
  return 0;
}
