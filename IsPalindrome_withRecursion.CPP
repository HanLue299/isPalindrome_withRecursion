#include<iostream>
#include<cstring>
using namespace std;

bool isPalRec(char str[],
              int s, int e)
{
    if (s == e)
    return true;
 
    if (str[s] != str[e])
    return false;
 
    if (s < e + 1)
    return isPalRec(str, s + 1, e - 1);
 
    return true;
}
 
bool isPalindrome(char str[])
{
    int n = strlen(str);
     
    if (n == 0)
        return true;
     
    return isPalRec(str, 0, n - 1);
}
 
int main()
{
  int n;
  char str[100001];
  cin >> n;
  cin.ignore();
  cin.getline(str, 100001);
 
    if (isPalindrome(str))
    cout << "YES";
    else
    cout << "NO";
 
    return 0;
}
