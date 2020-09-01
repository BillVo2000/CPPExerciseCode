#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <iomanip>
#include <cmath>
using namespace std;

class widthandlength
{
public:
	void setwidth(double w) {
		width = w;
	}
	void setlength(double l) {
		length = l;
	}
protected:
	double length;
	double width;
};

class area : public widthandlength
{
public:
	double area1 () {
		return (width * length); }
};

/*class radius
{
public:
	void radiuss() {
		radius = r;
	}
protected:
	double radius;
}; */

int main()
{
	area rec;
	double w, l;
	cout << "input width of rectangle: "; cin >> w; rec.setwidth(w);
	cout << "input length of rectangle: "; cin >> l; rec.setlength(l);
	cout << "area of the rectangle is: " << rec.area1() << endl;


	return 0;
}