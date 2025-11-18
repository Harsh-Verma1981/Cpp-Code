/* default constructor */
#include<iostream>
using namespace std;

class constructor{
    public:
    // <<"This is a constructor\n";
    constructor(){
        cout<<"This is a constructor in a class\n";
    }
    ~constructor(){
        cout<<"This is a destructor in a class\n";
    }
};

int main(){
    // constructor c1;// no need to make any display func if data is in constructor
    
    return 0;
}

/* Parameterised constructor */
#include<iostream>
using namespace std;

class constructor{
    public:
    // <<"This is a constructor\n";
    int a,b;
    
    constructor(int x, int y){
        a = x;
        b = y;
        // cout<<"This is a constructor in a class\n";
        cout<<"X/: "<<x<<endl;
        cout<<"Y/: "<<y<<endl;
        cout<<"Sum: "<<x+y<<endl;
    }
};

int main(){
    int a,b;
    cout<<"Enter the values: ";
    cin>>a>>b;
    constructor c1(a, b);// no need to make any display func if data is in constructor
    
    return 0;
}



