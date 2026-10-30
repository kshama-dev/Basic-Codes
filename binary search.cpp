#include <iostream>
using namespace std;
int main() {
    int a[8] = {2, 4, 7, 8, 9, 11, 12, 20};
    int target = 20;
    int low = 0;
    int high = 7;
    int flag = 0;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(a[mid] == target) {
            cout << "Target found at index " << mid;
            flag = 1;
            break;
        }
        else if(a[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if(flag == 0) {
        cout << "Target not found";
    }
    cout<<"\n";
}