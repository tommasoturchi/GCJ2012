    //
    //  tturchi_clustering.cpp
    //
    //  Created by Tommaso Turchi on 4/14/12.
    //  Copyright (c) 2012 Tommaso Turchi. All rights reserved.
    //

#include <fstream>
#include <iostream>
#include <math.h>

        // Main function
int main (int argc, const char * argv[])
{
        // file to read
	std::ifstream input(argv[1]);
	if (!input) {
        std::cout << "File doesn't exists, exiting..." << std::endl;
		exit (1);
    }
    int cases;
	input >> cases;
	for (int i = 0; i < cases; i++) {
		int A;
		input >> A;
		int B;
		input >> B;
		// Since A and B have the same number of digits
		int digits = log10(A);
		int result = 0;
		for (int j = A; j < B; j++) {
			int perm = j;
			for (int k = 0; k < digits; k++) {
				// Last digit
				int last = perm % 10;
				perm /= 10;
				perm += last * pow(10,digits);
				if ((perm <= B) && (perm > j)) result++;
			}
		}
		std::cout << "Case #" << i+1 << ": " << result << std::endl;
	}
    return 0;
}