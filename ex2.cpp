#include "cpptest.h"

int main() {
	test_plan(3);

	ok(0);
	ok(1);
	ok(0);

    summary();
}
