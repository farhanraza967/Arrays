#include <iostream>
using namespace std;
int main(){
string friends[] = {"Alan", "Bob", "Carol", "David", "Ellen", "Fred", "Grace", "Henry", "Ian", "Jen"};

cout << sizeof(friends) / sizeof(friends[0]) << endl; // number of bytes of whole array / number of bytes of single elements  
  
  return 0;
  
}
