#include "Pair.h"

using namespace std;

template<typename T>
Pair<T>::Pair(const T& firstValue, const T& secondValue)
{
    first = firstValue;
    second = secondValue;
}

template<typename T>
void Pair<T>::setFirst(const T& newValue)
{
    first = newValue;
}

template<typename T>
void Pair<T>::setSecond(const T& newValue)
{
    second = newValue;
}

template<typename T>
T Pair<T>::getFirst( ) const
{
    return first;
}

template<typename T>
T Pair<T>::getSecond( ) const
{
    return second;
}

template<typename T>
void Pair<T>::print() const
{
    cout << "(" << first << ", " << second << ")";
}