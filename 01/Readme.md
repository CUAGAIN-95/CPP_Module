# CPP01
## Memory allocation
- new/delete operator
	```
	pointer = new type;
	pointer = new type[N];
	pointer = new type(arg_list);
	```
	```
	delete pointer;
	delete[] pointer;
	```
- built-in type allocation
	```
	pointer = new type;
	```
- built-in type deallocation
	```
	delete pointer;
	```
- built-in type array allocation
	```
	pointer = new type[N];
	```
- built-in type array deallocation
	```
	delete pointer;
	```
- Class type allocation with calling a constructor
	```
	pointer = new type (arg_list);
	```
- Class type deallocation without calling a destructor
	```
	delete pointer;
	```
- Class array allocation with calling a constructor
	```
	pointer = new type[N];
	```
- Class array deallocation with calling destructor
	```
	delete[] pointer;
	```
## References
- 기본 개념
	- 참조(reference) 변수는 반드시 선언과 동시에 참조대상 변수로 초기화되어야 한다.
	- 참조 변수와 참조대상 변수는 메모리 공간을 공유한다.
	```c++
	#include <iostream>
	using namespace std;
	int main(void)
	{
		int	a = 3;
		int &b = a;		// reference
		b = 5;
		cout << a << endl;
		return (0);
	}
	```
	> 출력결과
	>
	> 5
	### Pointer
	```c++
	#include <iostream>
	using namespace std;
	int main(void)
	{
		int	a = 3;
		int	*pb = &a;	// pointer
		(*pb) = 5;
		cout << a << endl;
		return (0);
	}
	```
	> 출력결과
	>
	> 5
- 함수 인자
	- 참조변수가 함수 인자로 사용될 때는 형식인자는 변수이어야 하며, 인자가 전달될 때 초기화된다.
	- 실제로 구현은 포인터로 구현된다.
	### Reference
	```c++
	#include <iostream>
	using namespace std;
	void f(int &b)		// reference
	{
		b = 5;
	}
	int main(void)
	{
		int a = 3;
		f(a);
		cout << a << endl;
		return (0);
	}
	```
	> 출력결과
	>
	> 5
	### Pointer
	```c++
	#include <iostream>
	using namespace std;
	void f(int *pb)		// pointer
	{
		(*pb) = 5;
	}
	int main(void)
	{
		int a = 3;
		f(&a);
		cout << a << endl;
		return (0);
	}
	```
	> 출력결과
	>
	> 5
- 배열
	- 배열에 대한 레퍼런스는 배열 포인터를 사용하는 것과 동일하다.
	```c++
	#include <iostream>
	#include <typeinfo>
	using namespace std;
	int	main(void)
	{
		int a[3] = {1, 2, 3};	// T(a)==int[3]
		int (&b)[3] = a;		// T(b)==int[3]
		b[1] = 99;
		cout << sizeof(b) << ' ';
		cout << typeid(b).name() << endl;
		for (int i = 0; i < 3; ++i)
			cout << a[i] << ' ';
		cout << endl;
		return (0);
	}
	```
	> 출력결과
	>
	> 12 int [3]
	>
	> 1 99 3
- 함수 인자 배열
	- 배열의 크기 정보가 그대로 함수 인자로 전달된다.
	```c++
	#include <iostream>
	#include <typeinfo>
	using namespace std;
	void f(int (&b)[3])
	{
		b[1] = 99;
		cout << sizeof(b) << ' ';
		cout << typeid(b).name() << endl;
		for (int i = 0; i < size; ++i)
			cout << b[i] << ' ';
		cout << endl;
	}
	int	main(void)
	{
		int a[3] = {1, 2, 3};
		f(a);
		return (0);
	}
	```
	> 출력결과
	>
	> 12 int [3]
	>
	> 1 99 3
	```c++
	#include <iostream>
	#include <typeinfo>
	using namespace std;
	void f(int (*pb)[3])		// T(pb) == int[3]*
	{
		(*pb)[1] = 99;
		cout << sizeof(*pb) << ' ';
		cout << typeid(*pb).name() << endl;
		for (int i = 0; i < size; ++i)
			cout << (*pb)[i] << ' ';
		cout << endl;
	}
	int	main(void)
	{
		int a[3] = {1, 2, 3};
		f(&a);
		return (0);
	}
	```
## Pointers to members
## File streams
- ifstream/ofstream
	- \<fstream\> 을 포함해야 한다.
	- open()/close() 함수를 사용하여 파일 열기 및 닫기를 수행한다.
	- 각각 istream/ostream 으로부터 상속받으므로 그 외 기능은 istream/ostream과 동일하게 사용 가능하다.
	```c++
	#include <iostream>
	#include <fstream>
	using namespace std;
	int main(void)
	{
		int a, sum = 0;
		ifstream ifs("input.txt");
		if (!ifs.is_open())
		{
			cerr << "Error: Input File." << endl;
			return (-1);
		}
		while (ifs >> a)
			sum += a;
		ifs.close();
		ofstream ofs("output.txt");
		if (!ofs.is_open())
		{
			cerr << "Error: Output File." << endl;
			return (-1);
		}
		ofs << "sum: " << sum << endl;
		ofs.close();
		return (0);
	}
	```
## stringstream
주어진 문자열에서 필요한 자료형에 맞는 정보를 꺼낼 때 유용하게 사용된다.
1) Insertion Operation
	- Using Insertion Operator (<<)
		```c++
		stringstream ss;
		ss << "Hello world!";
		```
	- Using str(string) Function
		```c++
		stringstream ss;
		ss.str("Hello world!");
		```
2) Extraction Operation
	- Using str() Function
		```c++
		stringstream ss;
		ss << "Hello world!";
		cout << ss.str();
		```
	- Using Extraction Operator (>>)
		```c++
		stringstream ss;
		string str;
		ss << "stringstream";
		ss >> str;
		```
## constructor member initializer list
- 대입연산자를 이용한 클래스 멤버 변수 초기화
클래스 생성자가 실행될 때 변수가 생성된 다음 생성자 본문이 실행되고, 멤버 변수값이 할당된다.
이 순서는 C++ 언어의 문법에서는 유효하지만, 초기화보다 효율적이지 않다. 그리고 일부 유형의 데이터(const 및 reference variable)는 선언과 동시에 초기화해야한다.
위의 문제를 해결하기 위해 C++은 생성자 멤버 초기화 리스트를 통해 멤버 변수를 초기화하는 방법을 제공한다.