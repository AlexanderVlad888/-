#pragma once

class Counter
{
	// ���������� ����� Counter

private:
	int count;
public:

	Counter();     //��� ����������� �� ���������
	Counter(int c); //��� ����������� � ��������� ��������� �������� �� 0

	void increment();
	void decrement();
	int getCount();
};

