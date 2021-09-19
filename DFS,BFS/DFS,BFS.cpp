

#include <iostream>
#include <queue>
#include<algorithm>


#define x first
#define y second

using namespace std;

int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
int n, m;
int board[501][501];
int vis[501][501];
queue<pair<int, int> > Q;

int main()
{

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; j++) {
		for (int i = 0; j < m; j++) {
			cin >> mp[i][j];
		}
	}
	queue < pair<int, int> >Q;
	int cnt = 0; //그림의 개수
	int mx = 0; //그림의 넓이
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j] && mp[i][j] == 0) continue;
			cnt++;
			Q.push({ i,j });
			vis[i][j];
			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();

			}
			
		}
	}
	
}