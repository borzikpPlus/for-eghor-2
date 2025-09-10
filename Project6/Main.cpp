#include<iostream>

using namespace std;


class Elevator
{
private:

	int direction;
	bool on_off;
	bool state;
	int floor;

public:
	Elevator() :direction(0), floor(0),on_off(false), state(false)
	{}
	void Init(int direction, int floor, bool state_active, bool on_off)
	{
		this->direction = direction;
		this->floor = floor;
		this->state = state_active;
		this->on_off = on_off;

	}
	void Print()
	{
		if (on_off)
		{
			cout << "Elevator is working";
		}
		else
		{
			cout << "Elevator is not working";
		}


	}

	void SetState(bool state)
	{
		this->state = state;
		if (state = true)
		{
			cout << "Elevator is working";
		}
		else
		{
			cout << "Elevator is NOT working";
		}
	}
	bool GetState()
	{
		return state;
	}

	void SetFloor(int floor)
	{
		this->floor = floor;
		if (floor <= 0)
		{
			cout << "Your elevator is crashed, floor is under - 1";
		}
	}
	int GetFloor()
	{
		return floor;
	}

	void SetPower(bool on_off)
	{
		this->on_off = on_off;
		if (on_off = true)
		{
			cout << "You turn on the elevator";
		}
		else
		{
			cout << "You turn on the elevator";
		}
	}
	bool GetPower()
	{
		return on_off;
	}



};







int main()
{





}