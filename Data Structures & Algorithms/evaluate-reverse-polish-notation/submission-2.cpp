class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>a;
        int n=tokens.size();
        for(int i=0;i<n;i++){
            if(tokens[i]=="+"){
                int b=a.top();
                a.pop();
                int c=a.top();
                a.pop();
                a.push(c+b);
            }
            else if(tokens[i]=="-"){
                int b=a.top();
                a.pop();
                int c=a.top();
                a.pop();
                a.push(c-b);
            }
             else if(tokens[i]=="*"){
               int b=a.top();
                a.pop();
                int c=a.top();
                a.pop();
                a.push(c*b); 
            }
             else if(tokens[i]=="/"){
                int b=a.top();
                a.pop();
                int c=a.top();
                a.pop();
                a.push(c/b);
            }
             else{
                a.push(stoi(tokens[i]));
             }
        }
        return a.top();
    }
};
