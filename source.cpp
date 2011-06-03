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
	fill(p);
	cout << "Input:" << endl;
	show(p);
	sort(p); 
	cout << "Output:" << endl;
	show(p);
	delete [] p;
	cin.get();
	cin.get();
	return 0;
}

void fill(int *mas)
{
	int *p=mas;
	for (int i=0; i<size; ++i)
		{
		*(p+i)=rand()%10;
		}
}

void show(int *mas)
{
	int *p=mas;
	for (int i=0; i<size; ++i)
		{
		cout << *(p+i) << endl;
		}
}

void sort(int *mas) 
{
	int *p=mas;
	for (int i=0; i<size; ++i)
		for (int k=0; k<(size-1); ++k)
			if (*(p+k)>*(p+k+1))
				{
				*(p+k)+=*(p+k+1);
				*(p+k+1)=*(p+k)-*(p+k+1);
				*(p+k)-=*(p+k+1);
				}
}