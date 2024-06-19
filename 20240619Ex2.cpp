#include <iostream>

//다형성 (Polymorphism)
//PoliceCar is-a Car
//Cat is -a Animal
/*
class Parent
{
public:
	void Function()
	{
		std::cout << "Hello Parent" << std::endl;
	}
};

class Child : public Parent
{
public:
	void Function()
	{
		std::cout << "Hello Child" << std::endl;
	}
};
*/

//Menber Fuction Overriding(재정의)

class Character
{
public:
	//가상함수 : 자식 클래스에서 재정의(오버라이드) 할 것으로 기대하는 멤버함수
	virtual void Attack()
	{
		std::cout << "Charater::Attack" << std::endl;
	}
};

class Warrior : public Character
{
	void Attack() override//재정의
	{
		std::cout << "전사는 칼을 휘둘렀다" << std::endl;
	}
};

class Thief : public Character
{
	void Attack() override//재정의
	{
		std::cout << "도적은 그림자에 숨었다" << std::endl;
	}
};

class Wizard : public Character
{
	void Attack() override//재정의
	{
		std::cout << "마법사는 파이어볼을 외웠다" << std::endl;
	}
};

//C++다형성은
//상속과 포인터와 가상함수

int main()
{
	/*
	Child c1;
	Parent* p = &c1;
	p->Function();
	*/

	Character* party[3]
	{
		new Warrior(),
		new Thief(),
		new Wizard()
	};

	for (int i = 0; i < 3; i++)
	{
		party[i]->Attack();
	}

	party[0]->Character::Attack();
	//virtual function table
}
//C++다형성은
//상속과 포인터와 가상함수

// x라는 객체과 10이라는 값이 바인딩
//컴파일 타임 바인딩, 이른 바인딩, 정적 바인드

//런타임 바인딩, 늦은 바인딩, 동적 바인딩