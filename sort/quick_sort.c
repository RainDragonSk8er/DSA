#include <stdio.h>

int partition(int* arr, int low_idx, int high_idx) {
	int pivot_val = arr[high_idx];
	int idx = low_idx - 1;

	for (int j = low_idx; j < high_idx; j++) {
		if (arr[j] <= pivot_val) {
			idx += 1;
			int tmp = arr[idx];
			arr[idx] = arr[j];
			arr[j] = tmp;
		};
	};
	
	int tmp2 = arr[idx + 1];
	arr[idx + 1] = arr[high_idx]; 
	arr[high_idx] = tmp2;
	return idx + 1;
		
};

void quick_sort(int* arr, int low_idx, int high_idx) {
	if (high_idx == sizeof(arr)/sizeof(arr[0])) {
	       high_idx -= 1;
	};

	if (low_idx < high_idx) {
		int pivot_index = partition(arr, low_idx, high_idx);
		quick_sort(arr, low_idx, pivot_index-1);
		quick_sort(arr, pivot_index+1, high_idx);
		
		// printf("Sorted_subarray [%d -> %d]: ", low_idx, high_idx);
		// for (int p = low_idx; p < high_idx; p++) {
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
	
	quick_sort(arr, 0, n);
	
	printf("Array test done:\n");
	for (int p = 0; p < n; p++) {
		printf("%d, ", arr[p]);
	};
	printf("\n");

	return 0;
};
