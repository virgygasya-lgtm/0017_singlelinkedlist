#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
    int nomhs;
    Node *next;
};

class LinkedList
{
    Node *START;

public:
    LinkedList()
    {
        START = NULL;
    }