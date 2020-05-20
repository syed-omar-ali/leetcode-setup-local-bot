#include<iostream>
#include<vector>
#include<map>
#include<unordered_map>
#include<sstream>


using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
TreeNode * constructTreeFromList(vector<string>);
TreeNode * constructTree(vector<int>&, int);
vector<int> readIntgerList(string);
TreeNode * readTree(string inp);

//MACROS
#define null NULL;


int main(){
    cout << endl;
    

    cout << endl;
    return 0;
}

TreeNode * constructTreeFromList(vector<string> inputString){
    vector<int> input;
    for(string s : inputString){
        int x;
        if(s == "null"){
            x = INT_MIN;
        }else{
            stringstream integer(s); 
            integer >> x;
        } 
        input.push_back(x);
    }
    return constructTree(input,0);
}

TreeNode * constructTree(vector<int> &input, int curIdx){
    if(curIdx >= input.size() || input[curIdx] == INT_MIN)
        return null;
    TreeNode * node = new TreeNode;
    node->val = input[curIdx];
    node->left = constructTree(input,2*curIdx+1);
    node->right = constructTree(input,2*curIdx+2);
    return node;
}

vector<int> readIntgerList(string inp){
    vector<int> ans;
    inp.erase(0,1);
    inp.erase(inp.size()-1,1);
    int delimeterIdx;
    int valInt;
    while(inp != ""){
        delimeterIdx = inp.find(',');
        if(delimeterIdx != string::npos){
            string val = inp.substr(0,delimeterIdx);
            inp.erase(0,delimeterIdx+1);
            stringstream integer(val); 
            integer >> valInt;
            ans.push_back(valInt);
        }else{
            stringstream integer(inp); 
            integer >> valInt;
            ans.push_back(valInt);
            inp = "";
        }
        
    }
    return ans;
}
TreeNode * readTree(string inp){
    vector<string> ans;
    inp.erase(0,1);
    inp.erase(inp.size()-1,1);
    int delimeterIdx;
    int valInt;
    while(inp != ""){
        delimeterIdx = inp.find(',');
        if(delimeterIdx != string::npos){
            string val = inp.substr(0,delimeterIdx);
            inp.erase(0,delimeterIdx+1);
            ans.push_back(val);
        }else{
            ans.push_back(inp);
            inp = "";
        }
        
    }
    return constructTreeFromList(ans);
}