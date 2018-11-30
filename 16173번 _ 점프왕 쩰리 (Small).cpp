#include <cstdio>
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
using LL = long long;

int map[100][100] = { 0, };
int cache[100][100] = { 0, };

int jump(int, int, int);

int main() {
	memset(cache, -1, sizeof(int) * 100 * 100);
	int n;
	scanf("%d", &n);
	for (int r = 0; r < n; r++) {
		for (int c = 0; c < n; c++) {
			scanf("%d", &map[r][c]);
		}
	}

	int result = jump(0, 0, n);

	if(result==0){
        printf("Hing");
    }
    else{
        printf("HaruHaru");
    }
	return 0;
}

int jump(int row, int col, int n) {
	//Erase basement case.
	if (row > n - 1 || col > n - 1) { return 0; }
	if (row == n - 1 && col == n - 1) { return 1; }
	int jumpsize = map[row][col];

	return (jump(row + jumpsize, col, n) || jump(row, col + jumpsize, n));


}
