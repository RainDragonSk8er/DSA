#include <stdio.h>

void selection_sort(int arr[], int n) {
	
	for (int i = 0; i < n - 1; i++) {
		bool found_lower = false;
		int lowest_val = arr[i];
		int lowest_val_idx = i;
		for (int j = i; j < n - 1; j++) {
			if (arr[j] < lowest_val) {
				lowest_val = arr[j];
				lowest_val_idx = j;
				found_lower = true;
			};
		};
		if (found_lower) {
			int tmp = arr[i];
			arr[i] = lowest_val;
			arr[lowest_val_idx] = tmp;
		};
	};
};



int main () {
	int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	};
	printf("\n");

	selection_sort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	};
	printf("\n");

	return 0;
};
