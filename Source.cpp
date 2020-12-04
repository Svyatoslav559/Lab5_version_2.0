#include "Pupil.h"
#include <iostream>
using namespace std;
int main() {
	const int N = 3;
	Pupil arr[N];
	Student a;
	SchoolMan b;
	SchoolMan c;
	cin >> a >> b >> c;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	for (int i = 0; i < N; i++) {
		cout << arr[i];
	}
}
