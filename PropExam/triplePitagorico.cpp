//
// Created by navia on 29-Oct-24.
//
#include <iostream>
#include <cmath>
#include "triplePitagorico.h"
void triple_pitagorico(int i, int j, int k) {
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 3; b++) {
            int c = static_cast<int>(sqrt(pow(a, 2) + pow(b, 2)));
//verificar si el triple es pitagorico
            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                    std::cout << "el triple (" << a << "  " << b << "  " << c << ") cumple la condicion" << std::endl;

            }
        }
    }
}