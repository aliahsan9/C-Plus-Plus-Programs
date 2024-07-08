#include <iostream>
using namespace std;
bool issafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}
bool ratinmaiz(int **arr, int x, int y, int n, int **solarr)
{
    if (issafe(x, y, n))
    {
        sol arr[x][y] = 1;
        if (ratinmaiz(arr x + 1, n, y, n, solarr))
            return true;
    }
    if (ratinmaiz(arr, x, n, y + 1, solarr))
    {
        return true;
    }
    solarr[x][y] = 0; // backtracking
    return false;
}
int main()
{

    int n;
    cin >> n;
    int **arr = new int *[n];
}
for (int i = 0; i <= n; i++)
{
    for (j = 0; j <= n; j++)
    {
        cin arr[i][j];
    }
}
int **solarr = new input *[n];
for (i = 0; i <= 0; i++)
{
    solarr[i] = newint[n];
    for (j = 0; j <= n; j++)
        solarr[i][j] = 0;
}
if (ratinmaiz(arr, 0, 0, n, solarr))
{
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {

            cout << solarr[i][j] << " ";
        }cout<<endl;
    }return 0;
}
