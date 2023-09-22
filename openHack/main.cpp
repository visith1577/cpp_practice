#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int minimumMoves(vector<string> grid, int startX, int startY, int goalX, int goalY) {

    int col = grid[0].size();
    int row = grid.size();

    int pathG[row][col];
    pair<int, int> prev[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (grid[i][j] == 'X') {
                pathG[i][j] = 3;
                continue;
            }

            pathG[i][j] = 1;
        }
    }

    queue<pair<int, int>> q;

    q.push(make_pair(startX, startY));
    pathG[startX][startY]++;

    while (!q.empty()) {
        pair<int, int> coord = q.front();
        q.pop();

        for (int i = coord.second - 1; i >= 0; i--) {
            if (pathG[coord.first][i] == 1) {
                q.push(make_pair(coord.first, i));
                prev[coord.first][i] = coord;
                pathG[coord.first][i]++;
            } else
                break;
        }

        for (int i = coord.first - 1; i >= 0; i--) {
            if (pathG[i][coord.second] == 1) {
                q.push(make_pair(i, coord.second));
                prev[i][coord.second] = coord;
                pathG[i][coord.second]++;
            } else
                break;
        }

        for (int i = coord.second + 1; i < col; i++) {
            if (pathG[coord.first][i] == 1) {
                q.push(make_pair(coord.first, i));
                prev[coord.first][i] = coord;
                pathG[coord.first][i]++;
            } else
                break;
        }

        for (int i = coord.first + 1; i < row; i++) {
            if (pathG[i][coord.second] == 1) {
                q.push(make_pair(i, coord.second));
                prev[i][coord.second] = coord;
                pathG[i][coord.second]++;
            } else
                break;
        }

        if (prev[goalX][goalY].first != 0 && prev[goalX][goalY].second != 0)
            break;
    }

    stack<pair<int, int>> container;
    container.push(make_pair(goalX, goalY));

    pair<int, int> temp = prev[goalX][goalY];
    while (true) {
        if (temp.first == startX && temp.second == startY) {
            container.push(temp);
            break;
        } else {
            container.push(temp);
            temp = prev[temp.first][temp.second];
        }
    }

    return container.size() - 1;
}

int main() {
    int n;
    cin >> n;

    vector<string> grid(n);

    for (int i = 0; i < n; i++) {
        string grid_item;
        cin >> grid_item;
        grid[i] = grid_item;
    }

    int startX;
    int startY;
    int goalX;
    int goalY;
    cin >> startX >> startY >> goalX >> goalY;
    int result = minimumMoves(grid, startX, startY, goalX, goalY);

    cout << result << endl;

    return 0;
}