/*
BFS traversal of graph (Function Problem)
Show Topic Tags          Adobe    Amazon    Flipkart    Microsoft    SAP-Labs
Write a function to print the bredth first traversal for a graph from a given source s.

Input:
The task is to complete the function BFS which takes 3 arguments an integer denoting the starting node (s) of the bfs travel , a  graph (g)  and an array of visited nodes (vis)  which are initially all set to false . 
There are multiple test cases. For each test case, this method will be called individually.

Output:
The function should print the breath first traversal for the graph from the given source.

Note : The expected output button always produces BFS starting from node 1.

Constraints:
1 <=T<= 100
1 <=Number of  edges<= 100

Example:
Input:
1
4
1 2 1 3 1 4 3 5

Output:
1 2 3 4 5    //bfs from node 1
 
There is  one test cases.  First line of each test case represent an integer N denoting no of edges and then in the next line N pairs of values a and b are fed which denotes there is a unidirectional edge from a to b .

*/




void bfs(int s, vector<int>adj[], bool vis[])
{
    queue<int> q ; 
    
    q.push(s) ;  
    vis[s] =true; 
    
    while(!q.empty())
    {
        int u  = q.front() ;
        q.pop() ; 
        
        cout<<u<< " " ;
        for(int i=0; i<adj[u].size(); i++)
        {
            if(!vis[adj[u][i]])
            {
                q.push(adj[u][i]) ; 
                vis[adj[u][i]] =true;  
            }
        }
    }
}

