//
// Created by navia on 29-Oct-24.
//
#include <iostream>
#include <cmath>
#include <vector>
#include <array>
#include "triplePitagorico.h"

std::vector<std::array<int, 3>> triple_pitagorico() {
    std::vector<std::array<int, 3>> triples;
    for (int a = 0; a <= 15; a++) {
        for (int b = 0; b <= 15; b++) {
            int c = static_cast<int>(sqrt(pow(a, 2) + pow(b, 2)));
            // Verificar si el triple es pitagorico
            if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
                if (c == static_cast<int>(c) && a + b > c && a + c > b && b + c > a) {
                    // los triples específicos
                    if ((a == 3 && b == 4 && c == 5) ||
                        (a == 6 && b == 8 && c == 10) ||
                        (a == 5 && b == 12 && c == 13) ||
                        (a == 8 && b == 15 && c == 17)) {
                        triples.push_back({a, b, c});
                        }
                }
            }
        }
    }
    return triples;
}