#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
void main() {
	std::vector<int> vec;
	int num;
	
	while (cin >> num) {
		vec.push_back(num);
	
	}
	sort(vec.begin(), vec.end(), greater<int>() );
	for (auto i : vec) {
		cout << i << endl;
	}

	
	system("pause");
}