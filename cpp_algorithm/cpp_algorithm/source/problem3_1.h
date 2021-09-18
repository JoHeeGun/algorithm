#pragma once
#include <iostream>

void problem3_1(void) {
	using namespace std;
	int n, k;
	int result = 0;
	cin >> n >> k;
	while (true) {
		
		int target = (n / k) * k;
		result += (n - target);
		n = target;
		
		if (n < k) break;
		
		result++;
		n /= k;
	}
	
	result += (n - 1);
	cout << result << '\n';
}