#pragma once
#include <iostream>
#include <Function.hpp>
const int N = 100;
const int M = 100;

int iosi(int x) {
	int p;
	p = 0;
	while (x > 0) {
		p = p + x % 10;
		x = x / 10;
	}
	return p;
}



