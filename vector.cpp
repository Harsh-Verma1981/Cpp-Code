// //vectors and pairs

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec;
    int n,val; // for size and value
    cin>>n;
    // for storing the element in dynamic array

    for(int i=0;i<n;i++){
        cout<<"Val "<<i+1<<": ";
        cin>>val;
        vec.push_back(val); // push back keyword use to insert val at end 
    }
    
    cout<<"The following Array : "<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    return 0;
}

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    
    for(char value : vec){
        cout<<value<<endl; // for ecah loop
    }
    return 0;
}

// vector build func for operations

#include<iostream>
#include<vector>
// size func
using namespace std;

int main(){

    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    
    cout<<"Size: "<<vec.size()<<endl; // to get the size of vector

    for(char value : vec){
        cout<<value<<endl; // for ecah loop
    }
    return 0;
}

// push and pop the element in last index in vector

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec ;
    int size; cout<<"Size is "; cin>>size;

    for(int i=0;i<size;i++){
        int val; cin>>val;
        vec.push_back(val);//push the last value insrt at end
    }
    cout<<"The Result is ";
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }
    vec.pop_back(); // pop the last value delete at end
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    return 0;
}

// to get the front value in array

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec ;
    int size; cout<<"Size is "; cin>>size;

    for(int i=0;i<size;i++){
        int val; cin>>val;
        vec.push_back(val);//push the last value insrt at end
    }
    cout<<"The Result is ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<vec.front()<<endl;

    return 0;
}

// to get the value at special index

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> vec ;
    int size; cout<<"Size is "; cin>>size;

    for(int i=0;i<size;i++){
        int val; cin>>val;
        vec.push_back(val);//push the last value insrt at end
    }
    cout<<"The Result is ";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    int indx;
    cout<<"index to be find in array: "<<endl;
    cin>>indx;

    cout<<vec.at(indx)<<endl;

    return 0;
}

/* LeetCode problem */
// to find the unique value in vector && to sort in vector too

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
// func to find unique element in Vector
int Singlenum(vector<int> &vec){
    int store = 0;
    for(int i=0;i<vec.size();i++){
        store = store ^ vec[i];
    }
    return store;
}

int main(){

    vector<int> vec ;
    int size; cout<<"Size is "; cin>>size;

    for(int i=0;i<size;i++){
        int val; cin>>val;
        vec.push_back(val);//push the last value insrt at end
    }

    cout<<"The Result is ";

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    cout<<endl;
    cout<<Singlenum(vec);
    cout<<endl;

    sort(vec.begin(), vec.end());

    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }

    return 0;
}