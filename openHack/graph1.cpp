#include <bits/stdc++.h>
using namespace std;


// to find the path from
// top left to bottom right
bool isPath(vector<string> grid, int startX, int startY, int endX, int endY)
{
    int col = grid[0].size();
    int row = grid.size();
    int pathG[row][col];
    pair<int, int> prev[row][col];

    for(int i = 0; i<row; i++){
        for(int j = 0; j<col; j++){
            if(grid[i][j] == 'X'){
                pathG[i][j] = 3;
                continue;
            }
            pathG[i][j] =1;
        }
    }

    queue<pair<int, int>> q;

    q.push(ma)
}

// Driver Code
int main()
{
    int n;
    cin>>n;
    int startX, startY, endX, endY;
    vector<string> grid;

    for(int i = 0; i<n; i++){
        string grid_item;
        cin>> grid_item;
        grid[i]=grid_item;
    }

    cin>>startX>>startY>>endX>>endY;
    cout<<isPath(grid, startX, startY, endX, endY)<<endl;

    return 0;
}