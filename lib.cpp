#include "lib.h"
#include <iostream>
using namespace std;
float max(const float A[], int dimensione) {
    float massimo = A[0];

    for (int i = 1; i < dimensione; i++) {
       if(A[i]>massimo) {
           massimo=A[i];
       }
    }
    return massimo;
}
