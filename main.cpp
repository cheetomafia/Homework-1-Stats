#include "stats.h"
#include <algorithm>
#include <iostream>

/*
 *  Main function
 */
int main() {
	int x;
	int y;
	int z;

	// Set the precision for cout
	std::cout.precision(2);

	// Get Three integers
	std::cin >> x >> y >> z;

	// Output Average (Show in fixed point)
	std::cout << "Average: " << std::fixed << average(x, y, z) << std::endl;

	// Finish
	// Output Median, Min, Max
  std::cout << "Median: " << std::fixed << median(x,y,z) << std::endl;
  std::cout << "Min: " << std::fixed << min(x,y,z) << std::endl;
  std::cout << "Max: " << std::fixed << max(x,y,z) << std::endl;

	return 0;
}
