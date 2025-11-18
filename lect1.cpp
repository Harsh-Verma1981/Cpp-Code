// Exception Handling...
// by using try||throw||catch

// #include<iomanip>
// #include<iostream>

// using namespace std;

// int main(){

//     int a,b;
//     cout<<"Value of A: ";
//     cin>>a;

//     // cout<<"\n";

//     cout<<"Value od B: ";
//     cin >> b;

//     int x = a - b;
//     // it is use to avoid the run time error in the code....
//     try{
//         if(x != 0){
//             cout<<"Result of (a - b): "<<a - b<<endl;// try is use to find if the program has some bugs or not..
//         }
//         else{
//             throw(x);
//         }
//     }

//     catch(int i){
//         cout<<"Exception caught: "<<i<<endl;
//     }

//     cout<<"end of program!"<<endl;

//     return 0;

// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n; cin >> n; int sum = 0;

//     int *arr = new int[n];

//     for(int  i= 0;i < n;i++) {
//         cin >> arr[i];
//     }

//     try{
//         for(int i = 0;i < n;i++){
//             if(arr[i] < 0){
//                 throw arr[i];
//                 // sum += arr[i];
//             }
//             sum += arr[i];
//         }
//     }

//     catch(int i){
//         cout<<"Negative value is "<<i<<endl;
//     }
//     cout<<"Sum: "<<sum<<endl;

//     delete[] arr;
    
//     return 0;
// }

// #include<iostream>
// #include<iomanip>

// using namespace std;

// void test(int x){

//     try {
//         if(x == 1){
//             throw x;
//         }
//         else if(x == 0)
//         {
//             throw 'x';
//         }
//         else if(x == -1){
//             throw 1.0;
//         }
//         cout<<"End of try block"<<endl;
//     }

//     catch(int m){
//         cout<<"Caught a integer value"<<endl;
//     }

//     catch(char n){
//         cout<<"Caught a char value"<<endl;
//     }

//     catch(double d){
//         cout<<"Caught a double value!"<<endl;
//     }
//     cout<<"End of try-catch exception!"<<endl;
// }

// int main() {

//     cout<<"Testing multiple catches -> "<<endl;
    
//     cout<<"for X == 1"<<endl;
//     test(1);
    
//     cout<<"For X == 0"<<endl;
//     test(0);

//     cout<<"For X == -1"<<endl;
//     test(-1);
    
//     cout<<"For X == 2"<<endl;
//     test(2);

//     return 0;
// }

// #include<iostream>
// #include<unordered_map>
// #include<limits>
// using namespace std;

// void divide(double x, double y){
//     cout<<"Inside function..\n";

//     try{
//         if(y == 0.0){
//             throw y;
//         }
//         else{
//             cout<<"Division: "<<x / y<<endl;
//         }
//     }

//     catch(double){
//         cout<<"Caught double inside function\n";
//     }
//     cout<<"End of the function"<<endl;
// }

// int main(){

//     cout<<"Inside main...\n";
//     try{
//         divide(10.5, 2.0);
//         divide(2.4, 0.0);
//     }
//     catch(double){
//         cout<<"Caught double inside main\n";
//     }
//     cout<<"End of main!"<<endl;

//     return 0;
// }

// #include<iostream>
// #include<cstring>

// using namespace std;

// class error {
//     public:
//     int err_code;
//     char *err_desc;

//     error(int c,const char *d){
//         err_code = c;
//         err_desc = new char[strlen (d)];
//         strcpy(err_desc, d);
//     }

//     void display(void){
//         cout<<"Error Code: "<<err_code<<endl;
//         cout<<"Error Description: "<<err_desc<<endl;
//     }
// };

// int main(){

//     try{
//         cout<<"Objective exception"<<endl;
//         throw error(99, "Test exception");
//     }
//     catch(error &e){
//         cout<<"exception caught successfully"<<endl;
//         e.display();
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function called!" << endl;
    }
};

class Derived1 : public Base {
public:
    void showDerived1() {
        cout << "Derived1 class function called!" << endl;
    }
};

class Derived2 : public Base {
public:
    void showDerived2() {
        cout << "Derived2 class function called!" << endl;
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void showFinal() {
        cout << "FinalDerived class function called!" << endl;
    }
};

int main() {
    FinalDerived obj;

    // Resolving ambiguity for showBase()
    obj.Derived1::showBase(); 
    obj.Derived2::showBase();

    obj.showDerived1();
    obj.showDerived2();
    obj.showFinal();

    return 0;
}
