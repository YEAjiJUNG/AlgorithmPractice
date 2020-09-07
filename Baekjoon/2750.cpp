#include <iostream>

using namespace std;

int main()
{
	int N;
	int arr[1001];

	cin >> N;

	for(int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

// N-1, N-2, ... 1, 0=> (N-1) * N / 2 = (N^2 - N) / 2 => O(N^2) 
	for(int i = 0 ; i < N; i++)
	{
		for(int j = 0; j < N-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for(int i = 0; i < N; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}