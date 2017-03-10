#include<vector>

std::string sumLength(std::vector<int> input)
{
    int sum_p = 0;
    int number_n = 0;
    int n_zero = 0;
    std::string output;

    for (int i = 0; i < input.size(); i++) {
        if (input[i] > 0) {
            sum_p += input[i];
        } else if (input[i] < 0) {
            number_n++;
        } else {
            n_zero++;
        }
    }
    number_n += (n_zero + 1) / 2;
    output = std::to_string(sum_p) + ' ' + std::to_string(number_n);
    return output;
}
