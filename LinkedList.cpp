// Name:
// Student Number:
// Date:

// Filename: LinkedList.cpp

// Note: This implementation of LinkedList is based on 
// Chapter 4 of Bruno R. Preiss's Textbook: 
// "Data Structures and Algorithms with Object-Oriented Design Patterns in C++"

#include <cstdlib>
#include <cassert>
#include "LinkedList.h"
using namespace std;

//---------------------------------------------------
//List Element Members
//---------------------------------------------------
ListElement::ListElement(int _datum, ListElement * _next):
   datum (_datum), next (_next)
{}


int ListElement::getDatum () const
{ 
  return datum; 
}


ListElement const* ListElement::getNext () const
{ 
  return next; 
}



//---------------------------------------------------
//LinkedList Members
//---------------------------------------------------
LinkedList::LinkedList () :
  head (0)
{}

void LinkedList::insertItem(int item)
{
  ListElement* currPtr = head;
  ListElement* prevPtr = NULL;
  ListElement* newNodePtr;      //points to a new node
  
  while(currPtr != NULL && item > currPtr->datum)
  {
    prevPtr = currPtr;
    currPtr = currPtr->next;
  } 

  newNodePtr = new ListElement(item, currPtr);
  
  if (prevPtr == NULL) // insert at the beginning
    head = newNodePtr;
  else
    prevPtr->next = newNodePtr;
}

void LinkedList::makeList()
{
  int number;
  ListElement* currPtr;
  ListElement* newNodePtr;   
  
  cout << "Enter values for a linked list, one per line." << endl;
  cout << "Enter 999 to end the list." << endl;

  cin >> number;
  //Adding elements to end so that "next" will be NULL
  newNodePtr = new ListElement(number, NULL);
  head = newNodePtr;  //assign head to the first Node
  currPtr = head; 
  cin >> number;

  while (number != 999)
  {
    newNodePtr = new ListElement(number, NULL);
    currPtr->next = newNodePtr;     //link the new node to list
    currPtr = newNodePtr;           //move the currPtr so it is at end of list
    cin >> number;
  }
              
}

void LinkedList::appendItem (int item)
{
  // REMOVE the cout statement on line 94
  // and write your code here!
  cout << "You must implement this function" <<endl;
}

void LinkedList::deleteItem (int item)
{
  // REMOVE the cout statement on line 101
  // and write your code here!
  cout << "You must implement this function" <<endl;
}

void LinkedList::printList () 
{
  // REMOVE the cout statement on line 108
  // and write your code here!
  cout << "You must implement this function" <<endl;
}