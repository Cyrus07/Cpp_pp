#ifndef SALES_H_
#define SALES_H_
namespace SALES
{
	class Sales
	{
		private:
			enum {QUARTERS = 4};
			double sales[QUARTERS];
			double average;
			double max;
			double min;
		public:
			Sales(const double ar[], int n);
			Sales();
			double Average();
			double Max();
			double Min();
			void Show();
	};
}
#endif
