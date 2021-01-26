#include <cassert>
#include <cstdlib>
#include <ctime>
#include <iostream>

constexpr size_t STACK_MAX_SIZE = 256;
constexpr size_t TOP = STACK_MAX_SIZE - 1;

/* Function Prototypes */
void PushBack(int stack[], int element);
void Pop(int stack[]);
size_t Find(int stack[], int element);
void QuickSort(int stack[], int low, int high);
int partition(int stack[], int low, int high);
void swap(int element1, int element2);



void PushBack(int stack[], int element) {
	int top = stack[TOP];
	if (top == STACK_MAX_SIZE - 1) return;

	stack[top] = element;
	stack[TOP]++;


}

void Pop(int stack[]) {
	int top = stack[TOP];
	if (top == 0) return;

	stack[top] = 0;
	stack[TOP]--;


}

size_t Find(int stack[], int element) {
	for (int i = 0; i < STACK_MAX_SIZE; ++i)
	{
		if (stack[i] == element) 
		{
			return i;
			break; 
		}
	}

	return -1;

}

int partition(int stack[], int low, int high) {

	int pivotIdx = (low + high) / 2;

	int l = low;
	int h = high;
	while (l < h) {
		while (stack[l] < stack[pivotIdx] && l < h){
		l++; }
		while (stack[h] >= stack[pivotIdx] && l < h){
		h--;}
		if (l < h) {
			if (l == pivotIdx) {
				pivotIdx = h;
			}
			swap(stack[l], stack[h]);
		}
	 }
	swap(stack[pivotIdx], stack[h]);
	pivotIdx = h;
	return pivotIdx;

}

void swap(int element1, int element2) {
	int pivotIdx = element1;
	element1 = element2;
	element2 = pivotIdx;
}

void QuickSort(int stack[], int low, int high) {
	if (low < high) {
		int pivotIdx = partition(stack, low, high);
		QuickSort(stack, low, pivotIdx - 1);
		QuickSort(stack, pivotIdx + 1, high);
	}
}


int main()
{
	int stack[STACK_MAX_SIZE];
	stack[STACK_MAX_SIZE - 1] = 0;

	for (size_t i = 0; i < STACK_MAX_SIZE - 1; ++i)
	{
		PushBack(stack, i);
	}
	assert(stack[STACK_MAX_SIZE - 1] == STACK_MAX_SIZE - 1);

	// bitshift 연산을 검색해볼 것. bitshift divided by 2라고 구글링
	for (size_t i = 0; i < (STACK_MAX_SIZE >> 1) - 1; ++i)
	{
		Pop(stack);
	}
	assert(stack[STACK_MAX_SIZE - 1] == (STACK_MAX_SIZE >> 1));

	for (size_t i = 0; i < STACK_MAX_SIZE - 1; ++i)
	{
		size_t index = Find(stack, i);
		if (i < (STACK_MAX_SIZE >> 1))
		{
			assert(index == i);
			std::cout << "Element " << i << " is at index " << index << std::endl;
		}
		else
		{
			assert(index == -1);
			std::cout << "Element " << i << " is not in the stack" << std::endl;

		}
	}

	srand(time(NULL));
	for (size_t i = 0; i < (STACK_MAX_SIZE >> 1); ++i)
	{
		PushBack(stack, rand() % STACK_MAX_SIZE + STACK_MAX_SIZE);
	}
	assert(stack[STACK_MAX_SIZE - 1] == STACK_MAX_SIZE - 1);

	QuickSort(stack, 0, static_cast<int>(STACK_MAX_SIZE - 2));

	for (size_t i = 0; i < stack[STACK_MAX_SIZE - 1]; ++i)
	{
		for (size_t j = 0; j < stack[STACK_MAX_SIZE - 1]; ++j)
		{
			if (j < i)
			{
				assert(stack[j] <= stack[i]);
			}
			else
			{
				assert(stack[i] <= stack[j]);
			}
		}
	}

	return 0;
}








