#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix;
    matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    int m = matrix.size(), n = matrix[0].size();
    int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
    vector<int> ans;

    while (srow <= erow && scol <= ecol)
    {
        //<-----------Top Boundary------------->
        for (int i = scol; i <= ecol; i++)
        {
            ans.push_back(matrix[srow][i]);
        }
        //<-----------Right Boundary------------->
        for (int j = srow + 1; j <= erow; j++)
        {
            ans.push_back(matrix[j][ecol]);
        }
        //<-----------Bottom Boundary------------->
        for (int k = ecol - 1; k >= scol; k--)
        {
            if (srow == erow)
                break;
            ans.push_back(matrix[erow][k]);
        }
        //<-----------Left Boundary------------->
        for (int l = erow - 1; l >= srow + 1; l--)
        {
            if (scol == ecol)
                break;
            ans.push_back(matrix[l][scol]);
        }
        srow++;
        erow--;
        scol++;
        ecol--;
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}