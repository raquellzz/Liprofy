#include <iostream>
#include "knot.h"

void knot::knot(T value, knot *next)
{
    this->title = title;
    this->next = next;
}
void knot::set_value(T value)
{
    this->value = value;
}
void knot::set_next(knot *next)
{
    this->next = next;
}
T knot::get_value()
{
    return value;
}
knot *knot::get_next()
{
    return next;
}