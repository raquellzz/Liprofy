#include <iostream>
#ifndef KNOT
#define KNOT

template <typename T>
class knot
{
private:
    T value;
    knot *next;
public:
    void knot(T value, knot *next);
    void set_value(T value);
    void set_next(knot *next);
    T get_value();
    knot *get_next();
};

#endif