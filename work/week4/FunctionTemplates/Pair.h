#ifndef PAIR_H
#define PAIR_H

#include <iostream>

template<typename T>
class Pair
{
public:
	Pair(const T&, const T&);

    void setFirst(const T&);
    void setSecond(const T&);

    T getFirst( ) const;
    T getSecond( ) const;

    void print() const;

	~Pair() {}

private:
    T first;
    T second;
};

#endif 