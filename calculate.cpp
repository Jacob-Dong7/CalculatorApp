#include "calculate.h"
#include <vector>
#include <iostream>

double Calculate::calculate(std::vector<double> list) {
    bool multAll = 0, divideAll = 0;
    total = 0;
    double mult;
    double divide;

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

    while (divideAll == 0) {
        for (size_t i = 0; i < list.size(); ++i) {
            if (list[i] == -96) {
                std::cout << list[i - 1] << " / " << list[i + 1] << std::endl;
                divide = static_cast<double>(list[i - 1]) / static_cast<double>(list[i + 1]);
                std::cout << divide << std::endl;
                list.erase(list.begin() + i - 1, list.begin() + i + 2);
                list.insert(list.begin() + i - 1, divide);
                divideAll = 0;
                break;
            } else {
                divideAll = 1;
            }
        }
    }

    std::cout << "loop:" << std::endl;
    for (size_t i = 0; i < list.size(); ++i) std::cout << list[i] << std::endl;

    total = list[0];
    if (list.size() <= 1) return list[0];
    for (size_t i = 1; i < list.size(); ++i) {
        if (list[i] == -99) total += list[i + 1];
        if (list[i] == -98) total -= list[i + 1];

        if (list[i] == -97) {

        }
    }
    return total;
}