int solve(int A, vector<vector<int> > &B) {
    map <int,vector<int>> hash;
    for(auto it : B){
        hash[it[0]].push_back(it[1]);
    }
    
    int vis[A+1]={0};
       
       vector<int> bfs;
       
       queue<int> level;
       level.push(1);
       
       while(!level.empty()){
           int num = level.front();
           level.pop();
           if(num==A)return 1;
           for(auto it :hash[num]){
               if(!vis[it]){
                  vis[it]=0;
                  level.push(it);
               }
               
           }
           
           
       }
       
       return 0;
}


