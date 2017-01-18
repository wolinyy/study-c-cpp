void printArray05(int array[], int len)
{
	int i = 0;

	for(i=0; i<len; i++)
	{
		printf("%d ", array[i]);
	}

	printf("\n");
}

void swap5(int array[], int i, int j)
{
	int temp = array[i];
	array[i] = array[j];
	array[j] = temp;
}
//���ֹ��� ��һ��Ԫ�ص����ᣬ�ֳ�2����Ч������
int partition(int array[], int low, int high)
{
	int pv = array[low];

	while( low < high )
	{
		while( (low < high) && (array[high] >= pv) )
		{
			high--; //�Ȼ�׼�󣬱��������ұߣ�����highǰ�ƶ�
		}
		swap5(array, low, high);
		while( (low < high) && (array[low] <= pv) )
		{
			low++;
		}
		swap5(array, low, high);
	}
	//���������λ�á�������Ҫ
	return low;
}

//��n��Ԫ�� ���˼��� ���ٵ�1��Ԫ�ص�ʱ����Ϊ1��Ԫ�ؿ��Կ���һ�����������

void QSort2(int array[], int low, int high)
{
	if( low < high )
	{
		int pivot = partition(array, low, high);
		
		//��������1����
		QSort2(array, low, pivot-1);
		//��������2����
		QSort2(array, pivot+1, high);
	}
}

void QSort(int array[], int low, int high)
{
	if( low < high )
	{
		int pivot = partition(array, low, high);

		//��������1����
		QSort2(array, low, pivot-1);
		//��������2����
		QSort2(array, pivot+1, high);
	}
}

void QuickSort(int array[], int len) // O(n*logn)
{
	QSort(array, 0, len-1);
}

int main()
{
	//int array[] = {12, 5, 433, 253, 216, 7};
	//int array[] = {12, 5, 433};
	int array[] = {12, 5};
	int len = sizeof(array) / sizeof(*array); 
	printArray05(array, len);
	QuickSort(array, len);
	printArray05(array, len);
	system("pause");
	return 0;
}
