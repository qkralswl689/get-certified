#include <stdio.h>
main() {
	int numArray[] = { 0,0,0,0,3 };


	int i, j;
		for(j = 4; j >= 0; --j) {
			print(numArray[j]);
			for (i = 4; i > j; --i) {
				print(numArray[i]);

			}
		}
}