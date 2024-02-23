#include "gcdLcm.hpp"

#include <cmath>

int GCD(int lhs, int rhs) {
	int tmp = 0;

	while (rhs != 0) {

		tmp = lhs % rhs;
		lhs = rhs;
		rhs = tmp;
	}

	return abs(lhs);
}

int LCM(int lhs, int rhs) {

	int gcd = GCD(lhs,rhs);
	if (gcd == 0)
		return 0;
	return abs((lhs * rhs) / gcd);
}
