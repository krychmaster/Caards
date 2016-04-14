#pragma once
#include <string>
enum result
{ win='w',
 lose='l',
 draw='d'};

class Card
{
private: 
	int figure, colour;
	static int counter=0;


public:
	Card();
result compare(Card*);
string description()
{
static char colour[]="KPTR";
static char figure[]="234567890JQKA";
return string (1,colour[colours])+string(1,figure[figures]);


}






	
};