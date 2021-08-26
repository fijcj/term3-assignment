#include <iostream>

int main() {
    short x = 5;
    short y = 4;
    std::cout << "Give coords x and y separated by a space: ";
    std::cin >> x >> y;
    bool barr[8][8] = {false};
    short yS = y-1;
    short xS = x-1;
    for (short i = xS; i != 8 && yS != -1; ++i, --yS) {
        barr[yS][i] = true;
    }
    yS = y-1;
    xS = x-1;
    for (short i = xS; i != -1 && yS != 8; --i, ++yS) {
        barr[yS][i] = true;
    }
    yS = y-1;
    xS = x-1;
    for (short i = yS; i != -1 && xS != -1; --i, --xS) {
        barr[i][xS] = true;
    }
    yS = y-1;
    xS = x-1;
    for (short i = yS; i != 8 && xS != 8; ++i, ++xS) {
        barr[i][xS] = true;
    }
    yS = y-1;
    xS = x-1;
    for (size_t i = 0; i != 8; ++i) {
        barr[i][xS] = true;
    }
    yS = y-1;
    xS = x-1;
    for (size_t i = 0; i != 8; ++i) {
        barr[yS][i] = true;
    }
    for (const auto &a : barr) {
        for (const auto b : a) {
            std::cout << b << ' ';
        }
        std::cout << std::endl;
    }
}
