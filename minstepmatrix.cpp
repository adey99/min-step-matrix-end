#include <iostream>
#include <queue>
#include <utility>
using namespace std;
struct custom_matrix{
	int right,down;
};
int minSteps(custom_matrix arr[][10],int nrows,int ncols)
{
	bool v[nrows][ncols] = { 0 };
	queue<pair<int, int> > q;
	q.push({ 0, 0 });
	int depth = 0;
	while (q.size() != 0) {
		int x = q.size();
		while (x--) {
			pair<int, int> y = q.front();
			int i = y.first, j = y.second;
			q.pop();
			if (v[i][j])
				continue;
			if (i == nrows - 1 && j == ncols - 1)
				return depth;
			v[i][j] = 1;
			if (i + arr[i][j].down < nrows)
				q.push({ i + arr[i][j].down, j });
			if (j + arr[i][j].right < ncols)
				q.push({ i, j + arr[i][j].right });
		}
		depth++;
	}

	return -1;
}
int main()
{
	custom_matrix arr[10][10];
	int nrows,ncols;
	cout<<"\nEnter the number of rows:";
	cin>>nrows;
	cout<<"\nEnter the number of columns:";
	cin>>ncols;
	for(int i=0;i<nrows;i++)
		for(int j=0;j<ncols;j++){
			cout<<"\nEnter entries(right down) for ("<<i<<" "<<j<<") cell of matrix:";
			cin>>arr[i][j].right>>arr[i][j].down;
		}
	cout <<"\nMinimum steps required to reach end of matrix is:"<< minSteps(arr,nrows,ncols)<<endl;
	return 0;
}
