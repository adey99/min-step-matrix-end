# min-step-matrix-end
Minimum steps required to reach the end of a matrix

# Problem Statement

Given a 2d-matrix consisting of positive integers i.e arr[i][j] has two fields (right,down) which signifies moves to be made to right and down direction respectively, the task is to find the minimum number of steps required to reach the end(rightmost-bottom cell) of the matrix from (0,0). If we are at cell (i, j) we can go to cells (i, j+arr[i][j].right) or (i+arr[i][j].down, j). We can not go out of bounds. If no path exists, print -1.

# Time Complexity

O(n^2)
