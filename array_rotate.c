#include <stdio.h>

void print(int arr[5][5], int w, int h)
{
	int i, j;
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < h; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}


void rotate90(int arr[5][5], int w, int h)
{
	int s[5][5];
	int a, b;

	for (a = 0; a < w; a++)
	{
		for (b = 0; b < h; b++)
		{
			s[b][w - 1 - a] = arr[a][b];
		}
	}

	print(s, 5, 5);
}

void rotate180(int arr[5][5], int w, int h)
{
	int s[5][5];
	int a, b;
	
	for (a = 0; a < w; a++)
	{
		for (b = 0; b < h; b++)
		{
			s[w - 1 - a][w - 1 - b] = arr[a][b];
		}
	}

	print(s, 5, 5);
}

void rotate270(int arr[5][5], int w, int h)
{
	int s[5][5];
	int a, b;
	
	for (a = 0; a < w; a++)
	{
		for (b = 0; b < h; b++)
		{
			s[w - 1 - b][a] = arr[a][b];
		}
	}

	print(s, 5, 5);
}

int main()
{
	int arr[5][5] = { {1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25} };

	print(arr, 5, 5);
	printf("\n\n\n");
	
	rotate90(arr, 5, 5);
	printf("\n\n\n");

	rotate180(arr, 5, 5);
	printf("\n\n\n");

	rotate270(arr, 5, 5);

	return 0;
}
