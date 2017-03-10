string encrypt(string text, int rule) {
    for (int i = 0; i < text.length(); i++) {
        text[i] += rule;
    }
    return text;
};
