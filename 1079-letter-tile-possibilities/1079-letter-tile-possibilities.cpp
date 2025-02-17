class Solution {
public:

    void solve(string tiles, int& count, int i){
        count++;
        for(int ind=i; ind<tiles.length(); ind++){
            if(ind != i  and tiles[ind] == tiles[i]) {
                continue;
            }
            swap(tiles[ind], tiles[i]);
            solve(tiles, count, i+1);
        }
    }


    int numTilePossibilities(string tiles) {
         sort(tiles.begin(),tiles.end());
        int answer=-1;
        solve(tiles, answer, 0);
        return answer;
    }
};