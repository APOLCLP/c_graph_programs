
    bool isValid(string str) {
        stack<int> seq;

        for(int i=0;i<str.length();i++){
            if(str[i]=='('||str[i]=='{'||str[i]=='['){
                seq.push(str[i]);
            }
            else{
                if(seq.empty())return false;
                else {if(str[i]==')'&&seq.top()=='(')seq.pop();
                else if(str[i]=='}'&&seq.top()=='{')seq.pop();
                else if(str[i]==']'&&seq.top()=='[')seq.pop();

                else return false;}
            }

           
        } 
        if(seq.empty())return true;
        return false;


    }
