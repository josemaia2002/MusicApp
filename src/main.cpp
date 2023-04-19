#include <iostream>
#include <string>
#include "Musica.h"
#include "Node.h"
#include "List.h"

using namespace std;

int main(){
    List l;

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

    l.printList();
    
    return 0;
}