#ifndef _SUP_FUNC_UDEF_H_
#define _SUP_FUNC_UDEF_H_

#include <vector>
#include <string>
#include <fstream>
#include "../cec2013/Header.h"

using namespace std;

typedef vector <int> int_archive;
typedef vector <double> double_archive;

typedef vector <int> group;
typedef vector <group> agroup;

class sup_func_udef {
public:	
	sup_func_udef();
	~sup_func_udef();

	//	user defined support function 
	void	shuffle_array(int ary[], int N);
	void	shuffle_vector(std::vector <int> &array);
	int		random_int(int low, int high);
	double	random_double(double low, double high);
	double	random_cauchy(double alpha, double beta);
	double	random_normal(double mu, double sigma);

};

#endif

