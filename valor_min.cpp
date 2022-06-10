#include <iostream>
#include <vector>
using namespace std;    // VALOR MÍNIMO DE UN VECTOR

int main() {
    int n;
    cin >> n;
    vector<int> voice(n);
    for (int i=0; i < n; i++) { // Rellenamos el vector
        cin >> voice[i];
    }
    int min = voice[0]; // Suponemos valor mínimo en la posición 0
    
    for (int j = 0; j < n; j++) {   // Recorremos vector y dejamos en variable min
        int last = voice[j];       // el valor mínimo del vector
        if (last < min) {
            min = last;
        }

        cout << "El valor mínimo del vector es" << ' ' << last << endl;
    }
}