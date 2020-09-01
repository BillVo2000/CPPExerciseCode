#include <iostream>
#include <cmath>
using namespace std;

void sortingArrayAscending(int data[], int count)
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
}

float median(int data[], int count) {
    sortingArrayAscending(data,count);
    float Median = 0;

    if (count % 2 == 0)
        Median = (data[count/2] + data[(count/2)-1])/2.00;
    else
        Median = data[count/2];
    return Median;
}

float mean(int data[], int count) {
    sortingArrayAscending(data,count);
    float Mean = 0.00;
    float sum = 0.00;
    for (int i = 0; i < count; i++)
    {
        sum = sum + data[i];
    }
    Mean = sum / count;
    return Mean;
}


float variance(int data[], int count)
{
    mean(data,count);
    float numerator = 0;
    float denominator = 0;

    for (int i = 0; i < count; i++)
    {
        numerator = numerator + ((data[i] - mean(data, count))*(data[i] - mean(data, count)));
    }
    denominator = count -1;
    return numerator/denominator;
}

float standardDeviation(int data[], int count)
{
    return sqrt(variance(data, count)) ;
}


int main()
{
	int data[] = {10, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 65};
    int count = 12;
    cout << median(data, count) << endl;
    cout << mean(data, count) << endl;
    cout << variance(data, count) << endl;
    cout << standardDeviation(data, count);

	return 0;
}
