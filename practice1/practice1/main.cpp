#include<iostream>
#include<string>

//복사생성자
//parameter 한개 이상 받는 것 생성자
class Boat
{
public:
	Boat();
	~Boat();


private:
	int hits;
	int ID;
};


Boat::Boat() // 메모리 생긴 그 자체를 받으니 반환이 필요 없음
{
	int hits = 0;
	int ID = -1;
	// -1의 의미는 아이디가 부여되지 않음.
}

Boat::~Boat() // 리소스를 외부에서 얻은게 없으니 반환 필요가 없음
{

}


class Ocean
{
public:
	Ocean();
	Ocean(const Ocean&);
	Ocean(int x_size, int y_size, int num_boats);
	~Ocean();
private:
	int x_size;
	int y_size;
	int* grid;
	Boat* boats;
	int num_boats;

};

int main()
{

}
// 생성자에서만 ':'가 쓰임
// 생성자의 {} 구현 부분을 호출하기전에 미리 값을 초기화 할 수 있다.
Ocean::Ocean()
{
	x_size = 0;
	y_size = 0;
	num_boats = 0;

	grid = nullptr;
	boats = nullptr;
}

Ocean::Ocean(const Ocean& ocean)
{
	x_size = ocean.x_size;
	y_size = ocean.y_size;
	num_boats = ocean.num_boats;

	grid = new int[x_size * y_size];

	for (int i = 0; i < x_size * y_size; ++i)
	{
		grid[i] = ocean.grid[i];
	}

	boats = new Boat[num_boats];

	for (int i = 0; i < num_boats; ++i)
	{
		boats[i] = ocean.boats[i];
	}

}

Ocean::Ocean(int xsize, int ysize, int boat_count)
{
	x_size = xsize;
	y_size = ysize;
	num_boats = boat_count;

	grid = new int[x_size * y_size];
	boats = new Boat[num_boats];
}

Ocean::~Ocean()
{
	delete[] grid;
	delete[] boats;
}
