#include <cstdio>

struct Marine{
	int hp;
	int atk;
	int def;
};

int main() {
	Marine m;
	m.hp = 6;
	m.atk = 40;
	m.def = 0;

	Marine m2[10];
	m2[0].hp = 40;
	printf("%d", m2[0].hp);

	return 0;
}