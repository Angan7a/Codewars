class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
      std::vector<std::string> B;
      for (int i = 0; i < nFloors; i++)
      {
        B.push_back(std::string(nFloors - i - 1,' ') +
                      std::string((i * 2) + 1,'*') +
                      std::string(nFloors - i - 1,' '));
      }
      return B;
    }
};

