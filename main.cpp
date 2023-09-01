#include <iostream>
#include <vector>
#include <random>
#include <cassert>
#include "SortAlgortihms.h"
#include "time.h"

/**
 * Welcome to branch 1
 *
 */

int main() {
    std::cout << "Hello, World!" << std::endl;

    //Creating and filling a vector with 1000 random Integers and sorting them using insertion sort
    insertion insertion;
    std::vector<double> data;
    data.resize(1000);
    std::cout << *data.begin() << " " << *data.end() << "\n";
    insertion(data.begin(), data.end());
    assert(std::is_sorted(data.begin(),data.end()));
    std::cout << *data.begin() << " " << *data.end();

    return 0;
}
