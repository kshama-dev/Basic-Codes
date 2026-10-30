#include <iostream>
using namespace std;
int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int flag = 0;
    for(int i = 0; i < 5; i++) {
        if(a[i] == target) {
            cout << "Target found at index " << i;
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        cout << "Target not found";
    }
    cout<< "\n";
}