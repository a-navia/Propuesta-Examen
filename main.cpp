//
// Created by navia on 29-Oct-24.
//
#include "PropExam/triplePitagorico.h"
#include <iostream>

int main() {
    auto triples = triple_pitagorico();
    for (const auto& triple : triples) {
        std::cout << triple[0] << " - " << triple[1] << " - " << triple[2] << std::endl;
    }
    return 0;
}