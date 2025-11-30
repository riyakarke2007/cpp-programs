//Triangle pattern with stars.
#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i+1;j++){ // dont write j<=i+1, if j=1
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}