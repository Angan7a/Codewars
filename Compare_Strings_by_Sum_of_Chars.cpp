bool compare(std::string s1, std::string s2)
{
    //just do it!
    int sum1 = 0, sum2 = 0;
    if (s1.empty() || s2.empty()) {
        return 1;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] > 90) {
            s1[i] -= 32;
        }
        if (s1[i] < 65 || s1[i] > 97) {
            return 1;
        }
        sum1 += s1[i];
    }
    for (int i = 0; i < s2.length(); i++) {
        if (s2[i] > 90) {
            s2[i] -= 32;
        }
        if (s2[i] < 65 || s2[i] > 97) {
            return 1;
        }
        sum2 += s2[i];
    }
    if (sum1 == sum2) {
        return 1;
    } else {
        return 0;
    }
}
