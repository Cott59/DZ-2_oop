#include<iostream>
#include<string>
#include<vector>


class Human {
private:
	char* _Fio;
	int _Age;
public:
	Human(std::string fio,int age):_Age(age){
		_Fio = new char[fio.length()];
		for (int index = 0; index < fio.length(); ++index)
			_Fio[index] = fio[index];
	}

	void ShowHuman()
	{

	}

	~Human()
	{
		delete[]_Fio;
	}

};

class Room {
private:
	int _Number;
	int _Quantity;
	std::vector<Human*>_Room;

public:
	Room(std::vector<Human*>room) :_Room(room){}

	void AddHumanByRoom(Human* resident)
	{
		_Room.push_back(resident);
	}
	int GetQuantity()
	{
		std::cout << " Quantity resident = " << _Room.size() + 1 << '\n';
	}
	int GetNumber()
	{
		return _Number;
	}

	void SetNumber()
	{

	}
};

class House {
private:
	map<int, Room*>rooms;

public:
	

	}

};


