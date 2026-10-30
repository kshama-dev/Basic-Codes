#include <iostream>
using namespace std;
int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int n = 5, k = 2;
    int i = 0, j = n - 1;
    while(i < j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    i = 0;
    j = k - 1;
    while(i < j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    i = k;
    j = n - 1;
    while(i < j) {
        swap(a[i], a[j]);
        i++;
        j--;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout<< "\n";
}