#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void main() {
	std::vector<int> vec;
	int num;
	while (cin >> num) {
		vec.push_back(num);
	
	}
	
	std::sort(vec.begin(), vec.end());
	std::reverse(vec.begin(), vec.end());
	for (auto it = vec.begin(); it < vec.end(); it++) {
		std::cout << *it<<" " ;
	}
	system("pause");
}