// #include<vector>
// #include<iostream>
// #include<algorithm>

// using namespace std;

// int main() {
//     int n;
//     cout<<"Size of vector: ";  cin >> n;

//     vector<int> v;

//     for(int i = 0;i < n;i++){
//         int value;
//         cin >>  value;
//         v.push_back(value);
//     }

//     sort(v.begin(), v.end());// to sort the elements of vectors...

//     // v.pop_back();
//     v.erase(v.begin() + 2);

    
//     for(int i = 0;i < n;i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     return 0;
// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){

//     vector<int> v1(10);

//     cout<<v1.size()<<endl;

//     for(int i=0;i<=9;i++){
//         v1[i] = i;
//     }
//     for(int i=10;i<=19;i++){
//         v1.push_back(i);
//     }
//     for(int i=0;i<=19;i++){
//         cout<<v1[i]<<" ";
//         if(i < 20-1){
//             cout<<"-->";
//         }
//     }
//     cout<<endl;

//     v1.pop_back();
//     v1.pop_back();

//     vector<int> ::iterator v = v1.begin();
//     while(v != v1.end()){
//         cout<<"The value of v: "<<*v<<endl;
//         v++;
//     }

//     return 0;
// }

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    int m, n;
    cin >> m >> n;
    // int val;
    vector<int> v1(m);
    vector<int> v2(n);

    for(int i=0;i<m;i++){
        cin >> v1[i];
        // v1.push_back(v1[i]);
    }
    for(int j=0;j<n;j++){
        
        cin >> v2[j];
        // v2.push_back(v2[j]);
    }

    vector<int> res = v1;
    res.insert(res.end(), v2.begin(), v2.end());

    sort(res.begin(), res.end());
    
    for(int i = 0;i < res.size();i++){
        cout<<res[i]<<" ";
    }

    return 0;
}