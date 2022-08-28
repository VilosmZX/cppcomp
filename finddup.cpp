#include <map>
#include <iostream>
#include <algorithm>
#include <cctype>

unsigned findDup(const char* str) {
    std::map<char, unsigned> counts;
    for(const char* i = str; *i != '\0'; i++) {
        ++counts[std::tolower(*i)];
    }
    return std::count_if(counts.begin(), counts.end(), [](auto& item) {
        return item.second > 1;
    });
}

int main() {
    unsigned dup = findDup("aaaaaaaaaasssssdw");
    std::cout << dup << std::endl;
    return 0;
}