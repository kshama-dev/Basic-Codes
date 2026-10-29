# include <iostream>
#include <vector>
using namespace std;
int main(){
    int sum=0;
    vector<int> n={3,5,15,8,14,33};
    int s=n.size();
    for(int i=0;i<s;i++){
        sum+=n[i];
    }
    cout<<sum<<"\n";
}