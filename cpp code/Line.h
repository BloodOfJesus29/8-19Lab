#ifndef LINE_H
#define LINE_H

class Line : Figure_element {


public:
	void get_P1();

	void get_P2();

	void set_P1(int Point);

	void set_P2(int Point);

	void move_by(int int1, int int2);
};

#endif
