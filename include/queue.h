//
// Created by Vlad on 02/07/2020.
//

#include <iostream>

#pragma once
#ifndef UNTITLED_QUEUE_H
#define UNTITLED_QUEUE_H

#ifndef DEFAULT_MAX_QUEUE_SIZE
    #define DEFAULT_MAX_QUEUE_SIZE INT16_MAX
#endif

void f1();

class queue {
private:
    int v[DEFAULT_MAX_QUEUE_SIZE];
    int ic = 0, sc = -1;
public:
    queue();
    queue(const queue&);
    queue(int *v, int length);

    void push(int);
    void pop();
    int top();
    bool isEmpty();
    void print();

    inline int length() { return sc - ic + 1; }
    inline int getStartOfQueue() { return ic; }
    inline int getEndOfQueue() { return sc; }

    friend queue operator+ (queue, queue);

    friend std::ostream& operator << (std::ostream& f, const queue &);
};

#endif //UNTITLED_QUEUE_H
