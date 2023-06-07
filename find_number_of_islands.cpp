void dfs(int row, int col, vector<vector<int>>&visited, int** arr, int n, int m){
   visited[row][col] = 1;

   for(int i = -1; i<=1; i++){
      for(int j=-1; j<=1; j++){
         int nrow = row + i;
         int ncol = col + j;

         if(nrow >= 0 && ncol >=0 && nrow < n && ncol<m && !visited[nrow][ncol] && arr[nrow][ncol]){
            dfs(nrow,ncol,visited,arr,n,m);
         }
      }
   }
}


int getTotalIslands(int** arr, int n, int m)
{
   vector<vector<int>>visited(n,vector<int>(m,0));

   int cnt = 0;

   for(int i=0;i<n; i++){
      for(int j=0; j<m; j++){
         if(!visited[i][j] && arr[i][j]){
            cnt++;
            dfs(i,j,visited,arr,n,m);
         }
      }
   }
   return cnt;
}
