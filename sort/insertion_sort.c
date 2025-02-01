#include <stdio.h>

void swap_backwards(int* arr, int curr_pos) {

	if ((arr[curr_pos] < arr[curr_pos - 1]) && (curr_pos > 0) ) {
		int tmp = arr[curr_pos];
		arr[curr_pos] = arr[curr_pos - 1];
		arr[curr_pos - 1] = tmp;
		swap_backwards(arr, curr_pos - 1);
	} else {
		printf("moved %d to %d\n", arr[curr_pos], curr_pos);
	};
};

void insertion_sort(int* arr, int n) {
	
	for (int i = 1; i < n; i++) {
		// Loop through the whole array once
		// If the value is > than the previous value skip (invert this!)
		// If the value is lower than the previous, swap values backwards
		// until the right position is found.
		
		if (arr[i] < arr[i - 1]) {
			// printf("Gets here!");
			swap_backwards(arr, i);
		} else {
			printf("%d, correctly placed\n", arr[i]);
		};
		// for (int p = 0; p < n; p++) {
		// 	printf("%d, ", arr[p]);
		// };
		// printf("\n");
	};
};



int main () {
	int arr[] = {20, 1, 55, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0, 72, 48, 66, 104, 82};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	printf("Array test:\n");
	for (int p = 0; p < n; p++) {
		printf("%d, ", arr[p]);
	};
	printf("\n");
	
	insertion_sort(arr, n);
	
	printf("Array test done:\n");
	for (int p = 0; p < n; p++) {
		printf("%d, ", arr[p]);
	};
	printf("\n");

	return 0;
};
