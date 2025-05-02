#include<iostream> 
#include<conio2.h> 
using namespace std; 
#define row 10 
#define col 25 
int main(void) 
{ 
    static char names[row][col];
    int i,j,maxrow,maxcol; 
    char ch; 
    cout<<"Enter name of 10 students,press ESC to stop\n"; 
    i=0; 
    ch=1; 
    while(ch!=27) 
 {                          
  j=0; 
  cout<<"\n Enter name "<< i+1<<":"; 
  ch=getche(); 
  while((ch!=13)&&(ch!=27)) 
  {                      
   names[i][j]=ch; 
   j=j+1; 
   if(j==25) 
            { 
                cout<<"\n Too long name."; 
                i=i-1; 
                break; 
            } 
            ch=getche(); 
  }                       
        i=i+1; 
        if(i==10) 
        { 
            cout<<"\n No. of names exceeded"; 
            break; 
        } 
        cout<<"\nPress ESC to stop, any other key to continue."; 
    }                          
    maxrow=i; 
    cout<<endl<<endl; 
    for(i=0;i<maxrow;i++) 
    { 
        for(j=0;j<col;j++) 
  { 
   cout<<names[i][j]; 
  } 
        cout<<endl; 
    } 
 
    getch(); 
    return 0; 
} 
