#include<iostream>

using namespace std;

struct item {
	int reward;
	string name;
	string color;
};

struct player{
	item inventory[10];
	string character;
	void func_get_items() {
		return;
	}
};

int main() {
	return 0;
}


