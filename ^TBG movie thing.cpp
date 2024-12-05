#include<iostream>
using namespace std;

string inventory[10];
int PlayerHealth = 100;

int main() {
	int room = 1;
	string input = "SANS";
	while (input != "quit") {

		cout << endl << "-----------------------------------------------" << endl;
		cout << "you inventory:";
		for (int i = 0; i < 10; i++)
			cout << inventory[i] << " | ";
		cout << endl;

		switch (room) {
		case 1:
			cout << "you're in the main lobby,you can west to the office, you can also go east toward the stairs, you can go north towards the bathrooms" << endl;
			cout << "theres a desk in the middle of the lobby" << endl;
			if (inventory[0] != "boot (size 14)")
				cout << "you found a size 14 boot!" << endl;
			cin >> input;
			if (input == "west" || input == "go west" || input == "office" || input == "go to office")
				room = 2;
			if (input == "east" || input == "go east" || input == "stairs" || input == "go to stairs")
				room = 7;
			if (input == "north" || input == "go north" || input == "bathroom" || input == "go to bathroom")
				room = 4;
			if (input == "desk" || input == "look" || input == "search" || input == "open desk") {
				if (inventory[2] != "key")
					cout << "you found a rusty key, it says janitor closet" << endl;
				inventory[2] = "key";
			}
			if (input == "boot" || input == "pick up boot" || input == "get boot") {
				inventory[0] != "boot (size 14)";
					cout << "you picked up the boot and heard a dripping sound from the office" << endl;
					inventory[0] = "boot (size 14)";
			}
			break;
		case 2:
			cout << "you're in the office,you can go north to the main office,you can go east back to the lobby" << endl;
			if (inventory[1] != "wet hat")
				cout << "you see a wet hat on the ground." << endl;
			cin >> input;
			if (input == "north" || input == "go north")
				room = 3;
			if (input == "east" || input == "go east" || input == "back")
				room = 1;

			if (input == "hat" || input == "pick up hat" || input == "get hat") {
				inventory[1] = "wet hat";
				cout << "you picked up the wet hat and hear a screech from the main office" << endl;
			}
			break;
		case 3:
			cout << "you're in the main office,you can go south back to the office" << endl;
			cout << "theres a box in the middle of the room" << endl;
			cin >> input;
			if (input == "south" || input == "go south" || input == "office" || input == "go to office")
				room = 2;
			if (input == "box" || input == "search" || input == "look" || input == "open") {
				if (inventory[3] != "ripped gloves")
					cout << "you found a ripped gloves" << endl;
				inventory[3] = "ripped gloves";
			}
			break;
		case 4:
			cout << "you are at the cross roads of the girls and boys bathrooms,you can go west to the boys bathroom or east to the girls bathroom,You can also go south back to the lobby" << endl;
			cin >> input;
			if (input == "west" || input == "go west" || input == "boys bathroom" || input == "go to boys bathroom")
				room = 5;
			if (input == "east" || input == "go east" || input == "girls bathroom" || input == "go to girls bathroom")
				room = 6;
			if (input == "south" || input == "go south" || input == "back" || input == "lobby")
				room = 1;
			break;
		case 5:
			cout << "you are in the boys bathroom,you can go east back to the crossroads" << endl;
			cout << "theres a open stall and trash cans" << endl;
			cin >> input;
			if (input == "east" || input == "go east" || input == "cross roads" || input == "back")
				room = 4;
			if (input == "stall" || input == "look" || input == "search" || input == "search stall") {
				if (inventory[4] != "message")
					cout << "you found many messages to some one named james but ones of them says (you guys will reget saying these) you assume james wrote that (PS remember this or revisit)" << endl;
				inventory[4] = "message";
			}
			if (input == "trash can" || input == "trash" || input == "search can" || input == "search trash") {
				if (inventory[9] != "SANS plaushy")
					cout << "you found a lot of trash but at the veyr bottom you found the best peice of trash (in a good way) SANS from UT you laeve it but can come back" << endl;//add sans music when found
				inventory[9] = "SANS plushy";
			}
			break;
		case 6:
			cout << "you are in the girls bathroom,you can go west back to the cross roads" << endl;
			cout << "you see a stall is open and you see a trash can" << endl;
			cin >> input;
			if (input == "west" || input == "go west" || input == "cross roads" || input == "back")
				room = 4;
			if (input == "stall" || input == "look" || input == "search" || input == "search stall") {
				if (inventory[5] != "long socks")
					cout << "you found a pair of extremly long socks in the toilet almost flooding it" << endl;
				inventory[5] = "long socks";
			}
			if (input == "trash can" || input == "trash" || input == "search can" || input == "search trash") {
				if (inventory[8] != "TOBY FOX plushy")
					cout << "you found a almost empty trash can but at the very bottom you see a TOBY FOX plushy" << endl;//add some kind of music for TOBY
				inventory[8] = "TOBY FOX plushy";
			}
			break;
		case 7:
			cout << "you are at the stairs you can go south back to the lobby,you can got north to the second floor" << endl;
			cout << "you might want to double check you have everything just saying" << endl;
			cin >> input;
			if (input == "south" || input == "go south" || input == "lobby" || input == "back")
				room = 1;
			if (input == "north" || input == "go north" || input == "floor two" || input == "second floor")
				room = 8;
			break;
		case 8 :
			cout << "you have made it floor 2 lets hope you have everything you can always go south to the first floor if you forgot something,you can go west and search for more items,you can go east and search for more items,you can go north to ms bells room" << endl;
			break;
		}
	}
	cout << "thanks for playing..." << endl;
}