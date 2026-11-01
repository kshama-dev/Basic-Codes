#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> n = {3, 5, 8, 14, 15, 33};
    int s=6;
    int target = 17;
    for (int i=0;i<s;i++){
        for (int j=i+1;j<s;j++){
            if (n[i]+n[j]==target){
                cout<<"Pair found: ("<<n[i]<<", "<<n[j]<<")\n";
                break;
            }
        }
    }
}