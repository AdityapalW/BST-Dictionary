/*
 * BST.cpp
 * 
 * Description: Binary Search Tree data collection ADT class.
 *              Link-based implementation.
 *              Duplicated elements are not allowed.
 *
 * Class invariant: It is always a BST.
 * 
 */
 
#include "BST.h"
#include "Word.h"
#include <iostream>

using std::cout;
using std::endl;
using std::nothrow;



/* Constructors and destructor */

   // Default constructor
   BST::BST() { }            

   // Copy constructor
   BST::BST(const BST & aBST) {
     root = copy(aBST.root);
     elementCount = aBST.elementCount;
	  
   }

   // Destructor 
   BST::~BST() {
      destroy(root);
   
   }                
   
   
/* Getters and setters */

   // Description: Returns the number of elements currently stored in the binary search tree.   
   // Postcondition: This method does not change the binary search tree.
   // Time efficiency: O(1)
   unsigned int BST::getElementCount() const {     

     return this->elementCount;
	 
   }
   

/* BST Operations */

   // Description: Inserts an element into the binary search tree.
   //              This is a wrapper method which calls the recursive insertR( ).
   // Precondition: "newElement" does not already exist in the binary search tree.
   // Exception: Throws the exception "UnableToInsertException" when newElement 
   //            cannot be inserted because the "new" operator failed. 
   // Exception: Throws the exception "ElementAlreadyExistsException" 
   //            if "newElement" already exists in the binary search tree.
   // Time efficiency: O(log2 n)   
   void BST::insert(Word & newElement) {
      if(root == nullptr){
         root == new BSTNode(newElement);
         elementCount++;
      } else {
         BSTNode * temp = new BSTNode(newElement);
         if (temp == nullptr){
            throw UnableToInsertException("new operator failed");
         }
         bool inserted = insertR(temp, root);
         if(!inserted){
         throw ElementAlreadyExistsException("Element already exists in the BST");
         }
         elementCount++;
      }
	  
   } 
   
   // Description: Recursive insertion into a binary search tree.
   //              Returns true when "anElement" has been successfully inserted into the 
   //              binary search tree. Otherwise, returns false.
   bool BST::insertR(BSTNode * newBSTNode, BSTNode * current) {  
    
      if (newBSTNode->element == current->element)
         return false;

      else if (newBSTNode->element < current->element) {

         if (current->left == nullptr){

            current->left = newBSTNode;
            return true;

         } else {

            return insertR(newBSTNode, current->left);

         }
      } else {

         if (current->right == nullptr){

            current->right = newBSTNode;
            return true;

         }  else {

            return insertR(newBSTNode, current->right);
         }
      }
		
   }

   
   // Description: Retrieves "targetElement" from the binary search tree.
   //              This is a wrapper method which calls the recursive retrieveR( ).
   // Precondition: Binary search tree is not empty.
   // Exception: Throws the exception "EmptyDataCollectionException" 
   //            if the binary search tree is empty.
   // Exception: Propagates the exception "ElementDoesNotExistException" 
   //            thrown from the retrieveR(...)
   //            if "targetElement" is not found in the binary search tree.
   // Postcondition: This method does not change the binary search tree.
   // Time efficiency: O(log2 n)
   Word& BST::retrieve(Word & targetElement) const {
      
     if (elementCount == 0)  
        throw EmptyDataCollectionException("Binary search tree is empty.");
	
     Word& translated = retrieveR(targetElement, root);
	 
     return translated;
   }

   // Description: Recursive retrieval from a binary search tree.
   // Exception: Throws the exception "ElementDoesNotExistException" 
   //            if "targetElement" is not found in the binary search tree.
   // Postcondition: This method does not change the binary search tree.
   Word& BST::retrieveR(Word & targetElement, BSTNode * current) const {

      if (current = nullptr){

         throw ElementDoesNotExistException("Element doesn't exist in BST.");

      } else if (targetElement == current->element) {
         return current->element;   
      } else if (targetElement < current->element) {
         return retrieveR(targetElement, current->left);
      }  else {
         return retrieveR(targetElement, current->right);
      }
	  
		
   } 
         
   
   // Description: Traverses the binary search tree in order.
   //              This is a wrapper method which calls the recursive traverseInOrderR( ).
   //              The action to be done on each element during the traverse is the function "visit".
   // Precondition: Binary search tree is not empty.
   // Exception: Throws the exception "EmptyDataCollectionException" 
   //            if the binary search tree is empty.
   // Postcondition: This method does not change the binary search tree.
   // Time efficiency: O(n)     
   void BST::traverseInOrder(void visit(Word &)) const {
     
     if (elementCount == 0)  
       throw EmptyDataCollectionException("Binary search tree is empty.");

     traverseInOrderR(visit, root);
     
     return;
   }

   // Description: Recursive in order traversal of a binary search tree.   
   // Postcondition: This method does not change the binary search tree. 
   void BST::traverseInOrderR(void visit(Word &), BSTNode* current) const { 
     
      if (current != nullptr) {
        traverseInOrderR(visit, current->left);
        visit(current->element);
        traverseInOrderR(visit, current->right);
    }
	  
	  
   }

   // Description: Recursive function to destroy nodes of a binary search tree.   
   // Postcondition: This method deletes the binary search tree.
   void BST::destroy(BSTNode * current) {
      if (current != nullptr) {
         destroy(current->left);
         destroy(current->right);
         delete current;
         
      }
   }

   // Description: Recursive function to make a copy of a binary search tree.   
   // Postcondition: This method does not change the binary search tree.
   BSTNode* BST::copy(BSTNode* current) const {
      if (current == nullptr)
         return nullptr;
      BSTNode* newNode = new BSTNode(current->element);
      newNode->left = copy(current->left);
      newNode->right = copy(current->right);
      return newNode;
   }
