/*
//Hello world
#include<iostream>
int main() 
{
	std::cout << "Hello, world!";
	return 0;
}
*/


/*
//2.1_my first .cpp -- display a message
#include<iostream>
int main() {
	using namespace std;

	cout << "Come up and C++ me some time ";
	cout << endl;
	cout << "You won't regret it!" << endl;
	return 0;
}
*/


/*
// 2.2_carrots.cpp -- fod processing program
// use and displays a variable
#include<iostream>
int main() {
	using namespace std;

	int carrots; //declare an integer variable

	carrots = 25; // assign a value to the variable
	cout << "I have ";
	cout << carrots; //display the value of the variable
	cout << "carrots.";
	cout << endl;
	carrots = carrots - 1;  // modify the variable
	cout << "Crunch,Crunch. Now I have " << carrots << " carrots." << endl;
	return 0;
}
*/


/* 
// 2.3_getinfo.cpp -- input and output
#include<iostream>
int main()
{
	using namespace std;

	int carrots;

	cout << "How many carrots do u have?" << endl;
	cin >> carrots;   //c++ input
	cout << "Here are two more.";
	carrots += 2; // the next line concatenates output
	cout << "Now u have " << carrots << "carrots." << endl;
	return 0;
}
*/

/*
//2.4_sqrt.cpp -- using the sqrt() function

#include<iostream>
#include<cmath> //or math.h

int main()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in square feet, of your home:";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "That's the equivalent of a square " << side
		<< " feet to the side." << endl;
	cout << "How fascinating!" << endl;
	return 0;
}
*/


/*
// 2.5_ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int); //function prototype for simon()

int main()
{
	using namespace std;
	simon(3); //call the simon() function
	cout << "Pick an integer";
	int count;
	cin >> count;
	simon(count); //call it again
	cout << "Done!" << endl;
	return 0;
}
void simon(int n) //define the simon() function
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
} //void function don't need return statements
*/


/*
// 2.6_convert.cpp -- converts stone to pounds
#include <iostream>
int stonetolb(int); //function prototype
int main()
{
	using namespace std;
	int stone;
	cout << "Enter the weight in stone: ";
	cin >> stone;
	int pounds = stonetolb(stone);
	cout << stone << "stone = ";
	cout << pounds << " pounds." << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}
*/

/*
// 3.1_limits.cpp -- some integer limits
#include<iostream>
#include<climits> //use limits.h for older systems
#include<stdlib.h>
int main()
{
	using namespace std;
	int n_int = INT_MAX; //initialize n_int to max int value
	short n_short = SHRT_MAX; // symbols defined in climits file
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	// sizeof operatoe yirlds size of type or of varialbe
	cout << "int is " << sizeof(int) << "bytes." << endl;
	cout << "short is " << sizeof n_short << "bytes." << endl;
	cout << "long is " << sizeof n_long << "bytes." << endl;
	cout << "long long is " << sizeof n_llong << "bytes." << endl;

	cout << "Maximum values:" << endl;
	cout << "int:" << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;

	cout << "Minimum int value = " << INT_MIN << endl;
	cout << "bits per byte = " << CHAR_BIT << endl;
    system("pause");
	return 0;
}
*/


/*
// 3.2_exceed.cpp -- exceeding some integer limits
#include<iostream>
#define ZERO 0 // makes ZERO symbol for 0 value
#include <climits> // defines INT_MAX as largest int value
int main()
{
	using namespace std;
	short sam = SHRT_MAX; // initialize a variable to max value
	unsigned short sue = sam; // okay if variable sam already defined

	cout << "Sam has " << sam << " dollars sand Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Now ";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		 << "Lucky Sue!" << endl;
	return 0;
}
*/


/*
// 3.3_hexoct1.cpp -- shows hex and octal literals
#include<iostream>
int main ()
{
	using namespace std;
	int chest = 42; // decimal integer literal
	int waist = 0x42; // hexadecimal integer literal
	int inseam = 042; // octal integer literal

	cout << "Monsieur cuts a striking figure!\n";
	cout << "chest = " << chest << " (42 in decimal)\n";
	cout << "waist = " << waist << " (0x42 in hex)\n";
	cout << "inseam = " << inseam << " (042 in octal)\n";
	return 0;
}
*/

/*
// 3.4_hexoct2.cpp -- display values in hex and octal 
#include<iostream>
using namespace std;
int main ()
{
	int chest = 42;
	int waist = 42;
	int inseam = 42;

	cout << "Monsieur cut a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	cout << hex;
	cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl;
	return 0;
}
*/


/*
// 3.5_chartype.cpp -- the char type
#include<iostream>
int main () 
{
	using namespace std;
	char ch; // declare a char variable

	cout << "Enter a character: " << endl;
	cin >> ch;
	cout << "Hola! ";
	cout << "Thank you for the " << ch << " character." << endl;
	return 0;
}
*/

/*
// 3.6_morechar.cpp -- the char type and int type contrasted
#include<iostream>
int main ()
{
	using namespace std;
	char ch = 'M'; // assign ASCII code for M to ch
	int i = ch; // store same code in an int
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	cout << "Add one to the character code:" << endl;
	ch = ch + 1; // change character code in ch 
	i = ch; // save new character code in i
	cout << "The ASCII code for " << ch << " is " << i << endl;
	
	// using the cout.put() member function to display a char
	cout << "Display char ch using cout.put(ch): ";
	cout.put(ch);

	// using cout.put() to display a char constant
	cout.put('!');
	cout << endl
		 << "Done" << endl;
	return 0;
} 
*/

/*
// 3.7——bondni.cpp -- using escape sequences
#include <iostream>
int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";
	cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered "<< code << "...\n";
	cout << "\aCode verfied! Proceed with Plan Z3!\n";
	return 0;
}
*/

/*
// 3.8_floatnum.cpp -- floatig-point types
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed,ios_base::floatfield); // fixed-point
	float tub = 10.0 / 3.0; // good to about 6 places 
	double mint = 10.0 / 3.0; // good to about 15 places
	const float million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand then million tubs = ";
	cout << 10 * million * tub << endl;

	cout <<"mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;
	return 0;
} 
*/

/*
// 3.9_fltadd.cpp -- precision problems with float
#include <iostream>
int main()
{
	using namespace std;
	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << "a = " << a << endl;
	cout << "b - a = " << b - a << endl;
	return 0;
}
*/

/*
// 3.10_arith.cpp -- some C++ arithmetic
#include <iostream>
int main()
{
	using namespace std;
	float hats, heads;

	cout.setf(ios_base::fixed, ios_base::floatfield); // fixed-point 
	cout << "Enter a number: ";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;	
}
*/

/*
// 3.11_divide.cpp -- integer and floating-point division
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9/5 << endl;
	cout << "Floating-point divison: 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed divison: 9.0/5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7/9.0 = " << 1e7 / 9.0 << endl;
	cout << "float constants: 1e7f/9.0f = " << 1.e7f / 9.0f << endl;
	return 0; 
}
*/

/*
// 3.12_modulus.cpp -- uses % operator to convert 1bs to stone
#include <iostream>
int main()
{
	using namespace std;
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / Lbs_per_stn; // whole stone
	int pounds = lbs % Lbs_per_stn; // remainder in pounds
	cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s).\n";
	return 0; 
}
*/

/*
// 3.13_assign.cpp -- type changes on initialization
#include <iostream>
int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3; // int converted to float 
	int guess(3.9832); // double converted to int 
	int debt = 7.2E12; // result not defined in C++
	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;
	return 0;
}
*/

/*
// 3.14_typecast.cpp -- forcing type changes
#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;

	// the following statment adds the values as double
	// then converts the result to int
	auks = 19.99 + 11.99;

	// these statments add values as int 
	bats = (int) 19.99 + (int) 11.99; // old C syntax
	coots = int(19.99) + int(11.99); // new C++ syntax 
	cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;

	char ch = 'Z';
	cout << "The code for " << ch << " is "; // print as char
	cout << int(ch) << endl; // print as int 
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl; // using static_cast
	return 0;
}
*/

/*
// 4.1_arrayone.cpp -- small arrays of integers
#include <iostream>
int main()
{
	using namespace std;
	int yam[3]; // creates array with three elements
	yam[0] = 7; // assign value to first element
	yam[1] = 8;
	yam[2] = 6;

	int yamcosts[3] = {20, 30, 5}; // create, initialize array
	// NOTE: If your C++ compiler or translator can't initialize this array,
	// use static int yamcosts[3] instead of int yamcosts[3]

	cout << "Total yam = " << yam[0] + yam[1] + yam[2] << endl;
	cout << "The package with " << yam[1] << " yams costs " << yamcosts[1] << " cents per yam.\n";
	int total = yam[0] * yamcosts[0] + yam[1] * yamcosts[1];
	total = total + yam[2] * yamcosts[2];
	cout << "The total yam expense is " << total << " cents.\n";

	cout << "\nSize of yams array = " << sizeof yam << "bytes.\n";
	cout << "Size of one element = " << sizeof yam[0] << "bytes.\n";
	return 0;
}
*/

/*
// 4.2_string.cpp -- storing strings in an array
#include <iostream>
#include <cstring> // for the strlen() function
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size]; // empty array
	char name2[Size] = "C++owboy"; // initialized array
	// NOTE: some implementations may require the static keyword to initialize the array name2

	cout << "Howdy! I'm " << name2 << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has " << strlen(name1) 
	<< "letters and is stored in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] <<".\n";
	name2[3] = '\0'; // set to null character
	cout << "Here are the first 3 characters of my name: " << name2 << endl;
	return 0;
}
*/

//  4.3_instrl.cpp -- reading more than one string 
#include <iostream>
int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";
	return 0;
}