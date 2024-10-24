
#include <iostream>
using namespace std;
void multi_table(int num);
int main()
{
	int n = 10;
	multi_table(n);
 
}

void multi_table(int num) {

	if (num >= 1) {
		printf("%d * %d = %d\n", 5,num, 5*num);
		num--;
		multi_table(num);
	}
	else if (num < 1) {
		return;
	}
}