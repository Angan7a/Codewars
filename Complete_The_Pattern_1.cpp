//string header file and namespace are already included for you
string pattern(int n){
    string out, a;
    if (n < 1)
        return "";
    for (int i = 1; i <= n; i++) {
        a = to_string(i);
        for (int j = 0; j < i; j++)
            out += string(a);
        out += '\n';
    }
    out.pop_back();
    return out;
}
