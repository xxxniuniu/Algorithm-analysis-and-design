#include<iostream>
#include<algorithm>
#include<cmath>
#include<stdio.h>
typedef long long ll;
using namespace std;
struct point {
	double x, y;
}P[100005], S[100005];
// x坐标升序排序
bool cmpx(point p, point q) {
	return p.x < q.x;
}
// y坐标升序排序
bool cmpy(point p, point q) {
	return p.y < q.y;
}
double length(point p, point q) {
	return sqrt((p.x - q.x) * (p.x - q.x) + (p.y - q.y) * (p.y - q.y));
}
double EfficientClosesPair(int s, int f) {
	if (f - s  == 1) {
		return length(P[s], P[f]);
	}
	else if (f - s  == 2) {
		return min(length(P[s], P[s + 1]), min(length(P[s + 1], P[f]), length(P[s], P[f])));
	}
	else {
		int mid = (s + f) / 2;
		double dmin = min(EfficientClosesPair(s, mid), EfficientClosesPair(mid + 1, f));
		int f = 0;
		for (int i = s; i <= f; i++) {
			if (fabs(P[i].x - P[mid].x) <= dmin) {
				f++;
				S[f] = P[i];
			}
		}
		// 将S中点按y坐标排序
		sort(S + 1, S + f + 1, cmpy);
		for (int i = 1; i <= f; i++) {
			for (int j = i + 1; j <= f && j < i + 6; j++) {
				dmin = min(dmin, length(S[i], S[j]));
			}
		}
		return dmin;
	}
}
int main()
{
    int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) cin >> P[i].x >> P[i].y;
	sort(P + 1, P + 1 + n, cmpx);
	cout<< EfficientClosesPair(1, n);
}