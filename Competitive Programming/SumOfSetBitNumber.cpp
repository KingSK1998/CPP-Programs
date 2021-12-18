#include <iostream>

int SumOfSetBitNumber(int n, int set) {
    int sum = 0;
    for(int i = 0; i < (1<<n); i++)
        if(__builtin_popcount(i) == set)
            sum += i;
    return sum;
}

main(){
    std::cout << SumOfSetBitNumber(4, 1) << std::endl;
}