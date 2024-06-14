int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    int vis[V]={0};
       
       
       
       queue<pair<int,int>> q;
       q.push({0,0});
       
       while(!q.empty()){
           int num = q.front().first;
           int level = q.front().second;
           q.pop();
           if(num==X) return level;
           
               for(auto it :adj[num]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push({it,level+1});
                    }

            }
           
           
           
       }
       
       return -1;
	}