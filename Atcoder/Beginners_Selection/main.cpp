#include <array>
#include <iostream>

int factorTwo(int x)
{
    int count = 0;
    while (x % 2 == 0 && x) {
        x /= 2;
        count++;
    }
    return count;
}

int main()
{
    int N;
    std::cin >> N;

    int min = 30;

    for (int i = 0; i < N; i++) {
        int x;
        std::cin >> x;
        int y = factorTwo(x);
        if (min > y) {
            min = y;
        }
    }

    std::cout << min << std::endl;
}
