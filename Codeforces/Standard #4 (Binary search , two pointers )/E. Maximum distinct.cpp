#include <iostream>
#include <string>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n, k;
    std::cin >> n >> k;
    std::string s;
    std::cin >> s;

    int max_distinct = 0;
    int distinct_count = 0;
    std::vector<int> char_count(26, 0);
    for (int i = 0, j = 0; j < n; j++) {
        if (char_count[s[j] - 'a']++ == 0) {
            distinct_count++;
        }
        while (j - i + 1 > k) {
            if (--char_count[s[i++] - 'a'] == 0) {
                distinct_count--;
            }
        }
        max_distinct = std::max(max_distinct, distinct_count);
    }

    std::cout << max_distinct << '\n';
    return 0;
}
