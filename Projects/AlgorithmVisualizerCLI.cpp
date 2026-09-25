#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <array>
using namespace std;
int main(){
    while (true){
        cout << "ALGORITHM VISUALIZER CLI" << endl;
        cout << endl;
        cout << "1. Array Operations" << endl;
        cout << "2. Searching" << endl;
        cout << "3. Stack" << endl;
        cout << "4. Queue" << endl;
        cout << "5. Complexity Information" << endl;
        cout << "6. Exit" << endl;
        int choice;
        cout << "Enter Your Choice:" << endl;
        cin >> choice;
        if (choice==1){
            cout << "Array Operations Selected" << endl;
        } else if (choice ==2){
            cout << "Searching Operations Selected" << endl;
        } else if (choice ==3){
            cout << "Stack Operations Selected" << endl;
        } else if (choice ==4){
            cout << "Queue Operations Selected" << endl;
        } else if (choice ==5){
            cout << "Complexity Information Selected" << endl;
        } else if (choice ==6){
            cout << "Exiting Program...." << endl;
            break;
        } else {
            cout << "invalid choice, Try Again" << endl;
        }
    } 
    return 0;
}