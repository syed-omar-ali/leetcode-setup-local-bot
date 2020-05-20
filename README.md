# leetcode-setup-local-bot
To make this work,

- You need to have node.js installed on your local. You can check if is installed by command "node --version". 
  Bot was built with node version "11.9.0"
- cd to "CompetitiveProgramming". 
  Command: "cd CompetitiveProgramming/"
- Open VS code(or any other IDE) in this directory. 
  You could simply write command "code ." to open VS Code here.
- Execute the following command here:
  "node setup.js {Problem_Name}". eg: "node setup.js Kth_Smallest_Element_in_a_BST".
- Now you can open the file "/CompetitiveProgramming/leetcode/{Current_Date}/{Problem_Name}/main.cpp". It will have the coding library set up. 


--- Examples ---
- To read a tree input directly(as provided by leetcode): use the function "TreeNode * readTree(string)".
   Eg: TreeNode * root = readTree("[3,1,4,null,2]");
  
- To read an integer list input directly(as provided by leetcode): use the function "vector<int> readIntgerList(string)".
   Eg: vector<int> v = readIntgerList("[3,1,4,5,2]");

