#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> n={3,5,8,14,15,33};
    int s=n.size();
    int i=0;
    int j=s-1;
    int target=17;
    while(i<j){
        if(n[i]+n[j]==target){
            cout<<"Pair found: ("<<n[i]<<", "<<n[j]<<")\n";
            break;
        }
        else if(n[i]+n[j]<target){
            i++;
        }
        else{
            j--;
        }
    }
    if(i>=j){
        cout<<"No pair found\n";
    }
}