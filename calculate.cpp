#include "calculate.h"
#include <vector>
#include <iostream>

double Calculate::calculate(std::vector<double> list) {
    bool multAll = 0, divideAll = 0;
    total = 0;
    double mult;
    double divide;

    //This is a while function that checks if all the multiplication operators, denoted with -97 are completed in the vector.
    //If it detects a multiplication operator, it will multiply the number before and after it
    //then it will delete the 3 items (num1 x num2)
    //then it will insert the result of num1 x num2 into the position of num1.
    //the function below this does the same thing execept for division
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
                divide = static_cast<double>(list[i - 1]) / static_cast<double>(list[i + 1]);
                list.erase(list.begin() + i - 1, list.begin() + i + 2);
                list.insert(list.begin() + i - 1, divide);
                divideAll = 0;
                break;
            } else {
                divideAll = 1;
            }
        }
    }

    //This for loop function is used for the final calculation, since only addition and subtractions are left, we can go right to left.
    //Self explanatory, it basically checks if the current index is addition, denoted by -99 or subtraction denoted by -98. and it'll either add or subtract from the total
    //The total is set as the first element in the vector
    total = list[0];
    if (list.size() <= 1) return list[0]; 
    for (size_t i = 1; i < list.size(); ++i) {
        if (list[i] == -99) total += list[i + 1];
        if (list[i] == -98) total -= list[i + 1];
    }
    return total;
}