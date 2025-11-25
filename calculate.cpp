#include "calculate.h"
#include <vector>
#include <iostream>

double Calculate::calculate(std::vector<double> list) {
    bool solved = 0;
    total = list[0];


    for (size_t i = 1; i < list.size(); ++i) {
        std::cout << list[i] << std::endl;
        if (list[i] == -99) total += list[i + 1];
        if (list[i] == -98) total -= list[i + 1];

        if (list[i] == -97) {

        }
    }
    return total;
}