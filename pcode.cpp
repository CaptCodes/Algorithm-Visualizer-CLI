#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int main() {

    // double price = 8.09;
    // float new1 = price;
    // cout << typeid(new1).name();
    //    double price;
    //    cout << "what is the price?";
    //    cin >> price;
    //    cout << "your age is : " << price ;
    // int a;
    // int b;
    // cout << "enter value of a:";
    // cin >> a;
    // cout << "enter value of b:";
    // cin >> b;
    // int sum =a+b;
    // int sub =a-b;
    // int div =a/b;
    // int mul =a*b;
    // int mod =a%b;
    // cout << sum << endl << sub << endl << div << endl << mul << endl << mod;
    // char ch;
    // cout << "enter ch:";
    // cin >> ch;
    // if (ch>= 'a' && ch<= 'z'){
    //     cout<< ("it is lowercase");
    // } else {
    //     cout << "it is uppercase";
    // }
    // int k=18;
    // cout << (k>= 0 ? "positive" : "negative");
    // int n=10;
    // int i=1;
    // while (i<=n){
    //     cout << i << " ";
    //     i++;
    // }
    // int n=10;
    // for (int i = 1; i<=n; i++){
    //     cout << i << " ";
    // // }
    // int n= 10;
    // int sum = 0; 
    // for (int i = 1; i<=n; i++){
    //     sum = sum + i ;
    // }
    // cout << sum;
    // int n = 10;
    // for(int i=1; i <= n; i++) { 
    //     int m = 10;
    //     for (int j=1; j <= m; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // int n=3;
    // char ch= 'A';
    // for (int i=0; i<n; i++){
    //     for (int j =0; j<n; j++){
    //         cout << ch;
    //         ch=ch+1;
    //     }
    //     cout << endl;
    // }
    // int n=5;
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=i+1; j++){
    //         cout << j;
    //     }
    //     for(int j=i; j>0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
//     return 0;
// }
// int large(int a, int b, int c, int d, int e){
//     int max=a;
//     if (b> max){
//         max=b;
//     } if (c> max){
//         max=c;
//     } if (d> max){
//         max=d;
//     } if (e> max){
//         max=e;
//     }
//     return max;
// }
// int small(int a, int b, int c, int d, int e){
//     int min=a;
//     if (b< min){
//         min=b;
//     } if (c< min){
//         min=c;
//     } if (d< min){
//         min=d;
//     } if (e< min){
//         min=e;
//     }
//     return min;
// }
// int main(){
//     int a,b,c,d,e;
//     cin >> a >> b >> c >> d >> e;
//     int maximum= large(a,b,c,d,e);
//     int minimum = small (a,b,c,d,e);
//     int diff= maximum - minimum;
//     cout << "largest:" << maximum << endl;
//     cout << "smallest:" << minimum << endl;
//     cout << "Difference:" << diff << endl;
//     return 0;
// }
// int main(){
//     int size=5;
//     int ar[]={7,10,18,45,93};
//     int largest= INT_MIN;
//     int smallest= INT_MAX;
//     int a=0;
//     int b=0;
//     for(int i=0; i<size; i++){
//         if (smallest>min(ar[i], smallest)){
//             smallest=ar[i];
//             a = i;
//         }
//         if (largest<max(ar[i], largest)){
//             largest=ar[i];
//             b=i;
//         }
//     }
//     cout << a << endl;
//     cout << b << endl;
//}
// void reverseArray(int arr[], int sz) {
//     int start = 0, end = sz - 1;
//     while (start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7};
//     int sz = 7;

//     reverseArray(arr, sz);

//     for (int i = 0; i < sz; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
//}
// int main(){
//     vector <int> vec= {1,2,3,4,5};
//     for (int val : vec){
//         cout << val << endl;
//     } 
// }
// int main(){
//     int size;
//     cin >> size;
//     vector<int> arr;
//     for(int j=0; j<size ;j++){
//         int a;
//         cin >> a;
//         arr.push_back(a);
//     }
//     int largest= INT_MIN;
//     int smallest = INT_MAX;
//     int a=0;
//     int b=0;
//     int c;
//     for(int i=0; i<size; i++){
//         if (smallest>min(arr[i], smallest)){
//             smallest=arr[i];
//             a = i;
//         }
//         if (largest<max(arr[i], largest)){
//             largest=arr[i];
//             b=i;
//         }
//     }
//     int *p= &arr[a];
//     int *q= &arr[b];
//     c=*p;
//     *p=*q;
//     *q=c;
//     for (int k=0; k<size; k++){
//         cout << arr[k] << " ";
//     }
// }
