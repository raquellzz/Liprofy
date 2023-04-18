#include <iostream>
#ifndef LIST
#define LIST

class list
{
private:
    knot *head;
    knot *tail;
public:
    void list(knot *head, knot *tail);
    void set_head(knot *head);
    void set_tail(knot *tail);
    knot *get_tail();
    knot *get_head();
};

#endif