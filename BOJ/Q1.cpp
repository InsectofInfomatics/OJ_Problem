#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int d1[1001];
int d2[1001];
int num[1001];
int cal(int a) {
	int mx1 = 0;
	int mx2 = 0;
	int max_idx;
	//d1에 증가하는 순서의 최대값 저장
	for (int i = 0; i < a; i++) {
		d1[i] = 1;
		for (int j = 0; j < i; j++) {
			if (num[j] < num[i] && d1[j] + 1> d1[i])
				d1[i] = d1[j] + 1;
		}
	}
	//d1중 최대값 검색 및 최대값이 들어있는 index저장
	for (int i = 0; i < a; i++) {
		if (mx1 < d1[i]) {
			mx1 = d1[i];
			max_idx = i;
		}
	}
	
	//최대값이 있는 index부터 끝까지 감소하는 순서로 검색하여 d2에 값 저장
	for (int i = max_idx; i < a; i++) {
		d2[i] = 1;
		for (int j = max_idx; j < i; j++) {
			if (num[j] > num[i] && d2[j] + 1> d2[i])
				d2[i] = d2[j] + 1;
		}
	}
	
	//d1과 d2의 합 -1 중 가장 큰값 저장
	
	for (int i = 0; i < a; i++) {
		for(int j = 0;j<a;j++)
		if (mx2 < d1[i] + d2[j] - 1)
			mx2 = d1[i] + d2[j] - 1;
	}
	return mx2;
}
int main() {
	int a;
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		int x;
		scanf("%d", &x);
		num[i] = x;
	}
	printf("%d", cal(a));
    
    return 0;
}

