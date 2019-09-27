
#include <iostream>
#include <string>
using namespace std;

class Human {
	int hand, leg;
public:
	Human(){
		hand = 2;
		leg = 2;
		printf("Hey I am human\n");
	}
	int getHand(){
		return hand;
	}
	int getLeg(){
		return leg;
	}
	void setHand(int hand){
		this -> hand = hand;
	}
	void setLeg(int leg){
		this -> leg = leg;
	}
	
};

class Male: public Human{

public:
	int getHand(){
		printf("I have 2 hands\n");
	}
};

class Test {
	public:
	void bark(){
		printf("woof\n");
	}
	void bark(int n){
		for(int i = 0;i < n; i++)
			printf("woof\n");
	}
};

// class male_child: public Male, public Human{
// 	int k;
// 	public:
// 	male_child(){
// 		printf("I am a Male child\n");
// 	}
// };


class Box{
public:
	virtual double getVolume() = 0;
private:
	double length;
	double breadth;
	double height;
};

int main(){

	Box b;

}