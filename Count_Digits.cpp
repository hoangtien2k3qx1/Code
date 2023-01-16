
// có 4 cách đến số chữ số của n
// VD: 12345 -> count = 5



//! C1:
int countDigit(long long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}



//! C2:
int countDigit(long long n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}



//! C3:
int countDigit(long long n) {
  return floor(log10(n) + 1);
}



//! C4:
void count_digits(int n)
{
    string num = to_string(n);
    cout << num.size() << endl;
}
