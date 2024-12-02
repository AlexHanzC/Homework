#include"express_evaluator.h"

void calculator(string &input)
{
    int flag = 1;
    vector<string> expressor;
    vector<string> suffix;

    split(expressor,input);

    check_expressor(expressor,flag);

    if(flag)
    {
        suffix = suffixexpressor(expressor);        
        calculate(suffix , flag);
    }
    else return;    
}

int main() {
    string str;
    cin >> str;
    calculator(str);
}