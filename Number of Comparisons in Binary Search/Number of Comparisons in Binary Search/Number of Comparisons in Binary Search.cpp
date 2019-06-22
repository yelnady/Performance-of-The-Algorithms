#include"pch.h"
#include "all.h"
#include"Searcher.h"
using  namespace std;

int main() {
	srand(time(0));
	Searcher obj;
	for (int i = 10000; i < 80001; i += 10000)
	{
		int x;
		double time1 = 0, time2 = 0;
		int sum1 = 0, sum2 = 0;
		x = obj.testPerformance(i, time1, sum1, time2, sum2);
		cout << i << " " << time1 << " " << sum1 << " " << time2 << " " << sum2 << endl;
	}
	system("pause");
	return 0;
}