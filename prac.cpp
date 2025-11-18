// #include<iostream>
// using namespace std;

// int main(){
    
//     int *p;// void pointer store in stack
//     p = new int();
//     p = new int(5);
//     p = new int[50]; // store in heap
//     if(p == NULL){
//         cout<<"memory is not allocated!"<<endl; 
//         return 0;
//     }

//     *(p+0) = 10;
//     *(p+1) = 20;
//     *(p+2) = 30;
//     *(p+3) = 40;
//     *(p+4) = 50;

//     cout<<*(p+1)<<" "<<*(p+2);
//     // cin>>*(p+3);
//     delete []p;

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int *p = new int[5];
//     *p = 10;
//     *(p+1) = 20;
//     *(p+2) = 30;
//     *(p+3) = 40;
//     *(p+4) = 50;

//     cout<<*p<<" "<<*(p+1)<<" "<<*(p+2)<<" "<<*(p+2)<<" "<<*(p+3)<<" "<<*(p+4)<<endl;

//     delete []p;
    
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void geteven(int arr[], int n){

//     cout<<"List of even values: ";
    
//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 == 0){
//             cout<<arr[i]<<" ";
//         }
//     }
//     // return;
// }
// void getodd(int arr[], int n){

//     cout<<"List of odd values: ";

//     for(int i=0;i<n;i++){
//         if(arr[i] % 2 != 0){
//             cout<<arr[i]<<" ";
//         }
//     }
// }
// int main(){
//     int n;
//     cout<<"Size: ";
//     cin>>n;

//     int arr[n];

//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     geteven(arr, n);
//     cout<<endl;
//     getodd(arr, n);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int n,i;
//     int a=0,b=0;

//     cout<<"Enter the size: ";
//     cin>>n;

//     if(n<0){

//         cout<<"n must be greater than 0"<<endl;
//         return 0;
//     }
    
//     int *p, *e, *o;
    
//     p = new int[n];
//     e = new int[100];
//     o = new int[100];

//     for(int i=0;i<n;i++){
//         cin>>*(p+i);
//     }

//     for(int i=0;i<n;i++){
//         if(p[i] % 2 == 0){
//             e[a++] = p[i];
//         }
//         else{
//             o[b++] = p[i];
//         }
//     }
//     cout<<"The odd no: ";
//     for(int i=0;i<b;i++){
//         cout<<o[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"The even no: ";
//     for(int i=0;i<a;i++){
//         cout<<e[i]<<" ";
//     }
//     return 0;

// }

/* sample ques */

// #include<iostream>
// using namespace std;
// int main(){
//     int *sum=new int(0);

//     int num;
//     cin>>num;
//     while(num>=0){
//         cout<<num<<" ";
//         *sum= *sum +num;
//         cin>>num;
//     }

//     cout<<endl;
//     cout<<*sum;
//     delete []sum;
    
//     return 0;

// }

/* dangling pointer */

// #include<iostream>
// using namespace std;

// class Array{
//     int *dangptr;
//     int size;
//     public:
//     void getdata(int n){
//         size = n;
//         dangptr = new int[size];
//         // cout<<"Enter the elements: ";
//         for(int i=0;i<size;i++){
//             cout<<"Enter the elements: ";
//             cin>>dangptr[i];
//         } 
//     }
//     void get_sum(){
//         int sum = 0;
//         for(int i=0;i<size;i++){
//             sum += dangptr[i];
//         }
//         cout<<"Sum: "<<sum<<endl;
//     }
//     void display(){
//         for(int i=0;i<size;i++){
//             cout<<"\t"<<dangptr[i]<<" ";
//         }
//         cout<<endl;
//     }
//     ~Array(){
//         delete []dangptr;
//         cout<<"Memory deallocated";
//     }
// };

// int main(){

//     Array a;
    
//     a.getdata(6);
//     a.get_sum();
//     a.display();

//     return 0;
// }

// practice problem 
// #include<iostream>
// #include<string>
// using namespace std;

// class Student{
//     public:
//     int rollno;
//     string name;
//     float marks;

//     void getdata(){
//         cout<<"Rollno: ";
//         cin>>rollno;
        
//         cin.ignore(); // to ignore the space given in string and to avoid the clash
//         cout<<"Name: ";
//         getline(cin, name);
        
//         cout<<"marks: ";
//         cin>>marks;
//     }
//     void putdata(){
//         cout<<"Rollno: "<<rollno<<endl;
//         cout<<"Name: "<<name<<endl;
//         cout<<"Marks: "<<marks<<endl;
//     }
// };
// int main(){
    
//     Student *p; // ptr to store the address of obj made by new student
//     p = new Student; // it create the new object dynamically

//     // calling func with p ptr which stored the address of object or instance 

//     p->getdata();
//     p->putdata();


//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    int rollno;
    string name;
    float marks;

    void getdata(){
        cout<<"Rollno: ";
        cin>>rollno;
        
        cin.ignore(); // to ignore the space given in string and to avoid the clash
        cout<<"Name: ";
        getline(cin, name);
        
        cout<<"marks: ";
        cin>>marks;
    }
    void putdata(){
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
int main(){
    
    int n; cout<<"Enter the no of objects: "; cin>>n;
    Student *p = new Student[n]; // ptr to store the address of obj made by new student and 4 is no of objects

    // this loop is giong to getdata of 4 objects

    for(int i=0;i<n;i++){
        p->getdata();
    }

    // this loop is giong to putdata of 4 objects
    
    for(int i=0;i<n;i++){
        p->putdata();
    }

    return 0;
}