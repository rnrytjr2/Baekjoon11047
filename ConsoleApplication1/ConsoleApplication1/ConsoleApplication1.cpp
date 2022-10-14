// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
int N, K,answer,maximum=0;
int coins[10];
int main()
{
	cin >> N >> K;
	for (int i = 0; i < N; i++)
	{
		cin >> coins[i];
	}
	for (int i = N-1; i >= 0; i--)
	{
		answer+=K / coins[i];
		K = K % coins[i];
		if (K == 0)
			break;
	}
	cout << answer;
}