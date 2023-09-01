//
// Created by Caaaarl on 2023-09-01.
//

#ifndef TESTING_SORTALGORTIHMS_H
#define TESTING_SORTALGORTIHMS_H

#include <algorithm>

class insertion {
public:
    insertion() = default;

    template<typename It>
    void operator()(It first, It last){
        const auto begin = first;
        while(first != last) {
            auto ptr = first+1;
            while(ptr > begin && *(ptr-1) > *ptr) {
                std::swap(*(ptr-1), *ptr);
                ptr = ptr-1;
            }
            first++;
        }
    }
};


#endif //TESTING_SORTALGORTIHMS_H
