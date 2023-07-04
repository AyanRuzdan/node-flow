#include <bits/stdc++.h>
using namespace std;
void printList(vector<int> v)
{
    for (auto x : v)
        cout << x << ", ";
    cout << endl;
}
int main()
{
    vector<int> numbers;
    fstream source("input.txt");
    int number;
    while (source >> number)
        numbers.push_back(number);
    source.close();
    cout << " ||| ";
    for (auto x : numbers)
        cout << x << " ||| ";
    fstream destination("output.txt");
    for (auto &n : numbers)
        destination << (n + 32) << endl;
    destination.close();
    return 0;
}