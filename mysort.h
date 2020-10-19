#ifndef MY_SORT_H
#define MY_SORT_H

#include <vector>
using namespace std;

template<typename T>
void myQuickSort(vector<T>& v, size_t begin, size_t end) {
    if(begin < end) {
        T temp = v[begin];
        size_t i = begin, j = end;
        while(i < j) {
            while(v[j] > temp && i < j) j--;
            if (i < j) v[i] = v[j];
            while(v[i] <= temp && i < j) i++;
            if (i < j) v[j] = v[i];
        }
        v[i] = temp;
        myQuickSort(v, begin, i - 1);
        myQuickSort(v, i + 1, end);
    }
};

#endif