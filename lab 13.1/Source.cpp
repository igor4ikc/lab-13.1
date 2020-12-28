
#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "x_p = "; cin >> x_p;
	cout << "x_k = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	x = x_p;
	while (x <= x_k) {
		sum(); 
		cout << x << " "
			<< s << " "
			<< exp(x) << " "
			<< n << endl; // 
		x += dx;
	}
	cin.get();
	return 0;
}
#pragma once
namespace nsVar {
		extern int n; 
	extern double x, x_p, x_k, dx, e, a, s;
};
namespace nsVar { 
	int n; 
	double x, x_p, x_k, dx, e, a, s;
};
#pragma once
namespace nsDod {
	void dod();
};
#include "dod.h"
#include "var.h" õ
using namespace nsVar;
void nsDod::dod() {
	a *= x / n; 
} 
#pragma once
namespace nsSum {
	void sum();
};
#include <math.h>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace nsDod;
using namespace nsVar;
void nsSum::sum() {
	n = 0;
	a = 1;
	s = a;
	do {
		n++;
		dod(); 
		s += a;
	} while (fabs(a) > e);
}