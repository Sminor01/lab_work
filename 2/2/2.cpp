#include <iostream>
#include <string>
using namespace std;
class coordinates {
private:
	double x1, y1;
public:
	coordinates(double x1, double y1) {
		this->x1 = x1;
		this->y1 = y1;
	};
	coordinates() {};
	double calculateSquare() {
		return x1 * y1;
	}
	void show() {
		//cout << "Coordinates of the object: x = " << x1 << " y = " << y1 << endl;
		cout << "Площадь равна: " << calculateSquare();
	}
};

void main()
{
	setlocale(0, "rus");
	double x1, y1;
	cout << "Введите X: ";
	cin >> x1;
	cout << "Введите Y: ";
	cin >> y1;
	coordinates coord(x1, y1);

	coord.show();
}