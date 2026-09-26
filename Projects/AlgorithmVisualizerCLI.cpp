#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void VectorOperations() {
    vector <int> v;
    int size;
    cout << "enter the size of array:";
    cin >> size;
    cout << "enter the elements:";
    for (int i =0; i<size; i++){
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    while (true){
        cout << "Vector Operations" << endl;
        cout << endl;
        cout << "1. Transverse" << endl;
        cout << "2. Find Maximum" << endl;
        cout << "3. Find Minimum" << endl;
        cout << "4. Reverse" << endl;
        cout << "5. Exit To Main Menu" << endl;
        int choice;
        cout << "Enter Your Choice:";
        cin >> choice;
        if (choice ==1){
            cout << "Starting traversal..." << endl;
            for (int i = 0; i < v.size(); i++) {
            cout << "Visiting index " << i << " -> " << v[i] << endl;
            }
        } else if (choice ==2){
            int max_val=v[0];
            cout << "Calculating Maximum"<< endl;
            for (int i=0; i<v.size();i++){
                if (v[i] > max_val) {
                cout << "Checking " << v[i] << " -> New maximum!" << endl;
                max_val = v[i];
                } else {
                cout << "Checking " << v[i] << " -> No change" << endl;
                }
            }
            cout << "Maximum = " << max_val << endl;
        } else if (choice ==3){
            int min_val=v[0];
            cout << "Calculating Minimum" << endl;
            for (int i=0; i<v.size();i++){
                if (v[i] < min_val) {
                    cout << "Checking " << v[i] << " -> New minimum!" << endl;
                    min_val = v[i];
                } else {
                    cout << "Checking " << v[i] << " -> No change" << endl;
                }
            }
            cout << "Minimum = " << min_val << endl;
        } else if (choice ==4){
            int start = 0, end = v.size() - 1;
            while (start < end) {
                cout << "Swapping " << v[start] << " and " << v[end] << endl;
                swap(v[start], v[end]);
                start++;
                end--;
            }
            cout << "Vector after reversal: ";
            for (int element : v) {
                cout << element << " ";
            }
            cout << endl;
        } else if(choice ==5) {
            cout << "Exiting...."<< endl;
            break;
        } else {
            cout << "invalid choice, Try Again" << endl;
        }
    }
}
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
        cout << "Enter Your Choice:";
        cin >> choice;
        if (choice ==1){
            cout << "Array Operations Selected" << endl;
            VectorOperations();
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
