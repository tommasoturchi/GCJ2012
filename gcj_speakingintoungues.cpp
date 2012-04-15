    //
    //  tturchi_clustering.cpp
    //
    //  Created by Tommaso Turchi on 4/14/12.
    //  Copyright (c) 2012 Tommaso Turchi. All rights reserved.
    //

#include <fstream>
#include <iostream>
#include <string>

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
	std::string line;
	std::getline(input,line);
	for (int i = 0; i < cases; i++) {
		std::getline(input,line);
		for (int j = 0; j < line.length(); j++) {
			switch (line[j]) {
				case 'a': line[j] = 'y';
				break;
				case 'b': line[j] = 'h';
				break;
				case 'c': line[j] = 'e';
				break;
				case 'd': line[j] = 's';
				break;
				case 'e': line[j] = 'o';
				break;
				case 'f': line[j] = 'c';
				break;
				case 'g': line[j] = 'v';
				break;
				case 'h': line[j] = 'x';
				break;
				case 'i': line[j] = 'd';
				break;
				case 'j': line[j] = 'u';
				break;
				case 'k': line[j] = 'i';
				break;
				case 'l': line[j] = 'g';
				break;
				case 'm': line[j] = 'l';
				break;
				case 'n': line[j] = 'b';
				break;
				case 'o': line[j] = 'k';
				break;
				case 'p': line[j] = 'r';
				break;
				case 'q': line[j] = 'z';
				break;
				case 'r': line[j] = 't';
				break;
				case 's': line[j] = 'n';
				break;
				case 't': line[j] = 'w';
				break;
				case 'u': line[j] = 'j';
				break;
				case 'v': line[j] = 'p';
				break;
				case 'w': line[j] = 'f';
				break;
				case 'x': line[j] = 'm';
				break;
				case 'y': line[j] = 'a';
				break;
				case 'z': line[j] = 'q';
				break;
				default: break;
			}
		}
		std::cout << "Case #" << i+1 << ": " << line << std::endl;
	}
    return 0;
}