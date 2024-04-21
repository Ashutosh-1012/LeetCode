class Solution {
public:
    vector<int>parent,size;
    void Union(int node1, int node2){
        int parent1=find(node1);
        int parent2=find(node2);
        if(parent1!=parent2){
            if(size[parent1]>size[parent2]){
                size[parent1]+=size[parent2];
                parent[parent2]=parent1;
            }
            else{
                size[parent2]+=size[parent1];
                parent[parent1]=parent2;
            }
        }
    }
    int find(int node){
        if(node==parent[node]) return node;
        return parent[node]=find(parent[node]);
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        parent.resize(n);
        size.resize(n,1);
        for(int i=0; i<n; i++){
            parent[i]=i;
        }
        for(auto pair: edges){
            Union(pair[0],pair[1]);
        }
        return find(source)==find(destination);
    }
};