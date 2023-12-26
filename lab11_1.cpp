#include<iostream>
#include<ctime>
using namespace std;
char grade[6]={'A', 'B', 'C', 'D', 'F', 'W'};

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get() ;
    cin.get() ;
    cin.get() ;
    srand(time(0));
    int x = rand() % 6;
    int y = rand() % 2 ;
    if (grade[x] == 'A' || grade[x] == 'F' || grade[x] == 'W')
        cout << "You will get " << grade[x] << " in this 261102.";
    else{
        if (y == 0)
            cout << "You will get " << grade[x] << "+ in this 261102.";
        else
            cout << "You will get " << grade[x] << " in this 261102.";
    }
}