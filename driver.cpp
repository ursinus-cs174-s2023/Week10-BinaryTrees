#include "tree.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {    
    BinaryTree<int> T = BinaryTree<int>::getExampleTree();    
    T.add(3);
    T.add(0);
    T.add(16);
    T.inorder();

    
    /*for (int i = 1; i <= 30; i++) {
        cout << "T.contains(" << i << ") = " << T.contains(i) << "\n";
    }*/


    
    return 0;
}
