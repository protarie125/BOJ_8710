#include <iostream>

using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    ll k, w, m;
    cin >> k >> w >> m;

    auto dif = w - k;
    auto answer = dif / m;
    if (0 < dif % m) {
        answer += 1;
    }

    cout << answer;

    return 0;
}