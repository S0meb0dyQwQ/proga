#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
//int8_t SolveTheProblem(int64_t, int64_t, int64_t, int64_t);
//double FindBordersOfTriangle(double&, double&);
//double CountSquare(double, double, double);
//double CountPerimetre(double, double, double);
//double FindThirdBorder(double, double, double);
//
//double TranslateCorner(double);
//double FindSquare(double, double, double);
int main()
{
	/*std::cout << "if u input bad numbers well i won't count it\n";
	double x{};
	double y{};
	double a{ FindBordersOfTriangle( x, y) };
	double b{ FindBordersOfTriangle( x, y) };
	double c{ FindBordersOfTriangle( x, y) };
	std::cout << "i count perimetre: " << CountPerimetre(a, b, c)<<'\n';
	std::cout << "i count square: " << CountSquare(a, b, c)<<'\n';
	double corner{};
	std::cout << "input corner\n";
	std::cin >> corner;
	corner = TranslateCorner( corner);
	std::cout << "there is a " << a << " and b " << b<<'\n';
	std::cout << "i find new c with your corner " << FindThirdBorder(a, b, corner)<<'\n';
	std::cout << "i count square: " << FindSquare(a, b, corner) << '\n';*/
	//// пара 10 500   связка 12 пар 102 500  коробка 12 связок 1 140 000
	//int64_t pare{ 10500 };//1 2 3 4 5 6 7 8 9 
	//int64_t svazka{ 102500};//10 11 12 13 14 ... 133
	//int64_t box{ 1140000 };// infinity
	//int64_t num{};
	//std::cout << "input num\n";
	//std::cin >> num;
	//if (SolveTheProblem(num, box, pare, svazka) == 1) {
	//	std::cout << " took pare";
	//}
	//else if (SolveTheProblem(num, box, pare, svazka) == 2) {
	//	std::cout << " took svazka";
	//}
	//else {
	//	std::cout << " took box";
	//}
	return 0;
}
//double TranslateCorner(double corner) 
//{
//	return corner * M_PI / 180;
//}
//double FindThirdBorder(double a, double b, double corner)
//{
//	return sqrt(a * a + b * b - 2 * a * b * cos(corner));
//}
//double FindSquare(double a, double b, double corner) 
//{
//	return 0.5 * a * b * sin(corner);
//}
//double FindBordersOfTriangle(double& x, double& y)
//{
//	std::cout << "input x and y\n";
//	std::cin >> x >> y;
//	return sqrt(x * x + y * y);
//}
//double CountSquare(double a, double b, double c)
//{
//	double p{ (CountPerimetre(a, b, c)) / 2 };
//	return sqrt(p*(p-a)*(p-b)*(p-c));
//}
//double CountPerimetre(double a, double b, double c) 
//{
//	return a + b + c;
//}
//int8_t SolveTheProblem(int64_t num, int64_t box, int64_t pare, int64_t svazka)
//{
//	if (pare*num<svazka)
//	{
//		return 1;
//	}
//	else if (svazka*num/12<box)
//	{
//		return 2;
//	}
//	else {
//		return 3;
//	}
//}