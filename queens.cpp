#include <iostream>

void resetValues(short &a, short &b, const short &aa, const short &bb);

int main() {
    short x = 5, y = 4;
    std::cout << "Give coords x and y separated by a space: ";
    std::cin >> x >> y;
    bool barr[8][8] = {false};
    short yS = y-1, xS = x-1;
    
    for (size_t i = xS; i != 8 && yS != -1; ++i, --yS) barr[yS][i] = true;
    
    resetValues(yS, xS, y-1, x-1);
    
    for (size_t i = xS; i != -1 && yS != 8; --i, ++yS) barr[yS][i] = true;
    
    resetValues(yS, xS, y-1, x-1);
    
    for (size_t i = yS; i != -1 && xS != -1; --i, --xS) barr[i][xS] = true;
    
    resetValues(yS, xS, y-1, x-1);
    
    for (size_t i = yS; i != 8 && xS != 8; ++i, ++xS) barr[i][xS] = true;
    
    resetValues(yS, xS, y-1, x-1);
    
    for (size_t i = 0; i != 8; ++i) barr[i][xS] = true;
    
    resetValues(yS, xS, y-1, x-1);
    
    for (size_t i = 0; i != 8; ++i) barr[yS][i] = true;
    
    
    
    for (const bool (&a)[8] : barr) {
        for (const bool b : a) {
            std::cout << b << ' ';
        }
        std::cout << std::endl;
    }
}

inline void resetValues(short &a, short &b, const short &aa, const short &bb) {
    a = aa;
    b = bb;
}
