template<class TYPE>
int getLengthOfMissingArray(std::vector<std::vector<TYPE>> arrayOfArrays)
{
    int sum = 0, max = 0, z;
    for (int i = 0; i < arrayOfArrays.size(); i++) {
        z = arrayOfArrays[i].size();
        sum += z;
        if (z > max ) {
            max = z;
        }
    }
    return max*(max + 1)/2 - sum;
}
