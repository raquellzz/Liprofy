#include <iostream>
#include "list.h"

void list::list(knot *head, knot *tail)
{
    this->head = head;
    this->tail = tail;
}
void list::set_head(knot *head)
{
    this->head = head;
}
void list::set_tail(knot *tail)
{
    this->tail = tail;
}
knot *list::get_tail()
{
    return tail;
}
knot *list::get_head()
{
    return head;
}