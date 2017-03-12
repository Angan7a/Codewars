int solution(int number)
{
    int a3 = (number - 1) / 3, a5 = (number - 1) / 5, w3 = 0, w5 = 0;
    int a3_5 = (number - 1) / 15, w3_5 = 0;
    for (int i = 1; i <= a3; i++) {
        w3 += 3 * i;
    }
     for (int i = 1; i <= a5; i++) {
        w5 += 5 * i;
    }
    for (int i = 1; i <= a3_5; i++) {
        w3 -= 15 * i;
    }
    return w3 + w5 + w3_5;
}
