#include <iostream>
#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops) {
	unsigned peopleCome = 0, peopleLeave = 0;
	for (std::pair<int, int> busStop : busStops) {
		peopleCome += busStop.first;
		peopleLeave += busStop.second;
	}
	return (peopleCome - peopleLeave);
}

int main() {
	
	return 0;
}
