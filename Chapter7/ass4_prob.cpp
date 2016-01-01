double probability(unsigned number, unsigned picks, unsigned special)
{
	double result = special;
	unsigned n;
	unsigned p;
	for (n = number, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}
