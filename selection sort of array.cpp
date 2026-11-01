#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> n = {3,5,2,15,8};
    int s = n.size();
    for (int i = 0; i < s - 1; i++) {
        int m=i;
        for (int j = i + 1; j < s; j++) {
            if (n[j] < n[m]) {
                m = j;
            }
        }
        swap(n[i], n[m]);
    }
    for (int i = 0; i < s; i++) {
        cout << n[i] << " ";
    }
}