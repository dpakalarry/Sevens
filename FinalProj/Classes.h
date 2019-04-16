#pragma once

//This header file is used to seperate the GUI from the backend, which allowed me to put most of the code in the cpp file
using namespace std;

class card {
	int value;
	string imgName;
public:
	void setVal(int val);
	System::String^ getImg();
	card(int val);
	card();
	int getVal();

};
class deck {
	bool used[52];
public:
	deck();
	card draw();
};
class hand {
	card cards[13];
	int numCards;
public:
	hand();
	hand(deck &d);
	card getCard(int i);
	void removeCard(int i);
	int numCard();
};

System::String^ cardClick(int i);

hand* setup();

bool takeTurns(int num = -1);

System::String^ updateMiddle(int i);

int updateText(int i);

bool continuePlay();
