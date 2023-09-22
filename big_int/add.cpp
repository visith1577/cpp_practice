#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

char digit_to_char(int digit)
{
    return digit + '0';
}

int char_to_digit(char ch)
{
    return ch - '0';
}

string add_numbers(string s1, string s2)
{
    string result = " ";

    if(s1.length() > s2.length())
    {
        swap(s1, s2);
    }

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());


    int carry = 0;
    for(int i = 0; i < s1.length(); i++)
    {
        int d1 = char_to_digit(s1[i]);
        int d2 = char_to_digit(s2[i]);
        int sum = d1 + d2 + carry;
        int output_digit = sum % 10;
        carry = sum/10;

        result.push_back(digit_to_char(output_digit));
    }

    for(int i = s1.length(); i < s2.length(); i++)
    {
        int d2 = char_to_digit(s2[i]);
        int sum = d2 + carry;
        int output_sum = sum % 10;
        carry = sum/10;
        result.push_back(digit_to_char(output_sum));
    }

    if(carry)
    {
        result.push_back('1');
    }

    reverse(result.begin(), result.end());
    return result;

}

int main()
{
    string s1, s2;

    cin >> s1 >> s2;

    string result = add_numbers(s1, s2);

    cout << result << endl;
}