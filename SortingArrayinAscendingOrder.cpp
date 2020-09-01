#include <iostream>
using namespace std;

void SortingArray (int data[], int count)
{
    int temp;
    for(int i=0;i<count;i++)
	{
		for(int j=i+1;j<count;j++)
		{
			if(data[i]>data[j])
			{
				temp  =data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}
	}
	for(int i=0;i<count;i++)
        cout << data[i] << '\t';

}

int main()
{
	int data[] = {17, 16, 3, 98, 43, 35, 18, 19, 35, 24, 22, 75};
    int count = 12;
    SortingArray(data,count);

	return 0;
}
