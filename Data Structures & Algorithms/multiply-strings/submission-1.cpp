class Solution {
public:
    string multiply(string num1, string num2) {
        long long n=stoi(num1);
        long long n1=stoi(num2);
        long long a=n*n1;
        return to_string(a);
    }
};
