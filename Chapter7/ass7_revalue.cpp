void revalue(double r, double ar[], double * ar_end)
{
	for (double * temp = ar; temp < ar_end; temp++)
		(*temp) *= r;
}
