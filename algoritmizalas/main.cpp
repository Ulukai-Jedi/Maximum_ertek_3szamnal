#include <iostream>
#include <vector>

int main() {
	int a = 0;
	int b = 0;
	int c = 0;
	int maximum = 0;

	std::cout << "Kerek harom szamot: " << std::endl;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	std::vector<int> A = {a,b,c};

	for (int i = 1; i < A.size() ; i++) {
		if (A[i] > maximum) {
			maximum = A[i];
		}
	}
	std::cout << maximum << std::endl;
}