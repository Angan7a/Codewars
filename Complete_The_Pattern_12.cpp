std::string pattern(int n)
{
    std::string output;
    if (n < 1) {
        return "";
    }
    for (int a = 0; a < n - 1; a++) {
        output += std::string(a,' ') +
                 std::to_string((a + 1) % 10) +
                 std::string((n - a)*2 - 3 ,' ') +
                 std::to_string((a + 1) % 10) +
                 std::string(a,' ') +
                 "\n";
    }
    output += std::string(n - 1, ' ') +
              std::to_string(n % 10) +
              std::string(n - 1, ' ') +
              "\n";
    for (int a = n - 2; a >= 0; a--) {
        output += std::string(a,' ') +
                 std::to_string((a + 1) % 10) +
                 std::string((n - a)*2 - 3 ,' ') +
                 std::to_string((a + 1) % 10) +
                 std::string(a,' ') +
                 "\n";;
    }
    output.pop_back();
    return output;
}
