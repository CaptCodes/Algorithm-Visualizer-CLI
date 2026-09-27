#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
using namespace std;
void vectorOperations() {
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
        cout << "1. Traverse" << endl;
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
void searchingOperations() {
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
        cout << "Linear Search Operations" << endl;
        cout << endl;
        cout << "1. Linear Search" << endl;
        cout << "2. Exit To Main Menu" << endl;
        int choice;
        cout << "Enter Your Choice:";
        cin >> choice;
        if (choice ==1){
            int target;
            cout << "Enter Value To Search:";
            cin >> target;
            bool found = false;
            for (int i=0; i<v.size(); i++){
                if (v[i]== target){
                    cout << "Found " << target << " at index " << i << "!" << endl;
                    found= true;
                    break;
                } else {
                    cout << target << " was not found at the index:" << i << endl;
                }
            }
            if (!found) {
                cout << target << " was not found in the vector." << endl;
            }
        } else if(choice ==2) {
            cout << "Exiting...."<< endl;
            break;
        } else {
            cout << "invalid choice, Try Again" << endl;
        }
    }
}
void stackOperations(){
    stack <int> s;
    while (true){
        cout << "Stack Operations" << endl;
        cout << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Top" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Exit To Main Menu" << endl;
        int choice;
        cout << "Enter Your Choice:";
        cin >> choice;
        if (choice ==1){
            int ele;
            cout << "Enter Element To Push : ";
            cin >> ele;
            s.push(ele);
            cout << ele << " pushed into the stack." << endl;
        } else if (choice ==2){
            if (s.empty()){
                cout << "stack is empty. Nothing to pop" << endl;
            } else {
                cout << "element popped out : " << s.top() << endl;
                s.pop();
            }
        } else if (choice ==3){
            if (s.empty()){
                cout << "stack is empty" << endl;
            } else {
                cout << "element at the top is : " << s.top() << endl;
            }
        } else if (choice ==4){
            if (s.empty()){
                cout << "stack is empty" << endl;
            } else {
                cout << "Stack is not empty" << endl;
            }
        } else if (choice ==5) {
            cout << "Exiting...."<< endl;
            break;
        } else {
            cout << "invalid choice, Try Again" << endl;
        }
    }
}
void queueOperations(){
    queue <int> q;
    while (true){
        cout << "Queue Operations" << endl;
        cout << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Front" << endl;
        cout << "4. Is Empty" << endl;
        cout << "5. Exit To Main Menu" << endl;
        int choice;
        cout << "Enter Your Choice:";
        cin >> choice;
        if (choice ==1){
            int ele;
            cout << "Enter Element To Queue : ";
            cin >> ele;
            q.push(ele);
            cout << ele << " Enqueued into the Queue." << endl;
        } else if (choice ==2){
            if (q.empty()){
                cout << "Queue is empty. Nothing to dequeue" << endl;
            } else {
                cout << "element dequeued out : " << q.front() << endl;
                q.pop();
            }
        } else if (choice ==3){
            if (q.empty()){
                cout << "queue is empty" << endl;
            } else {
                cout << "element at the front is : " << q.front() << endl;
            }
        } else if (choice ==4){
            if (q.empty()){
                cout << "Queue is empty" << endl;
            } else {
                cout << "Queue is not empty" << endl;
            }
        } else if (choice ==5) {
            cout << "Exiting...."<< endl;
            break;
        } else {
            cout << "invalid choice, Try Again" << endl;
        }
    }
}
void complexityInformation() {
    while (true) {
        cout << "Complexity Information" << endl;
        cout << endl;
        cout << "1. Vector Operations" << endl;
        cout << "2. Linear Search" << endl;
        cout << "3. Stack Operations" << endl;
        cout << "4. Queue Operations" << endl;
        cout << "5. Exit To Main Menu" << endl;
        int choice;
        cout << "Enter Your Choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Vector Operations" << endl;
            cout << "Traversal: Time O(n), Space O(1)" << endl;
            cout << "Maximum: Time O(n), Space O(1)" << endl;
            cout << "Minimum: Time O(n), Space O(1)" << endl;
            cout << "Reverse: Time O(n), Space O(1)" << endl;

        } else if (choice == 2) {
            cout << "Linear Search" << endl;
            cout << "Time Complexity: O(n)" << endl;
            cout << "Space Complexity: O(1)" << endl;

        } else if (choice == 3) {
            cout << "Stack Operations" << endl;
            cout << "Push: Time O(1), Space O(1)" << endl;
            cout << "Pop: Time O(1), Space O(1)" << endl;
            cout << "Top: Time O(1), Space O(1)" << endl;
            cout << "Is Empty: Time O(1), Space O(1)" << endl;

        } else if (choice == 4) {
            cout << "Queue Operations" << endl;
            cout << "Enqueue: Time O(1), Space O(1)" << endl;
            cout << "Dequeue: Time O(1), Space O(1)" << endl;
            cout << "Front: Time O(1), Space O(1)" << endl;
            cout << "Is Empty: Time O(1), Space O(1)" << endl;

        } else if (choice == 5) {
            cout << "Exiting...." << endl;
            break;

        } else {
            cout << "Invalid choice, Try Again" << endl;
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
            vectorOperations();
        } else if (choice ==2){
            cout << "Searching Operations Selected" << endl;
            searchingOperations();
        } else if (choice ==3){
            cout << "Stack Operations Selected" << endl;
            stackOperations();
        } else if (choice ==4){
            cout << "Queue Operations Selected" << endl;
            queueOperations();
        } else if (choice ==5){
            cout << "Complexity Information Selected" << endl;
            complexityInformation();
        } else if (choice ==6){
            cout << "Exiting Program...." << endl;
            break;
        } else {
            cout << "invalid choice, Try Again" << endl;
        }
    } 
    return 0;
}
