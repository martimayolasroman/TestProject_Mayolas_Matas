#include <iostream>

int main() {

	int arr[100][100] = { 1 };
	for (int i = 0; i < 100; i++) {
		for (int j = 0; i < 100; j++) {
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}
	return 0;
}