class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> matching;

        for(int i = 0; i < words.size();i++)
        {

            for(int j = 0; j < words.size();j++)
            {
                if(words[i].size() > words[j].size() && words[i] != words[j])
                {

                    if(words[i].find(words[j]) != -1)
                    {
                        auto it = std::find(matching.begin(), matching.end(), words[j]);
                        if(it !=matching.end())
                        {

                        }
                        else
                        {
                        matching.push_back(words[j]);

                        }

                    }
                }
            }
        }

        return matching;




    }
};