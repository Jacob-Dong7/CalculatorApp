#include "calculate.h"
#include <vector>
#include <iostream>

double Calculate::calculate(std::vector<double> list) {
    bool multAll = 0;
    total = list[0];
    int mult;
    int divide;

    while (multAll == 0) {
        for (size_t i = 0; i < list.size(); ++i) {
            if (list[i] == -97) {
                mult = list[i - 1] * list[i + 1];
                list.erase(list.begin() + i - 1, list.begin() + i + 2);
                list.insert(list.begin() + i - 1, mult);
                multAll = 0;
                break;
            } else {
                multAll = 1;
            }
        }

    }
    for (size_t i = 0; i < list.size(); ++i) std::cout << list[i] << std::endl;
    for (size_t i = 1; i < list.size(); ++i) {
        if (list[i] == -99) total += list[i + 1];
        if (list[i] == -98) total -= list[i + 1];

        if (list[i] == -97) {

        }
    }
    return total;
}