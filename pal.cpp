#include <iostream>
#include "src/setvalue.h"
#include "src/table.h"

using namespace std;

typedef ctable<double> table;

int main(int argc, char const *argv[]){
	
	int n = 10, t = 16;
	int dim[t] = {2,3,10,100,200,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
	for(int i=0; i<t; i++){
		table *test = new table(dim[i],n);
		cout << dim[i] << " " << test->min_dis() << " " << test->prm_dis() << " " << test->max_dis() << endl;
		delete test;
	}
	return 0;
}

//d3jts
//plot "curse.dat" using 1:2 w l title "min dis", "" using 1:3 w l title "prm dis", "" using 1:4 w l title "max dis";
