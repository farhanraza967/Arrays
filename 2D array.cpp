#include<iostream> 
using namespace std; 
#define row 5 
#define col 3 
int main(){ 
 int i,j; 
    float num[row][col]; 
 cout<<"Enter elements of array:"; 
    for(i=0;i<row;i++)  
    { 
        for(j=0;j<col;j++) 
        { 
      cout<<"\nEnter location "<<i<<","<<j<<":"; 
   cin>>num[i][j]; 
   } 
  } 
  cout<<"\n \n"; 
  for(i=0;i<row;i++)   
 { 
  for(j=0;j<col;j++) 
  { 
   cout<<"Location "<<i<<","<<j<<"=" 
   <<num[i][j]<<"\t"; 
  } 
  cout<<"\n"; 
 } 
    return 0; 
} 
