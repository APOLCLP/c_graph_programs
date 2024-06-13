bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map <int,vector<int>> hash;
    for(auto it : edges){
        hash[it[0]].push_back(it[1]);
        hash[it[1]].push_back(it[0]);
    }
    
    vector<bool> vis(n, false);
    
       vector<int> bfs;
       
       queue<int> level;
       level.push(source);
       
       while(!level.empty()){
           int num = level.front();
           level.pop();
           if(num==destination)return true;
           for(auto it :hash[num]){
               if(!vis[it]){
                  vis[it]=true;
                  level.push(it);
               }
               
           }
           
           
       }
       
       return false;
    }