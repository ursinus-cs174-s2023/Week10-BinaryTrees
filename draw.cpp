#include "tree.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {    
    BinaryTree<int> T = BinaryTree<int>::getExampleTree();    
    T.draw(500);

    
    return 0;
}
