#include<iostream> 
using namespace std; 
 
#define LIM 10 
 
int main(){ 
    float num[LIM]; 
    int index_count;
    for(index_count=0;index_count<LIM;index_count++) 
    { 
        num[index_count]=(index_count+1)*2; 
    }  
    for(index_count=0;index_count<LIM;index_count++) 
    { 
        cout<<"\nElement no."<<index_count<<" = "<<num[index_count]; 
    }  
    return 0; 
} 
