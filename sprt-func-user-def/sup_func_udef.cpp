/*This version deal with overlapping function transformed from partially separable function*/
/*                      2018-1-25 by Jason SYSU                                            */
/*******************************************************************************************/
#include "sup_func_udef.h"
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <random>
#include <ctime>
#include <chrono>

using namespace std;

double sup_func_udef::random_double(double low, double high) {
	return low + (high - low)*rand()*1.0 / RAND_MAX;
}
int sup_func_udef::random_int(int low, int high) {
	if (high>low)
		return low + rand() % (high - low);
	else
		return low;
}

double sup_func_udef::random_cauchy(double alpha, double beta) {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::cauchy_distribution<double> distribution(alpha, beta);
	return distribution(generator);
}
// mu: mean, sigma: standard deviation
double sup_func_udef::random_normal(double mu = 0.0, double sigma = 1.0) {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::normal_distribution<double> distribution(mu, sigma);
	return distribution(generator);
}
void sup_func_udef::shuffle_array(int ary[], int N) {
	for (int i = N - 1; i >= 0; i--)
		swap(ary[i], ary[rand() % (i + 1)]);
}
void sup_func_udef::shuffle_vector(vector <int> &array) {
	for (int i = array.size() - 1; i >= 0; i--)
		swap(array[i], array[rand() % (i + 1)]);
}
sup_func_udef::sup_func_udef() {

}