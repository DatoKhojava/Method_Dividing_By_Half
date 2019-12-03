#include <iostream>

using namespace std;

double fun(double k){
		
return (k*k*k*k)+2*(k*k*k)+4*k+1;
		
}

int main(int argc, char** argv) {

	double a ,b ,eps ,x;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"eps="; cin>>eps;
	
	double l , Xm, Xl, Xr;
	
	int k = 0;
	l = b - a;
	Xm = ( a + b ) / 2;
			
	Xl = a + l / 4;
	Xr = b - l / 4;
				
	while(l>eps){
		k++; 
		
		if(fun(Xl)<fun(Xm)){
			b = Xm;
		} else if(fun(Xr)>fun(Xm)){
			a = Xm;
		} else {
			a = Xl; b = Xr;
		}
		
		l= b - a;
		Xm = ( a + b ) / 2;
		Xl = a + l / 4;
		Xr = b - l / 4;
}	
	cout<<"X* = " <<Xm << endl << "l=" << l << endl << "Xl=" << Xl << endl << "Xr=" << Xr << endl << endl << endl << "F(x) = " << fun(Xm) << endl << k << endl;
	
	system("pause");
	return 0;
}
