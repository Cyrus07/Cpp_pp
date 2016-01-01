void Reverse_array(double * arr, int n)
{
	int i, j;
	double temp;
	for (i=0, j=n-1; i<j; i++, j--)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}
