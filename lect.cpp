// Dynamic memory alloc...
// #include<iostream>
// using namespace std;

// int main(){
//     int a = 4;
//     int *ptr = &a;

//     cout<<*(ptr)<<endl;

//     // new operator!

//     int *p = new int(20);
//     cout<<*(p)<<endl;

//     int *arr = new int[5];
//     for(int i = 0;i < 5;i++){
//         cin >> arr[i];
//     }
    
//     for(int i = 0;i < 5;i++){
//         cout<<"the array is "<<arr[i]<<" ";
//     }
//     // delete operator
//     delete []arr;// to free up the memory allocation...

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int fibo(int n) {
//     // base condition
//     if (n == 0) {
//         return n;
//     }
//     if (n == 1) {
//         return n;
//     }
//     int frst = 0, sec = 1, thrd;
//     for (int i = 2; i <= n; i++) {
//         thrd = frst + sec;
//         frst = sec;
//         sec = thrd;
//     }
//     return sec;
// }

// int main() {
//     int n;
//     cin >> n;

//     // Create a dynamic array to store Fibonacci numbers
//     int* fibonacci = new int[n]; 

//     // Calculate Fibonacci numbers up to n
//     for (int i = 0; i < n; i++) {
//         fibonacci[i] = fibo(i);  // Store Fibonacci number for i-th term
//     }

//     // Print the Fibonacci numbers
//     for (int i = 0; i < n; i++) {
//         cout << fibonacci[i] <<" ";
//     }

//     // Deallocate memory
//     delete[] fibonacci;

//     return 0;
// }

// // sample output: 
// 10
// 1 2 3 4 5 6 7 8 9 10
// 10
// Output 1 :
// (1, 9)
// (2, 8)
// (3, 7)
// (4, 6)
// Input 2 :
// 10
// 1 2 3 4 5 6 7 8 9 10
// 100
// Output 2 :
// No pair
// Input 3 :
// 5
// 1 5 7 -1 5
// 6
// Output 3 :
// Pairs with the sum 6 are:
// Pair found: (5, 1)
// Pair found: (-1, 7)
// Pair found: (5, 1)

// #include<iostream>
// #include<iomanip>

// using namespace std;

// int main(){

//     int n;
//     cout<<"Size: ";
//     cin >> n;

//     int *arr = new int[n];

//     for(int i = 0;i < n;i++){
//         cin >> arr[i];
//     }

//     int sum;
//     cout<<"Enter the sum value to find: ";
//     cin >> sum;

//     for(int i = 0;i < n;i++){
//         for(int j = i + 1;j < n;j++){
//             if((arr[i] + arr[j]) == sum){
//                 cout<<"("<<arr[i]<<", "<<arr[j]<<")"<<endl;
//             }
//         }
//     }
    
//     return 0;
// }

// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <unordered_set>

// using namespace std;

// int main() {
//     int n;
//     cout << "Size: ";
//     cin >> n;

//     int *arr = new int[n];

//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int targetSum;
//     cout << "Enter the sum value to find: ";
//     cin >> targetSum;

//     bool foundPair = false; // Flag to check if any pair is found

//     // Using a nested loop to find pairs
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) { // Start j from i + 1 to avoid pairing the same elements
//             if ((arr[i] + arr[j]) == targetSum) {
//                 cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
//                 foundPair = true; // Set flag to true if a pair is found
//             }
//         }
//     }

//     if (!foundPair) {
//         cout << "No pair found!" << endl; // Print this only once if no pairs are found
//     }

//     delete[] arr; // Free allocated memory
//     return 0;
// }


/* Virtual destructor */
#include<iostream>
using namespace std;

class base{
    public:
    int *data;

    base(int size){
        data = new int[size];
    }
    ~base(){
        cout<<"Base data destructor is running!"<<endl;
        delete data;
    }
};

class derieve : public base{
    public:

    int *extra_data;
    
    derieve(int size, int extra_size) : base(size) { 
        extra_data = new int[extra_size];
    }

    ~derieve(){
        cout<<"Derieve class destructor is running"<<endl; 
        delete extra_data;
    }
};

int main(){

    base *b = new base(10);
    delete b;// to avoid memory leak

    derieve *d = new derieve(10, 10);
    delete d;// to avoid memory leak

    return 0;
}
