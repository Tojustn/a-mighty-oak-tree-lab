#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/binary_tree.hpp"
#include "../src/squirrel.hpp"

TEST_CASE("BinaryTree and Node") {
    BinaryTree tree_zero;
    REQUIRE(tree_zero.getRoot() == nullptr);
    
    Squirrel s("Test");
    Node node(&s);
    REQUIRE(node.left() == nullptr);
    REQUIRE(node.right() == nullptr);
    
    // O - One: Single node tree
    Squirrel root("Root");
    BinaryTree tree(&root);
    REQUIRE(tree.getRoot() != nullptr);
    REQUIRE(tree.getRoot()->getSquirrel()->getName() == "Root");
    REQUIRE(tree.getRoot()->left() == nullptr);
    REQUIRE(tree.getRoot()->right() == nullptr);
    
    // M - Many: Multiple nodes and traversal
    Squirrel cheeks("Cheeks");
    Squirrel squeaks("Squeaks");
    Squirrel fluffybutt("Mr. Fluffy Butt");
    
    Node* node_one = new Node(&cheeks);
    Node* node_two = new Node(&squeaks);
    Node* node_three = new Node(&fluffybutt);
    
    node_one->set_left(node_two);
    node_one->set_right(node_three);
    
    REQUIRE(node_one->left() == node_two);
    REQUIRE(node_one->right() == node_three);
    REQUIRE(node_one->left()->getSquirrel()->getName() == "Squeaks");
    REQUIRE(node_one->right()->getSquirrel()->getName() == "Mr. Fluffy Butt");
}
