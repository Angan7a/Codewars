class Kata
{
public:
    std::vector<int> foldArray(std::vector<int> array, int runs)
    {
        std::vector<int> a = array;
        for (int i = 0; i < runs; i++) {
           array.clear();
           array = a;
           a.clear();
           for (int j = 0; j < array.size() / 2; j++) {
               a.push_back(array[j] + array[array.size() - j - 1]);
           }
           if (array.size() % 2) {
               a.push_back(array[array.size() / 2]);
           }
        }
        return a;
    }
};
