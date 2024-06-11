#include "Counter.h"

Counter::Counter() : count(0) {}
Counter::Counter(int c) : count(c) {}

void Counter::increment() { count++; }
void Counter::decrement() { count--; }
int Counter::getCount() { return count; }
