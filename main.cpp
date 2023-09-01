#include <iostream>
#include <vector>
#include <random>
#include <cassert>
#include "SortAlgortihms.h"
#include <ctime>

//Seed generator for random Integers
double rng() {
    static std::seed_seq seed{static_cast<long unsigned int>(time(nullptr))};
    static std::mt19937 mersenne_engine{seed};
    static std::uniform_real_distribution<double> dist(0.0, 10000.0);
    return dist(mersenne_engine);
}

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
