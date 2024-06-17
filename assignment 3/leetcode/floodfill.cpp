vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int x = image[sr][sc];
            if (x == color) return image;
            int n = image.size();
            int m = image[0].size();
            int row ,col,nrow,ncol,k;

            int drow[] = {1, -1, 0, 0};
                int dcol[] = {0, 0, 1, -1};
            
            queue<pair<int, int>> q;
            q.push({sr, sc});
          
            while (!q.empty()) {
                row= q.front().first;
                col = q.front().second;
                image[row][col] = color;
                q.pop();
                
                // Define the 8 possible directions (N, S, E, W, NE, NW, SE, SW)
                
                
                for (k = 0; k < 4; k++) {
                    nrow = row + drow[k];
                    ncol = col + dcol[k];
                    
                    // Check if the neighboring cell is within bounds, unvisited, and land
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m   && image[nrow][ncol] == x) {
                        
                        q.push({nrow, ncol});
                    }
                }
            }
            return image;
    }