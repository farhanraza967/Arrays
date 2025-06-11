#include <iostream>
using namespace std;
#define row 10
#define col 25
int main(){
    char names[row][col] = {}; 
    int i = 0, j = 0;
    char ch;
    cout << "Enter name of 10 students, press ESC to stop\n";
    while (i < row) {
        j = 0;
        cout << "\nEnter name " << i + 1 << ": ";
        
        while (true) {
            ch = cin.get();  

            if (ch == 27) {  
                goto print_names;
            } else if (ch == '\n') {  
                break;
            } else {
                if (j < col - 1) {
                    names[i][j++] = ch;
                } else {
                    cout << "\nToo long name.";
                    break;
                }
            }
        }

        i++;
        if (i == row) {
            cout << "\nNo. of names exceeded.";
            break;
        }

        cout << "Press ESC to stop, ENTER to continue...\n";
    }
    cout << "\n\nEntered Names:\n";
    for (int k = 0; k < i; ++k) {
        cout << k + 1 << ". ";
        for (int l = 0; l < col && names[k][l] != '\0'; ++l) {
            cout << names[k][l];
        }
        cout << endl;
    }

    cout << "\nPress ENTER to exit...";
    cin.ignore();  
    cin.get();     

    return 0;
}
