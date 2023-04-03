#include "tree.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {    
    BinaryTree<int> T = BinaryTree<int>::getExampleTree();    
    cout << "T.contains(4) = " << T.contains(4) << "\n";
    return 0;
}
