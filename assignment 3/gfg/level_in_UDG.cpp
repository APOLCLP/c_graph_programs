int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    int vis[V]={0};
       
       
       int level=0;
       queue<int> q;
       q.push(0);
       
       while(!q.empty()){
           
           
            
            int size = q.size();
            for(int i=0;i<size;i++){
                int parent = q.front();
                
                q.pop();
                if(parent ==X)return level;
                

               for(auto it :adj[parent]){
               if(!vis[it]){
                  vis[it]=1;
                  q.push(it);
               }
               
           }
           


            }level++;
           
           
           
       }
       
       return -1;
	}