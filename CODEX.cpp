#include <iomanip>
#include <iostream>

int main() {
    int n;
    std::cout << "请输入正整数 n: ";
    std::cin >> n;

    if (!std::cin || n <= 0) {
        std::cerr << "输入错误：n 必须是正整数。\n";
        return 1;
    }

    // 计算调和级数：S_n = 1 + 1/2 + 1/3 + ... + 1/n
    double sum = 0.0;
    for (int k = 1; k <= n; ++k) {
        sum += 1.0 / k;
    }

    std::cout << std::setprecision(15)
              << "1 + 1/2 + ... + 1/" << n << " = " << sum << '\n';

    return 0;
}
