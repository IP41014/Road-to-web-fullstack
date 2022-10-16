#include<iostream>

using namespace std;
class MousePoint {
private:
	int x;
	int y;
public:
	MousePoint();
	MousePoint(int nX, int nY);
	void SetXY(int nX, int nY) const;
	inline int GetX() const { return x; }
	inline int GetY() const { return y; }
};

MousePoint::MousePoint()
{
	x = 0;
	y = 0;
}
MousePoint::MousePoint(int nX, int nY)
{
	x = nX;
	y = nY;
}
void MousePoint::SetXY(int x, int y) const
{
	this->x = x;
	this->y = y;
}

void SetRect(MousePoint pt1, MousePoint pt2)
{
	cout << pt1.GetX() << ", " << pt1.GetY() << endl;
	cout << pt2.GetX() << ", " << pt2.GetY() << endl;
	pt1.SetXY(1000, 2000);
	cout << pt1.GetX() << ", " << pt1.GetY() << endl;
}

void CopyObject(MousePoint &pt1, MousePoint &pt2)
{
	pt1 = pt2;
	cout << pt1.GetX() << ", " << pt1.GetY() << endl;
}

void main()
{
	//MousePoint mp1(10, 20), mp2(100, 200);
	//CopyObject(mp1, mp2);
	//cout << mp1.GetX() << ", " << mp1.GetY() << endl;

	//MousePoint mp1(10, 20), mp2(100, 200);
	//SetRect(mp1, mp2);
	//cout << mp1.GetX() << ", " << mp1.GetY() << endl;

	const MousePoint pt1(10,20);
	MousePoint pt2(100,200);
	pt1.GetX();
}