#include <iostream>
#include <stack>

int main ()
{
    std::stack <std::string> cards; /* Simple enough to create a stack */
   
    cards.push("King of Hearts"); /* push() will add a value, think of queues */

    cards.push("King of Clubs");  /* adding some cards to the deck */

    cards.push("King of Diamonds");

    cards.push("King of Spades");

    std::cout << "There are " << cards.size () << " cards in the deck" << std::endl;

    std::cout << "The card on the top of the deck is " << cards.top() << std::endl;

    /* Will output King of Spades, since this was the last one to be added */

    cards.pop();

    std::cout << "The top card is now " << cards.top() << std::endl;

    std::cout << "There are " << cards.size () << " cards in the deck" << std::endl;

    return 0;
}
