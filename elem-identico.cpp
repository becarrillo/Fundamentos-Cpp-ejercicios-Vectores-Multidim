#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> ages(n);
    for (int i=0; i < n; i++) {
        cin >> ages[i];
    }
    int count = 0;
    for (int j=0; j < n-1; j++) {
        if (ages[j] == ages[j-1]) count++;
    }
    
    cout << count << endl;
}