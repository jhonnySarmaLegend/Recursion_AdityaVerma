// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

//1 2 3 4 5 6 7 8 
void rec(int n){
    if(n==0)return;
    rec(n-1);
    cout<<n<<" ";
}

//8 7 6 5 4 3 2 1
void revRec(int n){
    if(n==0)return;
    cout<<n<<" ";
    revRec(n-1);
}

int main() {
    rec(8);// 1 to 8
    cout<<"\n";
    revRec(8);// 8 to 1
    return 0;
}
