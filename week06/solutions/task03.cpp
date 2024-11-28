#include <iostream>

void doOp(int& dest, int src, char op) {
    switch(op) {
        case '+':
            dest += src;
            break;
        case '-':
            dest -= src;
            break;
        case '*':
            dest *= src;
            break;
        case '/':
            dest /= src;
            break;
        case '%':
            dest %= src;
            break;
    }
}