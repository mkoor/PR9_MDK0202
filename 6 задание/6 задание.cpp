using namespace std;
#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "Russian");

    string s, ss;
    int n = 0, p = 0;
    cout << "Введите строку: ";
    cin >> s;
    cout << "Введите подстроку: ";
    cin >> ss;
    while ((p = s.find(ss, p)) != s.npos) {
        ++n;
        ++p;
    }
    cout << "Подстрока " << ss << " в строке " << s << " содержит " << n << " вхождений" << endl;
    return 0;
}
