#include <iostream>
#include "lib.h"
using namespace std;

int main() {
    int n=0;
    cout << "inserire la dimensione dell'array:" << endl;
    cin >> n;

    float A[n];
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    float risultato=max(A, n);
    cout << risultato;

    return 0;
}
