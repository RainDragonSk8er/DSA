#include <stdio.h>

int lowest_in_array(int arr[5]) {
	int i;
	int low_val = arr[0];

	for (i = 0; i < 5; i++) {
		int curr_val = arr[i];
		if (curr_val < low_val) {
			low_val = curr_val;
		};
	};
	return low_val;

};

int main() {
	int unsorted_array[5] = {7, 12, 9, 11, 3};

	printf("lowest value in unsorted array is %d", lowest_in_array(unsorted_array));

	return 0;
}
