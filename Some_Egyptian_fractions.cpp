using namespace std;

class Decomp
{
public:
static void printEgyptian(long nr, long dr, string &out)
{
    if (nr == 0 || dr == 0) {
        return;
     }
    if (dr%nr == 0) {
        out += "1/" + to_string(dr / nr);
        return;
    }
    if (nr%dr == 0) {
        out += to_string(nr / dr);
        return;
    }
    if (nr > dr) {
        out += std::to_string(nr / dr) + ", ";
        printEgyptian(nr%dr, dr, out);
        return;
    }

     long n = dr/nr + 1;
     cout << dr/nr <<endl;
     out += "1/" + to_string(n)+ ", ";
     printEgyptian(nr*n-dr, dr*n, out);
 }

  static string decompose(const string &nrStr, const string &drStr)
  {
      string::size_type sz;
      string output;
      long nr = stol(nrStr, &sz);
      long dr = stol(drStr, &sz);
      output += "[";
      printEgyptian(nr, dr, output);
      output += "]";
      return output;
  };
};

