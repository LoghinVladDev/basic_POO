//
// Created by Vlad on 02/07/2020.
//
#include "../include/queue.h"

void queue::push(int element) {
    v[++sc] = element;
}

void queue::pop() {
    ic++;
}

int queue::top() {
    return v[ic];
}

bool queue::isEmpty() {
    return ic > sc;
}

void queue::print() {
    for(int i = ic; i <= sc; i++){
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}

queue operator+ (queue a, queue b){
    queue rez;

    while(!a.isEmpty()) {
        rez.push(a.top());
        a.pop();
    }
    while(!b.isEmpty()) {
        rez.push(b.top());
        b.pop();
    }

    return rez;
}

std::ostream& operator<<(std::ostream &f, const queue & x) {
    for(int i = x.ic; i <= x.sc; i++){
        f << x.v[i] << ' ';
    }
    f << '\n';
    return f;
}

queue::queue() {
    ic = 0; sc = 0;
}

queue::queue(const queue & coada) {
    int i = 0;
    for( ;i < coada.sc - coada.ic + 1; i++){
        v[i] = coada.v[ic + i];
    }
    ic = 0;sc = i- 1;
}

queue::queue(int *v, int length) {
    for(int i = 0; i < length; i++)
        this->v[i] = v[i];
    this->ic = 0, this->sc = length - 1;

}

void f1(){
    queue test;
    std::cout << 'a' << '\n';
}
