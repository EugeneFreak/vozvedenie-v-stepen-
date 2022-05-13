
#include <iostream>
using namespace std;
int power(int, unsigned);

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
   
    cout << power(a, b);
    
}

int power(int x, unsigned p) {
    int answer;
    answer = x;
    /* считаем answer */
    if (p == 0) {
        return 1;
    }
    else if (p == 1) {
        return x;
    }
    else {
        for (int i = 1; i < p; i++) {
            answer = answer * x;
        }
    }
    return answer;
}