#include <iostream>
using namespace std;
/*
	#堆排序#%
          #数组实现#%
*/
//#筛选算法#%
void shift(int d[], int ind, int len)
{
	//#置i为要筛选的节点#%
	int i = ind;

	//#c中保存i节点的左孩子#%
	int c = i * 2 + 1; //#+1的目的就是为了解决节点从0开始而他的左孩子一直为0的问题#%

	while(c < len)//#未筛选到叶子节点#%
	{
		//#如果要筛选的节点既有左孩子又有右孩子并且左孩子值小于右孩子#%
		//#从二者中选出较大的并记录#%
		if(c + 1 < len && d[c] < d[c + 1])
			c++;
		//#如果要筛选的节点中的值大于左右孩子的较大者则退出#%
		if(d[i] > d[c]) break;
		else
		{
			//#交换#%
			int t = d[c];
			d[c] = d[i];
			d[i] = t;
			//
			//#重置要筛选的节点和要筛选的左孩子#%
			i = c;
			c = 2 * i + 1;
		}
	}

	return;
}

void heap_sort(int d[], int n)
{
	//#初始化建堆, i从最后一个非叶子节点开始#%
	for(int i = (n - 2) / 2; i >= 0; i--)
		shift(d, i, n);

	for(int j = 0; j < n; j++)
	{
                //#交换#%
		int t = d[0];
		d[0] = d[n - j - 1];
		d[n - j - 1] = t;

		//#筛选编号为0 #%
		shift(d, 0, n - j - 1);
		
	}
}

int main()
{
	int a[] = {3, 5, 3, 6, 4, 7, 5, 7, 4}; //#QQ#%

	heap_sort(a, sizeof(a) / sizeof(*a));

	for(int i = 0; i < sizeof(a) / sizeof(*a); i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
    return 0;
}
