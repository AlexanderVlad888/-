#pragma once

class Counter
{
	// определяем класс Counter

private:
	int count;
public:

	Counter();     //это конструктор по умолчанию
	Counter(int c); //это конструктор с начальным значением отличным от 0

	void increment();
	void decrement();
	int getCount();
};

