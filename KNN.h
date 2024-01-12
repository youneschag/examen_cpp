#ifndef KNN_H
#define KNN_H

#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

template<typename T>
class KNN {
public:
    KNN() : k(1) {}
    

    // fonction virtuelle pure
    virtual double similarityMeasure(const T& a, const T& b) const = 0;

protected:
    int k; //le nombre de proche voisin
};

#endif