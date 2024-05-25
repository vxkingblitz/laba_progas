#include <iostream>
#include <string>


using namespace std;

class Array {
public:
	Array(int size_array);
	Array();
	~Array();
	void bubbleSort(int arr[], int n)
	{
		int i, j;
		bool swapped;
		for (i = 0; i < n - 1; i++) {
			swapped = false;
			for (j = 0; j < n - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					swap(arr[j], arr[j + 1]);
					swapped = true;
				}
			}
			if (swapped == false)
				break;
		}
	}
	void ShowArray() {
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << '\t';
		}
		cout << endl;
	}
	void FillArr() {
		arr = new int[size];
		setlocale(LC_ALL, "rus");
		cout << "Введите элементы массива" << endl;
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
	}

	bool CheckIfSort()
	{

		bool swaped = true;
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] < arr[j + 1]) {
					swaped = false;
					break;
				}
			}
			if (swaped == false) {
				break;
			}
		}
		return swaped;
	}
	Array operator << (Array second) {
		Array new_Arr;
		new_Arr.size = size + second.size;
		new_Arr.arr = new int[size + second.size+1];

		for (int i = 0; i < size; i++)
		{
			new_Arr.arr[i] = arr[i];
		}
		int j = 0;
		for (int i = size; i < size + second.size; i++)
		{
			new_Arr.arr[i] = second.arr[j];
			j++;
		}

		if (second.CheckIfSort()) {
			bubbleSort(new_Arr.arr, new_Arr.size);
		}
		return new_Arr;
		
	}
private:
	int size;
	int* arr;
};


Array::Array() {
	arr = 0;
}

Array::Array(int size_array) {
	
	size = size_array;
	FillArr();
}

Array::~Array() {
}

int main() {
	Array Mas(5);
	Array arr(6);
	Array New = arr << Mas;
	
	New.ShowArray();
	
}