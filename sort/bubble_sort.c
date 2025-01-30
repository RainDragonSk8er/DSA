#include <stdio.h>

void bubblesort(int arr[], int n) {
	
	bool swap;
	for (int i = 0; i < n - 1; i++) {
		swap = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j+1]) {
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				swap = true;
			};
		};
		if (!swap) {
			printf("\tNo SWAP! Sorted on %d run\n", i);
			break;
		};
	
	};

};



int main() {
	
	int unsorted_arr[10] = {0, 1, 2, 6, 5, 4, 3, 9, 8, 7};
	int n = sizeof(unsorted_arr) / sizeof(unsorted_arr[0]);
	

	printf("Unsorted array: ");
	for (int p = 0; p < n; p++) {
		printf("%d, ", unsorted_arr[p]);
	};	
	printf("\n");
	
	bubblesort(unsorted_arr, n);
	
	printf("Sorted array: ");
	for (int d = 0; d < n; d++) {
		printf("%d, ", unsorted_arr[d]);
	};	

	return 0;
};
