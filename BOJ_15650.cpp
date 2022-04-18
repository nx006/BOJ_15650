#include <iostream>
#include <vector>
using namespace std;

int N, Msize;

void bricks(int num, vector<int>& v)
{
	if (v.size() == Msize) {
		for (int& i : v) 
			cout << i << " ";
		cout << "\n";
		return;
	}
	for (int i = num; i <= N; i++) {
		v.push_back(i);
		bricks(i + 1, v);
		v.pop_back();
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	cin >> N >> Msize;
	vector<int> v;
	bricks(1, v);

	return 0;
}