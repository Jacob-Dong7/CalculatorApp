#ifndef CALCULATE_H
#define CALCULATE_H
#include <vector>
class Calculate {
    public:
    double calculate(std::vector<double> list);
    private:
    double tempX = 0, tempY = 0;
    double total = 0;


};
#endif