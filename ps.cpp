#include<iostream>
#include<string>

using namespace std;

bool isDig(char c){
    if (c>=48 && c<=57)
    {
        return true;
    }
    return false;
    
}


int main(){
    string str, strNum1 = "", strNum2 = "";
    int num1, num2, result;
    char c;
    bool flag = false;
    cin>>str;
    int size = str.length();

    for (int i = 0; i < size; i++)
    {
        if (!isDig(str[i]))
        {
            c = str[i];
            flag = true;
        }
        else if (flag)
        {
            strNum2 += str[i];
        }
        else
        {
            strNum1 += str[i];
        }
    }
    
    num1 = stoi(strNum1);
    num2 = stoi(strNum2);


    switch (c)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    }

    cout<<result<<endl;


    return 0;
}
