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

    void addNode()
{
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa : ";
    cin >> nim;

    Node *nodeBaru = new Node;
    nodeBaru->nomhs = nim;
    nodeBaru->next = NULL;