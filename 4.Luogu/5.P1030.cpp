/*************************************************************************
	> File Name: 5.P1030.cpp
	> Author: 
	> Mail: 
	> Created Time: Sun 27 Oct 2024 01:53:23 PM CST
 ************************************************************************/

#include <iostream>
#include <unordered_map>
using namespace std;
string inorder, postorder;
unordered_map<char, int> in;
unordered_map<char, int> post;

void preorder(int lin, int rin, int lpost, int rpost) {
    if (rin < lin) return ;
    cout << postorder[rpost]; 
    int l_lin = lin, l_rin = in[postorder[rpost]] - 1, r_lin = l_rin + 2, r_rin = rin;
    int l_lpost = lpost, l_rpost = l_lpost + l_rin - l_lin, r_lpost = l_rpost + 1, r_rpost = rpost - 1;
    if (l_lin <= l_rin) preorder(l_lin, l_rin, l_lpost, l_rpost);
    if (r_lin <= r_rin) preorder(r_lin, r_rin, r_lpost, r_rpost);
    return ;
}


int main() {
    cin >> inorder >> postorder;
    for (int i = 0; i < inorder.size(); i++) {
        in[inorder[i]] = i;
        post[postorder[i]] = i;
    }
    preorder(0, inorder.size() - 1, 0, postorder.size() - 1);
    cout << endl;
    return 0;
}
