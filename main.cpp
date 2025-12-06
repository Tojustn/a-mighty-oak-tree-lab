#include <iostream>

#include "src/binary_tree.hpp"
#include "src/squirrel.hpp"

int main() {
  
  Squirrel cheeks = Squirrel("Cheeks");
  Squirrel squeaks = Squirrel("Squeaks");
  Squirrel fluffybutt = Squirrel("Mr. Fluffy Butt");
  
  Node* node_one = new Node(&cheeks);
  Node* node_two = new Node(&squeaks);
  Node* node_three = new Node(&fluffybutt);
  
  node_one->set_left(node_two);
  node_one->set_right(node_three);
  
  Node* retrieved_node_one = node_one->left();  
  Node* retrieved_node_two = node_one->right();  
  
  std::cout << "Root node (node_one) contains: " << node_one->getSquirrel()->getName() << std::endl;
  
  if (retrieved_node_one) {
    std::cout << "Left child (retrieved_node_one) contains: " << retrieved_node_one->getSquirrel()->getName() << std::endl;
  }
  
  if (retrieved_node_two) {
    std::cout << "Right child (retrieved_node_two) contains: " << retrieved_node_two->getSquirrel()->getName() << std::endl;
  }
  
  std::cout << "node_one->left()->getSquirrel()->getName() = " << node_one->left()->getSquirrel()->getName() << std::endl;
  std::cout << "node_one->right()->getSquirrel()->getName() = " << node_one->right()->getSquirrel()->getName() << std::endl;
  
  return 0;
}
