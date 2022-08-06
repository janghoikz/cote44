#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int temp = 1;
    int count = 1;
    for (int i = 2; i <= n; i++)
    {
        temp += i;
        count++;
        if (temp > n)
        {
            break;
        }
        
        if ((n - temp) % count == 0)
        {
            answer++;
        }
    }
    return answer;
}

int main()
{
    solution(15);
}