
//

#include "pch.h"
#include <iostream>

#include <stdlib.h>

#include <time.h>

using namespace std;
int main()
{
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j <= i; j++)
		{
			cout << i << "*" << j << "=" << i * j << "\t";
		}
		cout << "\n";
	}
}

