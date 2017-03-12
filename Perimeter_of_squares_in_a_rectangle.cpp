typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n)
  {
      ull sum_b = 1, sum_bb = 1, result = 2, sum;
      for (int i = 1; i < n; i++) {
          sum = sum_b + sum_bb;
          sum_bb = sum_b;
          sum_b = sum;
          result +=  sum;
      }
      return result * 4;
  };
};

 
