    //
    //  tturchi_clustering.cpp
    //
    //  Created by Tommaso Turchi on 4/14/12.
    //  Copyright (c) 2012 Tommaso Turchi. All rights reserved.
    //

#include <fstream>
#include <iostream>

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
		int googlers;
		input >> googlers;
		int surprising;
		input >> surprising;
		int min;
		input >> min;
		int* points = new int[googlers];
		int result = 0;
		for (int j = 0; j < googlers; j++) {
			input >> points[j];
			int base = points[j]/3;
			switch (points[j]%3) {
				case 0:
				if (base >= min) result++;
				else if ((surprising > 0) && (base > 0) && (base+1 >= min)) {
					result++;
					surprising--;
					}
				break;
				case 1:
				if ((base >= min) || (base+1 >= min)) result++;
				else if ((surprising > 0) && (base+1 >= min)) {
					result++;
					surprising--;
					}
				break;
				case 2:
				if ((base+1 >= min) || (base >= min)) result++;
				else if ((surprising > 0) && (base+2 >= min)) {
					result++;
					surprising--;
					}
				break;
			}
		}
		std::cout << "Case #" << i+1 << ": " << result << std::endl;
	}
    return 0;
}