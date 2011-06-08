//sorting

#include <iostream>
#include <ctime>

using namespace std;

int size=10;

void fill(int *);
void sort(int *);
void show(int *);

int main()
{
	srand(time(NULL));
	cout << "Length of an array is ";
	cin >> size;
	int *p= new int [size];
	fill(&p[0]);
	cout << "Input:" << endl;
	show(&p[0]);
	sort(&p[0]); 
	cout << "Output:" << endl;
	show(&p[0]);
	delete [] p;
	cin.get();
	cin.get();
	return 0;
}

void fill(int *arr)
{
	int *p=arr;
	for (int i=0; i<size; ++i)
		{
		*(p+i)=rand()%10;
		}
}

void show(int *arr)
{
	int *p=arr;
	for (int i=0; i<size; ++i)
		{
		cout << *(p+i) << endl;
		}
}

void sort(int *arr) 
{
	int *p=arr;
	for (int i=0; i<size; ++i)
		for (int k=0; k<(size-1); ++k)
			if (*(p+k)>*(p+k+1))
				{
				*(p+k)+=*(p+k+1);
				*(p+k+1)=*(p+k)-*(p+k+1);
				*(p+k)-=*(p+k+1);
				}
}