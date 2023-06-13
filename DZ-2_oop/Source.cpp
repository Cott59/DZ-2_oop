#include<iostream>
#include<string>
#include<vector>
#include<map>

class Human {
private:
	std::string _Fio;
	int _Age = 0;
public:
	Human(std::string fio, int age) {
		std::string = new std::string(fio); 
		_Fio = fio;
		_Age = age;
	}

	void ShowHuman()
	{
		std::cout << " FIO :" << _Fio << '\n';
		std::cout << " Age :" << _Age << '\n';
	}
	~Human()
	{
		
	}

	
};

class Room {
private:
	int _Number;
	std::vector<Human*> _Human;
public:
	Room(int data):_Number(data){}

	void NewHuman(std::string fio, int age) {
		Human* human = new Human(fio,age);
		_Human.push_back(human);
	}
	
	void GetQuantity()
	{
		
	}
	int GetNumber()
	{
		return _Number;
	}

	

	}
	
};

class House {
private:
	std::vector<Room*>_Room;
	int number = 1;
	int _Number = 0;
	
	void AddRoom() {
		Room* room = new Room(number);
		_Room.push_back(room);
		number++;
	}

	void ShowCounterRoom() {
		std::cout << _Room.size() << '\n';
	}
	void AddHuman(int number) {
		
		_Room[number - 1]->NewHuman();

	}

	~House() {
		for (auto it = _Room.begin(); it != _Room.end(); ++it)
			delete (*it);
	
	}
};


int main() {
	setlocale(LC_ALL, "ru");
	
	House* Lenina45=new House;
	Lenina45->AddRoom();
	Lenina45->AddRoom();
	Lenina45->AddRoom();
	Lenina45->ShowCounterRoom();
	Lenina45->AddHuman(2)->




	return 0;
}

