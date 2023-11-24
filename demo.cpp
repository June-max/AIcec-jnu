#include <iostream>
#include <vector>
#include "./cec2013/Header.h"
#include "./sprt-func-user-def/sup_func_udef.h"

using namespace std;

int main() {
	sup_func_udef *sp;
	sp = new sup_func_udef();
	Benchmarks* fp;
	fp = generateFuncObj(15);

	double *x = new double[1000];
	double low, high;
	low = fp->getMinX();
	high = fp->getMaxX();
	
	for (int j = 0; j < 10; j++){
		for (int i = 0; i < 1000; i++) {
			x[i] = sp->random_double(low, high);
		}
		cout << fp->compute(x) << endl;
	}

	return 0;
}