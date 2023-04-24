#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"
#include "List.h"

using namespace std;

int main(){
    List l, l2, l3;

    l.insertNode("Fear of the Dark", "Iron Maiden");
    l.insertNode("Highway to Hell", "ACDC");
    l.insertNode("Holy Diver", "DIO");
    l.insertNode("The Thrill is Gone", "B.B. King");
    l.insertNode("Staying Alive", "Bee Gees");
    l.insertNode("Breaking the Law", "Judas Priest");
    l.insertNode("Kashmir", "Led Zeppelin");
    l.insertNode("Commando", "Ramones");
    l.insertNode("Holiday in Cambodia", "Dead Kennedys");
    l.insertNode("YYZ", "Rush");

    l2.insertNode("Misirlou", "Dick Dale");
    l2.insertNode("I Shot the Sheriff", "Bob Marley");
    l2.insertNode("Toxic", "Britney Spears");

    l3.insertNode("Haruka Kanata", "Asian Kung-Fu Generation");

    cout << "Primeira lista" << endl;
    l.printList();
    cout << "Segunda lista" << endl;
    l2.printList();
    cout << "Terceira lista" << endl;
    l3.printList();

    cout << "Tamanha da lista 1 " << l.size << endl;
    cout << "Tamanha da lista 2 " << l2.size << endl;
    cout << "Tamanha da lista 3 " << l3.size << endl;

    cout << endl << endl << endl;
    cout << "_______________________________________" << endl;

    l.search(1);
    l.search(2);
    l.search(3);
    l.search(10);
    l2.search(2);
    l3.search(1);

    cout << endl << endl << endl;
    cout << "_______________________________________" << endl;

    l.printList();
    l.deleteNode(4);
    l.printList();
    cout << "Tamanha da lista 1 " << l.size << endl;

    return 0;
}