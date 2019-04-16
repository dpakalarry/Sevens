//Devak Patel

#include "MyForm.h"
#include "Classes.h"
#include <msclr\marshal_cppstd.h>
#include <string>
#include <iostream>
#include <ctime>
using namespace FinalProj;

deck dek;
hand han[4];
card mid[8];
int turn;

[STAThreadAttribute]
int main()
{
	MyForm form;                      //            The form to be created and shown
	form.ShowDialog();              //            Show the form
	return 0;
}

void card::setVal(int val) { //Creates the string for the image file name
	this->value = val;
	if (val == -1) {
		this->imgName = "blank.gif";
		return;
	}
	imgName = "";
	switch (val % 13) {
	case 0:
		imgName += "ace";
		break;
	case 10:
		imgName += "jack";
		break;
	case 11:
		imgName += "queen";
		break;
	case 12:
		imgName += "king";
		break;
	default:
		imgName += std::to_string(val % 13 + 1);
	}
	imgName += "_of_";
	switch (val / 13) {
	case 0:
		imgName += "clubs";
		break;
	case 1:
		imgName += "spades";
		break;
	case 2:
		imgName += "diamonds";
		break;
	case 3:
		imgName += "hearts";
	}
	imgName += ".gif";
}
System::String^ card::getImg() { //Converts the string to String^, microsoft's proprietary string type used in the form elements
	return msclr::interop::marshal_as<System::String^>(imgName);
}
card::card(int val) {
	setVal(val);
}
card::card() {
	card(0);
}
int card::getVal() { return value; }

deck::deck() {
	for (int i = 0; i < 52; i++)
		used[i] = false;
	srand(time(0));
}
card deck::draw() {
	int val;
	do {
		val = rand() % 52;
	} while (used[val]);
	used[val] = true;
	return card(val);
}

hand::hand() {
	for (int i = 0; i < 13; i++)
		cards[i] = card();
	numCards = 13;
}
hand::hand(deck &d) {
	for (int i = 0; i < 13; i++)
		cards[i] = d.draw();
	numCards = 13;
}
card hand::getCard(int i) { return cards[i]; }
void hand::removeCard(int i) { 
	cards[i].setVal(-1); 
	numCards--; 
}
int hand::numCard() { return numCards;}

bool checkWin() { //End game condition
	if (han[turn %= 4].numCard() == 0) {
		if (turn == 0) { 
			MessageBox::Show("YOU WIN!");
			exit(0);
		}
		MessageBox::Show("Player " + turn + " wins!");
		exit(0);
	}
}

System::String^ cardClick(int i) { //Called when user clicks on a card and passes in which card was clicked on
	if (takeTurns(i)) { //Checks whether or not card clicked is a valid move
		han[0].removeCard(i);
		turn--; //Turn has moved on to player 1 and messes up checkWin() which prevents you from winning
		checkWin();
		turn++;
		return "blank.gif";
	}
	return han[0].getCard(i).getImg();
}

hand* setup() {
	for (int i = 0; i < 4; i++) {
		han[i] = dek;
		mid[i] = -1;
		mid[i + 4] = -1;
		for (int j = 0; j < 13; j++) {
			if (han[i].getCard(j).getVal() == 45) {
				if (i == 0) MessageBox::Show("You started with the seven of hearts");
				else MessageBox::Show("Player " + i + " started with the 7_of_hearts");
				turn = i + 1;
				han[i].removeCard(j);
			}
		}
	}
	mid[3].setVal(45); //Sets up 7 of hearts
	mid[7].setVal(45);
	return han;
}

int validMove(int val) { //Checks if the card is a valid move
	if (val == -1)
		return -1;
	if (val % 13 == 6)
		return 8;
	for (int i = 0; i < 8; i++) {
		if (mid[i].getVal() == -1)
			continue;
		if (abs(val - mid[i].getVal()) == 1 && val / 13 == mid[i].getVal() / 13) {
			if (val%13 == 7 && i < 4) 
				return i + 4; //If there are 7s in the middle, and attempt to put down an 8
			return i;
		}
	}
	return -1;
}

bool playerhasValidTurn() { //Checks if the user has a valid turn that can be played
	int move;
	for (int i = 0; i < 13; i++) {
		if(validMove(han[0].getCard(i).getVal()) != -1)
			return true;
	}
	return false;
}

bool takeTurns(int num) {
	turn %= 4;
	if (turn == 0) {
		if (!playerhasValidTurn()) {
			MessageBox::Show("You skipped as you couldn't play any cards");
			turn++;
			return false;
		}
		if (num == -1) //Passes -1 to check if the user has any possible moves, returns immediately after check to prevent errors
			return false;
		num = han[0].getCard(num).getVal();
		int move = validMove(num); 
		if (move != -1) {
			if (move == 8) { //If used a 7
				mid[num / 13].setVal(num);
				mid[num / 13 + 4].setVal(num);
			} else { //If played anything else
				mid[move].setVal(num);
			}
			turn++;
			return true;
		}
		return false;
	}
	bool valCard = false; //Starts here for AI picking cards
	int move;
	int i;
	for (i = 0; i < 13; i++) { //Checks the AIs cards
		move = validMove(han[turn].getCard(i).getVal());
		if (move != -1) {
			valCard = true;
			num = han[turn].getCard(i).getVal();
			break;
		}
	}
	if (valCard) {
		if (move == 8) {
			mid[num / 13].setVal(num);
			mid[(num / 13) + 4].setVal(num);
		} else {
			mid[move].setVal(num);
		}
		MessageBox::Show("Player " + turn + " played " + han[turn].getCard(i).getImg()->Substring(0, han[turn].getCard(i).getImg()->Length-4)); //Shows what the AI played
		han[turn].removeCard(i);
	} else {
		MessageBox::Show("Player " + turn + " passed");
	}
	checkWin();
	turn++;
	return true;
}

System::String^ updateMiddle(int i) { //Called by the updateMid function to get the updated image files that should be displayed
	return mid[i].getImg();
}
int updateText(int i) { //Called by the updateMid() function that updates the card count of the AI
	return han[i].numCard();
}

bool continuePlay() { //Called by the getMid() function to continue taking the turns for the AI and advance the game
	turn %= 5; //By % by 5 it allows for the check on whether or not the user has a valid option 
	if (turn != 0) {
		takeTurns();
		return true;
	}
	checkWin();
	return false;
}