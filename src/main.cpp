
#include <iostream>

#define DEFAULT_MAX_QUEUE_SIZE INT16_MAX

#include "../include/queue.h"

int main() {
    queue c, k;

    std::cout << c.isEmpty() << '\n';

    c.push(3);
    c.push(2);
    c.push(5);
    c.push(7);

    k.push(5);
    k.push(8);

    std::cout << c.top() << '\n';
    c.pop();

    std::cout << c.top() << '\n';
    c.pop();

    c.print();
    k.print();

    queue rez = c + k;

    rez.print();

    std::cout << rez << '\n';


    float val = 3.4;

    std::cout << (int) val << '\n' << int(val) << '\n';
}
