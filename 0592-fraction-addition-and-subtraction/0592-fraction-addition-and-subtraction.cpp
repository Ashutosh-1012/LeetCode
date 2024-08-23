class Solution {
public:
    string fractionAddition(string expression) {
        vector<int> numer, denom;
        int n=expression.length();
        int i=0;
        while(i<n){
            int sign=1;
            if(expression[i]=='-') sign=-1, i++;
            else if(expression[i]=='+') sign=1, i++;
            string numerator="";
            while(isdigit(expression[i])){
                numerator+=expression[i];
                i++;
            }
            int N=sign*stoi(numerator);
            string denominator="";
            if(i<n && expression[i]=='/'){
                i++;
                while(isdigit(expression[i])){
                    denominator+=expression[i];
                    i++;
                }
            }
            else denominator="1";
            int D=stoi(denominator);
            numer.push_back(N);
            denom.push_back(D);
        }
        int LCM=1;
        for(int i=0;i<denom.size();i++){
            LCM*=denom[i];
        }
        int sum=0;
        for(int i=0;i<numer.size();i++){
            sum+= (numer[i] * (LCM / (denom[i])));
        }
        if(sum==0) LCM=1;
        
        int a=abs(sum);
        int b=abs(LCM);
        while(b!=0){
            int temp=b;
            b=a%b;
            a=temp;
        }
        int GCD=a;
        sum/=GCD; LCM/=GCD;
        string ans=to_string(sum)+ "/" + to_string(LCM);
        return ans;
    }
};