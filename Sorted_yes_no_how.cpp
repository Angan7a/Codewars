std::string is_sorted_and_how(std::vector<int> array)
{
    for (int i = 1; i < array.size(); i++) {
        if (array[i - 1] < array[i]) {
            for (int t = i; t < array.size() -1; t++) {
                if (array[i] > array[i + 1]) return "no";
            }
            return "yes, ascending";
        }
        if (array[i - 1] > array[i]) {
            for (int t = i; t < array.size() -1; t++) {
                if (array[i] < array[i + 1]) return "no";
            }
            return "yes, descending";
        }
    }
    return ""; // TODO: implementation
}
