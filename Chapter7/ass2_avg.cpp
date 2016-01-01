double avg(double * scores, int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
		sum += scores[i];
	return sum/n;
}
