#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1,2,3,4,5};
    int s = a.size();
    int k = 2;
    int i, j;
    i = 0;
    j = k - 1;
    while(i < j){
        swap(a[i], a[j]);
        i++;
        j--;
    }
    i = k;
    j = s - 1;
    while(i < j){
        swap(a[i], a[j]);
        i++;
        j--;
    }
    i = 0;
    j = s - 1;
    while(i < j){
        swap(a[i], a[j]);
        i++;
        j--;
    }

    for (int x = 0; x < s; x++) {
        cout << a[x] << " ";
    }
    cout << "\n";
}