#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> n={3,5,15,8,14,33};
    int s=n.size();
    for(int i=s-1;i>=0;i--){
        cout<<n[i]<<" ";
    }
    cout<<"\n";
}