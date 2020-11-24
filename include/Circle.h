#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {

private:

	double radius;             // ������
	double ference;            // ����� ����������
	double area;               // ������� �����

public:

	Circle ();
	Circle (double rad);
	void setRadius(double rad);
	void setFerence(double rad);
	void setArea(double rad);
	double getRadius();
	double getFerence();
	double getArea();

};

#endif