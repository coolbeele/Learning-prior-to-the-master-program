// *********************************************
// 1 directive preprocessor header function type 
// my first program in C++
// comment

// # directive, 用来instruct preprocessor， iostream是一个header
# include <iostream>

// declare a function, int是type，main是name，
//main是一个special function，是program run的时候call的
int main() {
    std::cout << "Hello World!";
}
// STandarD cHARACTER OUTput device (指的是终端屏幕)，即std::cout
// <<意思是要被放入std::cout的东西


// ***************************************************
// 2 identifier， data type，variable，decltype，string 
// identifier (都是case sensitive的)：
//alignas, alignof, and, and_eq, asm, auto, bitand, bitor, 
//bool, break, case, catch, char, char16_t, char32_t, class, 
//compl, const, constexpr, const_cast, continue, decltype, 
//default, delete, do, double, dynamic_cast, else, enum, 
//explicit, export, extern, false, float, for, friend, goto, if, 
//inline, int, long, mutable, namespace, new, noexcept, not, 
//not_eq, nullptr, operator, or, or_eq, private, protected, 
//public, register, reinterpret_cast, return, short, signed, 
//sizeof, static, static_assert, static_cast, struct, switch, 
//template, this, thread_local, throw, true, try, typedef, 
//typeid, typename, union, unsigned, using, virtual, void, 
//volatile, wchar_t, while, xor, xor_eq

// data types：
// character type（字母，标点符号），有这些type：char 8 bits
// numerical integer type （整数），有这些type：short int 16 bits，long int 32 bits
// floating-point types （小数），有这些type： float，double（比float小数多）
// boolean type （true/false），有这些type：bool
// void type （no storage）

// initialization of variables (三种效果一摸一样)
int x = 0;  //c-like initialization
int x(0);   //constructor initialization
int x {0};  //uniform initialization

// decltype (把已有variable的data type去掉variable，换成其他名字)
int x = 0;
decltype(x) y;

// string
#include <iostream>
# include <string>
using namespace std;

int main() {
    string myString;
    myString = "This is a string";
    cout << myString << endl;  //ENDs the Line 就是endl
    return 0;
}


// 3 Escape code, const, preprocessor definition
// Escape code	Description         (注意，必须是'\n', 不能是“\n")
//           \n	newline
//           \r	carriage return
//           \t	tab
//           \v	vertical tab
//           \b	backspace
//           \f	form feed (page feed)
//           \a	alert (beep)
//           \'	single quote (')
//           \"	double quote (")
//           \?	question mark (?)
//           \\	backslash (\)

// 换行（“\")
x = "string expressed in \
two lines"

// const要加在所有非function内的data types： （提高效率，避免copy，而是引用）
// const就是constant，所有内容都是constant（例如：5，“this is a strin")
#include <iostream>
using namespace std;

const double pi = 3.14159;
const char newline = '\n';

int main() {
    double r = 5;
    double circle;

    circle = 2 * pi * r;
    cout << circle;
}

// preprocessor definitions （和const一个效果）
#include <iostream>
using namespace std;

#define PI = 3.14159;   // changed
#define NEWLINE = '\n'; // changed

int main() {
    double r = 5;
    double circle;

    circle = 2 * pi * r;
    cout << circle;
}


// 4 conditional ternary operator
// conditional ternary operator(?) 三数运算符
7==5 ? 4 : 3     // evaluates to 3, since 7 is not equal to 5.
7==5+2 ? 4 : 3   // evaluates to 4, since 7 is equal to 5+2.
5>3 ? a : b      // evaluates to the value of a, since 5 is greater than 3.
a>b ? a : b      // evaluates to whichever is greater, a or b.  

#include <iostream>
using namespace std;

int main() {
    int a,b,c;

    a=2;
    b=5;
    c=(a>b)?8:9;

    cout<<c<<'\n';
}
//output是9


// 5 input & output (cout & cin)
// basic input & output
cin  // standard input stream
cout // standard output stream

// cout
cout << "I am " << age << " years old and my zipcode is " << "3323";

cout << "First sentence.\n";
cout << "Second sentence.\nThird sentence.";
// output:
//First sentence.
//Second sentence.
//Third sentence.

// cin
#include <iostream>
using namespace std;

int main() {
    int i;
    cout << "Please enter an integer value:";
    cin >> i;
    cout << "the number you input is: " << i << '\n';
}


// 6 function, function with no type (void), protofunction, recursivity
// function
#include <iostream>
using namespace std;

int addition(int a, int b) {
    int r;
    r = a + b;
    return r;
}

int main() {
    int c;
    c = addition (5, 3);
    cout << "the result is: " << c << endl;
}

// functions with no type (void)
#include <iostream>
using namespace std;

void printmessage() {
    cout << "this is a void function (won't be stored)";
}

int main() {
    printmessage();
}

// arguments in function passed by reference rather than value
#include <iostream>
using namespace std;

void duplicate(int& a, int& b, int& c) {    // &表示取的是reference
    a *= 1;  //取reference，即 *= 2 （乘以2），而value是main里面的value x y z，不是function内的a b c
    b *= 2;
    c *= 3;
}

int main() {
    int x=1, y=3, z=7;
    duplicate(x,y,z);
    cout << x << '\n';
    cout << y << '\n';
    cout << z << '\n';
}

// protofunction (不用定义name的data type的function)
int protofunction(int first, int second);
int protofunction(int, int);

//function结构
#include <iostream>
using namespace std;

void odd (int x);
void even (int x);

void odd (int x) {
    if ((x%2) != 0)             // c++中的if else没有{}
    cout << "It is odd.\n";
    else even (x);
}

void even (int x) {
    if ((x%2) == 0) 
    cout << "It is even.\n";
    else odd (x);
}

int main() {
    int i;

    do {
        cout << "Please enter a number (0 to exit): ";
        cin >> i;
        odd (i);
    } while (i!=0);  // c++的if（）{}是倒过来的，且以while形式放在最后
} 

// recursivity (function中有同样function)
double factorial(double a) {
    if (a > 1)
        return (a * factorial(a-1));
    else
        return 1;
}

int main() {
    double number = 9;
    cout << number << "! = " << factorial(number);
}


// 7 overloaded function， function template
// overloaded functions （不同data type的function可以有同一个名字）
int operate (int a, int b)
{
  return (a*b);
}

double operate (double a, double b)
{
  return (a/b);
}

// function template (data type为Template即不管输入的是int double long都可以用)
#include <iostream>
using namespace std;

template <class Template>
Template sum(Template a, Template b) {
    Template result;
    result = a+b;
    return result;
}

int main() {
    int i = 5, j = 6, k;
    double f = 2.0, g = 0.5, h;
    k = sum<int>(i,j);
    h = sum<double>(f,g);
    cout << k <<'\n';
    cout << h <<'\n';
}


// 8 namespace，using
// namespace 和 scope qualifier的用法
#include <iostream>
using namespace std;

namespace foo {
    int value() {
        return 5;
    }
}

namespace bar {
    const double pi = 3.1416;
    double value() {
        return 2 * pi;
    }
}

int main() {
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
}
// output
//5
//6.2832
//3.1416

// using
#include <iostream>
using namespace std;

namespace first
{
  int x = 5;
  int y = 10;
}

namespace second
{
  double x = 3.1416;
  double y = 2.7183;
}

int main () {
  using first::x;
  using second::y;
  cout << x << '\n';
  cout << y << '\n';
  cout << first::y << '\n';
  cout << second::x << '\n';
  return 0;
}
// output 5
// 2.7183
// 10
// 3.1416


// 9 array， multidimentional array，array as parameter
// arrays
int foo [5]; //创建一个有5个variable int的array，注意是【】而不是（）
int foo [5] = {0,1,2,3,4}; //[0,1,2,3,4]
int foo [5] = {0,1,2}   // [0,1,2,0,0]
int foo [5] = {};   // [0,0,0,0,0]
int foo [] = (0,1,2,3) //array [4]

// accessing the values of an array
int foo [2] = 75; //把array foo的第3个值改成75
x = foo [2];  //copyarray foo的第三个值

// if else没有：和{}     但是for有（）{}
#include <iostream>
using namespace std;

int foo [] = { 2,3,4,5,6};
int n, result = 0;

int main() {
    for (n = 0; n < 5; ++n) {
        result += foo[n];
    }
    cout << result;
}

//multidimensional arrays
int jimmy [3][5] //创建一个3*5的array of array
jimmy [1][3] // to refer to a specific location

// 在函数中引用array
#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
    for (int n = 0; n < length; n++)
    cout << arg[n] << "-";
    cout << '\n';
}

int main() {
    int firstarray[] = {5,10,15};
    int secondarray[] = {2,4,6,8,10};
    printarray(firstarray,3);
    printarray(secondarray,4);
}


// 10 pointer，address of operator（&），dereference operator（*）
//    array就是一个pointer，char就是一个pointer，pointer initialization
//    pointer arithmetics （pointer算数），const pointers
//    void pointer， null pointer，pointer to a function



// pointer:用address of operator将一个variable的address给某个地址命名
// a variable that stores the address of another variable is called pointer!
foo = &myvar; //  给myvar的地址命名为foo

// address of operator (&)
myvar = 25;
foo = &myvar; // 把myvar的地址命名为foo
bar = myvar;  //引用myvar的值（即25）

// dereference operator (*)
baz = *foo; //baz = 25， *foo是这个地址所储存的value

// dereference operator（*） and address of operator（&）= pointer
#include <iostream>
using namespace std;

int main ()
{
  int firstvalue, secondvalue;
  int * mypointer;

  mypointer = &firstvalue;
  *mypointer = 10;
  mypointer = &secondvalue;
  *mypointer = 20;
  cout << "firstvalue is " << firstvalue << '\n';
  cout << "secondvalue is " << secondvalue << '\n';
  return 0;
}

// array本身就是一个pointer（装有某个variable地址的variable）
// 若 int number [5]是一个array，那number这个pointer指的就是number[0]，即第一个数字的地址
//例子：
#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    int *p;

    p = numbers;
    *p = 10;

    p++;    //若p是地址为1000的pointer，则p++是地址为1001的pointer，即array的下一位
    *p = 20;

    p = &numbers[2];
    *p = 30;

    p = numbers + 3;
    *p = 40;

    p = numbers;
    *(p+4) = 50;

    for (int n = 0; n < 5; n++) {
        cout << numbers[n] << ", ";
    }
}
//output：10，20，30，40，50

// char本身就是一个pointer（装有某个variable地址的variable）
//若char *foo = "hello"; 那foo这个pointer指的就是foo[0],即“h”的地址
char *foo = "hello";

// pointer initialization
int myvar;
int * myptr = &myvar;
//  ---------------——(要看成一个整体) same sequence

int myvar;
int * myptr;
myptr = &myvar
// -----------(看成一个整体) same sequence

int myvar;
int *myptr;
*myptr = &myvar;
//(错)，不能同时有两个*来point值

//pointer arithmetics （pointer算数）
char *mychar;
short *myshort;
long *mylong;

++mychar; 则pointer地址变为1001（因为存char只需要1bit）
++myshort;  pointer地址变为1002（因为存char需要2bit）
++mylong;   pointer地址变为1004（因为存char需要4bit）

//效果和上面一样
mychar = mychar + 1;    
myshort = myshort + 1;
mylong = mylong + 1;

//const pointers （pointer can be read，but cant be modified）
int x;
int y = 10;
const int * p = &y;
x = *p;          // ok: reading p
*p = x;          // error: modifying p, which is const-qualified 

// void pointer (没有data type的pointer)

// invalid pointers
int * p;               // uninitialized pointer (local variable)

int myarray[10];
int * q = myarray+20;  // element out of bounds 

// null pointers (三种方法一样)
int * p = 0;
int * q = nullptr;
int * r = NULL;

// pointer to a function （真的看不懂）


// 11 dynamic memory (input时有时需要储存)
// allocate dynamic memory using "new"
int * foo;
foo = new int[5];

// 检查dynamic memory是否成功储存
//方法一
foo = new int[5]; //若失败会有exception
//方法二
foo= new(nothrow) int[5];  //失败的话foo会被return为一个null pointer
if (foo == nullptr) {
    cout << "failed to store as dynamic memory";
}

// delete dynamic memory using "delete"
delete foo;
delete[3] foo; //把foo中的前三个都删掉

//例子
#include <iostream>
#include <new> //要加这个header
using namespace std;

int main ()
{
  int i,n;
  int * p;
  cout << "How many numbers would you like to type? ";
  cin >> i;
  p= new (nothrow) int[i];      //新加
  if (p == nullptr)
    cout << "Error: memory could not be allocated";
  else
  {
    for (n=0; n<i; n++)
    {
      cout << "Enter number: ";
      cin >> p[n];
    }
    cout << "You have entered: ";
    for (n=0; n<i; n++)
      cout << p[n] << ", ";
    delete[] p;     //删掉
  }
  return 0;
}


// 12 data structure (一个类别下的分支，若：产品 -> 价格，质量，数量)
// data structure pointer，arror operator（用pointer调用类别下的分支）
// nesting data structure
// data structure也是一种data type
struct product {
  int weight;
  double price;
} apple, banana, melon;

//也可以表达成：
struct product {
  int weight;
  double price;
} ;

product apple;
product banana, melon;

//之后可以这样用：
apple.weight
apple.price
banana.weight
banana.price
melon.weight
melon.price

//data structure也有pointer
product product1;
product * pproduct;
pproduct = &product1;

// arrow operator （->)
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
    string title;
    int year;
};

int main() {
    string mystr;

    movies_t amovie;
    movies_t *pmovie;
    pmovie = &amovie;

    cout << "Enter title: ";
    getline (cin, pmovie->title);   //input放入amovie的title下

    cout << "Enter year: ";
    getline (cin, mystr);
    (stringstream)mystr >> pmovie -> year;  //sstream, 另一种input方式

    cout << "\nYou have entered:\n";
    cout << pmovie -> title;       //print pointer下的某一项（代替直接输入的amovie.title)
    cout << " (" << pmovie->year << ")\n";
}

// nesting structures (一个data structure下有另一个data structure)
struct movies_t {
  string title;
  int year;
};

struct friends_t {
  string name;
  string email;
  movies_t favorite_movie;
} charlie, maria;

friends_t * pfriends = &charlie;


//13 typedef (type alias), union, anonymous unions, 
//   enumerated type, enumerated type with class, 
//   enumerated type with class with specific type
// type alias (type化名)
// 方法一
typedef char C;
typedef unsigned int WORD;
typedef char *pChar;
typedef char field[50];

C mychar, anotherchar;
WORD myword;
pChar ptc2;
field name;
// 方法二
using C = char;
using WORD = unsigned int;
using field[50] = char;

//union
union type {
    int i;
    char c;
    float f;
} mytype;

mytype.c
mytype.i
mytype.f

//anonymous unions          //regular union
struct book {               struct book {
    char title[50];             char title[50];
    char author[50];            char author[50];
    char author[50];            char author[50];
    union {                     union {
        float dollars;              float dollars;
        int yen;                    int yen;
    }                           } price;        //有price                   
} book1;                    } book1;

book1.dollars               book1.price.dollars  

// enumerated types (列举type；全新的diy data type)
enum colors {
    black,
    blue,
    red
};  //colors是一个data types，variable只能是black blue red之一

colors mycolor;
mycolor = blue;

//enumerated type with enum class
enum class Colors {
    black,
    blue,
    red
};

Colors mycolor;
mycolor = Colors::black;

//enumerated type with enum class with specific type
enum class Colors:char {
    black,
    blue,
    red
};


// 14 class, access specifier, constructor, member initialization,
//    pointer to class
// class （可以包含function和access specifier（private，public，protected）的structure）
// access specifier
//private：仅可被同一class下的member引用
//protected：仅可被不同class下的member引用
//public：整个系统可引用
class Rectangle {
    int width, height;              //没有specific的都是private variables
    public:                         //包含access specifier
    int area(void);
    void set_values(int, int);      //包含函数
} rectangle1;

rectangle1.set_values(3,4);
myarea = rectangle1.area();

//例子
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    void set_values(int, int);
    int area() {
        return width*height;
    }
};

void Rectangle::set_values(int x, int y) {
    width = x;
    height = y;
}

int main() {
    Rectangle rectangle1;
    rectangle1.set_values(3,4);
    cout << rectangle1.area();
}

//constructor （没有return，且不是void）（方便一些必须有参数定义的class
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    Rectangle (int, int);   //必须exactly是class的object的名字，即Rectangle
    int area() {
        return width*height;
    }
};

Rectangle::Rectangle(int x,int y) {     //constructor
    width = x;
    height = y;
};

int main() {
    Rectangle rectangle1 (3,4);
    Rectangle rectangle2 (5,6);
    
    cout << "rectangle1 area: " << rectangle1.area() << '\n';
    cout << "rectangle2 area: " << rectangle2.area() << '\n';
}

// member initialization
class Rectangle {
    int width,height;
  public:
    Rectangle(int x,int y): width(x), height(y) {}; //member initialization
    int area() {return width*height;}
};

// pointer to class
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
    Rectangle (int x, int y):width(x),height(y) {}  //必须exactly是class的object的名字，即Rectangle
    int area(void) {
        return width*height;
    }
};

int main() {
    Rectangle obj(3,4);
    Rectangle *foo, *bar, *baz;
    foo = &obj;
    bar = new Rectangle(5,6);
    baz = new Rectangle[2] {{2,5}, {3,6}};

    cout << "obj's area: " << obj.area() << '\n';
    cout << "*foo's area: " << foo ->area() << '\n';
    cout << "*bar's area: " << bar ->area() << '\n';
    cout << "baz[0]'s area: " << baz[0].area() << '\n';
}


// 15 static members，const member function，
// const member function returning a const，class template
// static members(也叫class variable，无参数，所有variable都是一个值，
// 整个class就是一个counter，count这个class中有多少variable)
#include <iostream>
using namespace std;

class Dummy {
    public:
        static int n;
        Dummy() {
            n++;
        }
};

int Dummy::n = 0;   //当constructor没有variable时，直接class::n

int main() {
    Dummy a;
    Dummy b[5];
    cout << a.n << '\n';        //a是一个class variable，所以a一个，b五个，一共六个，0+6=6
    Dummy *c = new Dummy();     //加一个新class variable
    cout << Dummy::n << '\n';   //6+1 = 7
}

// const member function
#include <iostream>
using namespace std;

class Myclass {
    public:
    int x;
    Myclass (int val): x(val) {}
  //int get() { (一旦class的variable被const了，所有函数都要const)
    int get() const {
        return x;
    }
};

int main() {
    const Myclass foo(10);
    //foo.x = 20 (can't succeed because of const, it's forever 10)
    cout << foo.x << '\n';
    cout << foo.get() << '\n'; //（can succeed only if the function get()is const ）
    
    
    }

// const member function returning a const
#include <iostream>
using namespace std;

class MyClass {
    int x;
    public:
    MyClass(int val): x(val) {}
    const int &get() const {     //因下面的print function是const的，若想print成功运行，这里的pointer也要const
        return x;
    }
};

void print (const MyClass &arg) {
    cout << arg.get() << '\n';
};

int main() {
    MyClass foo(10);
    print(foo);
}

// const member和const return区别 重要！
int get() const {return x;}        // const member function
const int &get() {return x;}       // member function returning a const&
const int &get() const {return x;} // const member function returning a const&

// class template (存在的意义就是不写data type，只在main中才写)
#include <iostream>
using namespace std;

template <class Template>
class mypair {
    Template a,b;
    public:
    mypair (Template first, Template second) {  //constructor
        a = first;
        b = second;
    }
    Template getmax();
};

template <class Template>   //需要在写一遍！
Template mypair <Template>::getmax() {  //定义getmax()函数，无变量函数直接class::getmax();
    Template retval;
    retval = a>b ? a:b;
    return retval;
}

int main() {
    mypair <int> myobject(100,75);
    cout << myobject.getmax();
}


// 16 Special members (也叫implicit members)：
//    member function, default constructor, destructor, 
//    copy constructor, copy assignment, move constructor, move asignment
//    how to call special members in main()
//    default or delete implicit member
Member function:	     typical form for class Class:
Default constructor	     Class::Class();
Destructor	             Class::~Class() {delete ptr;};
Copy constructor	     Class::Class (const Class &);
Copy assignment	         Class &operator= (const Class &);
Move constructor	     Class::Class (Class &&);
Move assignment	         Class &operator= (Class &&);

// default constructor
#include <iostream>
#include <string>
using namespace std;

class Class {
    string data;
  public:
    Class (const string &str):data(str) {}  //default constructor
    Class () {} //default constructor2
    const string &content() const {     //const member function returing const (固定格式)
    }
};

int main() {
    Class foo;
    Class bar ("Example!");

    cout << "bar's content is: " << bar.content() << '\n';
    cout << "foo's content: " << foo.content() << '\n';

}
//ouput: bar's content is: Example!
//       foo's content: 

// desturctor
#include <iostream>
#include <string>
using namespace std;

class Class {
    string *ptr;
    public:
        Class():ptr(new string) {}  // constructor1
        Class(const string &str): ptr(new string(str)) {}  //const constructor

        ~Class() {                  // destructor,happens at the end of main
            delete ptr;
        }

        const string &content() const {   // const member function returning const
            return *ptr;                  // 用来access content
        }
};

int main() {
    Class foo;
    Class bar("Example!");

    cout << "bar's content: " << bar.content() << '\n';
    cout << "foo's content: " << foo.content() << '\n';
}
//ouput: bar's content is: Example!
//       foo's content: 

// copy constructor, copy assignment
#include <iostream>
#include <string>
using namespace std;

class Class {
    string *ptr;
    public:
      Class (const string &str): ptr(new string(str)) {} //constructor
      ~Class() {                                         //destructor
          delete ptr;
      }
      Class(const Class &x): ptr(new string(x.content())) {} //copy constructor(有x)
      const string &content() const {return *ptr;}       //access content
      Class &operator= (const Class &x) {                //copy assignment
          delete ptr;
          ptr = new string(x.content());
          return *this;
      };      
};

int main() {
    Class foo("Example!");
    Class bar = foo;

    cout << "bar's content: " << bar.content() << '\n';
}
// output: bar's content: Example!

// move constructor, move asignment
#include <iostream>
#include <string>
using namespace std;

class Class {
    string *ptr;
    public:
      Class (const string &str): ptr(new string(str)) {} //constructor
      ~Class() {                                         //destructor
          delete ptr;
      }
      Class (Class &&x): ptr(x.ptr) {                    //move constructor （如果不需要move constructor，是因为return value optimization)
          x.ptr=nullptr;                                 //在move之前必须确保x的sourse是unnamed的         
      }
      Class &operator = (Class &&x) {                    //move assignment
          delete ptr;
          ptr = x.ptr;
          x.ptr= nullptr;
          return *this;
      }
      const string &content() const {return *ptr;}       //access content
      Class operator+ (const Class &rhs) {               //function (定义“+”为class之间的加法)
          return Class(content() + rhs.content());
      }
};

int main() {
    Class foo("Exam");
    Class bar = Class("ple");

    foo = foo +bar;

    cout << "foo's content: " << foo.content() << '\n';
}

// how to call them in main():
MyClass fn();            // function returning a MyClass object
MyClass foo;             // default constructor
MyClass bar = foo;       // copy constructor
MyClass bar (foo);       // copy constructor
foo = bar;               // copy assignment
MyClass baz = fn();      // move constructor
baz = MyClass();         // move assignment 


//default or delete implicit member
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int x, int y):width(x), height(y) {}
        Rectangle() = default;  //default将会输出储存这个constructor的地址
        Rectangle(const Rectangle &other) = delete; //输入的除了Rectangle xxx(int x, int y)和Rectangle xxx;以外的都将被删除
        int area() {
            return width*height;
        }
};

int main() {
    Rectangle foo;
    Rectangle bar(10, 20);

    cout << "bar's area: " << bar.area() << '\n';
    cout << "foo's area: " << foo.area() << '\n';
}
//output：
//bar's area: 200
//foo's area: 233300005
//这种情况行下Rectangle baz(foo) 就invalid，即copy constructor is invalid


// 17 friend function, friend class, 
//    inheritance(base class, derived class),multiple inheritance
//    polmorphism (pointer of derived class)，
//    virtual members，abstract base class


// friend function
#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
    public:
        Rectangle(int x, int y):width(x), height(y) {}
        Rectangle() {}
        int area() {
            return width*height;
        }
        //friend Class xxx (const Class &) function允许
        //在function内调用private/protected variables
        friend Rectangle duplicate (const Rectangle &); 
};

  // Class xxx (const Class &zzz), &zzz就是Rectangle的private variable的地址
Rectangle duplicate (const Rectangle &param) {
    Rectangle rectangle1;
    rectangle1.width = param.width*2;
    rectangle1.height= param.height*2;
    return rectangle1;
}

int main() {
    Rectangle foo;
    Rectangle bar(2,3);
    foo = duplicate(bar);

    cout << "foo's area: " << foo.area() << '\n';
}
//output: foo's area: 24

//friend class
#include <iostream>
using namespace std;

class Square;  //必须在class Rectangle引用Square之前定义Square

class Rectangle {
    int width, height;
    public:
        int area() {
            return width*height;
        }
        void convert(Square a);
};

class Square {
    friend class Rectangle;  //Square的friend class： Rectangle
    private:
        int side;
    public:
        Square(int a): side(a) {}
};

void Rectangle::convert(Square a) { //必须放在两个class下方
    width = a.side;     //固定格式：argument.private variable
    height = a.side;
}

int main() {
    Rectangle rectangle1;
    Square square1(4);
    rectangle1.convert(square1);
    cout << rectangle1.area();
}

//base class & derived class (inheritance)
#include <iostream>
using namespace std;

class Polygon {
    protected:  //注意！是protected的，不是private的，因为inheritance不能access private variable！
        int width, height;
    public:
        void set_values(int a, int b) {
            width = a;
            height = b;
        }
};

class Rectangle: public Polygon {
    //不用再定义width和height，base class的protected，public都inherit
    //private variable不能inherit！！！！！！！！！！！！！！
    public:
        int area() {
            return width*height;
        }
};

class Triangle: public Polygon {
    public:
        int area() {
            return width*height / 2;
        }
};

int main() {
    Rectangle rectangle1;
    Triangle triangle1;
    rectangle1.set_values(4,5);
    triangle1.set_values(6,7);
    cout << rectangle1.area() << '\n';
    cout << triangle1.area() << '\n';
}
//output：20，21

// multiple inheritance
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    Polygon (int a, int b) : width(a), height(b) {}
};

class Output {
  public:
    static void print (int i);
};

void Output::print (int i) {
  cout << i << '\n';
}

class Rectangle: public Polygon, public Output {
  public:
    Rectangle (int a, int b) : Polygon(a,b) {}
    int area ()
      { return width*height; }
};

class Triangle: public Polygon, public Output {
  public:
    Triangle (int a, int b) : Polygon(a,b) {}
    int area ()
      { return width*height/2; }
};
  
int main () {
  Rectangle rect (4,5);
  Triangle trgl (4,5);
  rect.print (rect.area());
  Triangle::print (trgl.area());
  return 0;
}
//output：20 10

//polmorphism (pointer of derived class)
#include <iostream>
using namespace std;

class Polygon {
    protected:  //注意！是protected的，不是private的，因为inheritance不能access private variable！
        int width, height;
    public:
        void set_values(int a, int b) {
            width = a;
            height = b;
        }
};

class Rectangle: public Polygon {
    //不用再定义width和height，base class的protected，public都inherit
    //private variable不能inherit！！！！！！！！！！！！！！
    public:
        int area() {
            return width*height;
        }
};

class Triangle: public Polygon {
    public:
        int area() {
            return width*height / 2;
        }
};

int main() {
    Rectangle rectangle1;
    Triangle triangle1;

    Polygon *prectangle1 = &rectangle1; //设置derived class的pointer
    Polygon *ptriangle1 = &triangle1;   //设置derived class的pointer

    prectangle1 -> set_values(4.5);     //pointer to define values
    ptriangle1 -> set_values(4,5);      //pointer to define values

    cout <<  rectangle1.area() << '\n';
    cout << triangle1.area() << '\n';
}
//output：20，21

// virtual members(可以在derived class中redefine的base class里面的member function)
// virtual members
#include <iostream>
using namespace std;

class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area ()     //virtual member！
      { return 0; }
};

class Rectangle: public Polygon {
  public:
    int area ()
      { return width * height; }
};

class Triangle: public Polygon {
  public:
    int area ()
      { return (width * height / 2); }
};

// abstract base class
// 当一个base member里面有一个virtual member，且无定义，以 “=0”结尾
// 默认为一个只能是base class的class，名叫abstract base class
class Polygon {
  protected:
    int width, height;
  public:
    void set_values (int a, int b)
      { width=a; height=b; }
    virtual int area () =0;     //abstract base class的virtual member！
    void printarea() {      
        cout << this->area() << '\n'; //abstract base class的virtual member可以直接在base class中被call
    }
};

// 18 implicit conversion，typeid，functon pointer
//    dynamic_cast (upcast & downcast available)，
//    static_cast (upcast & downcast available) (but cant gurentee the safety)
//    reinterpret_cast (upcast downcast无限制，class也无限制)

// class中的implicit conversions内涵转换包含三种：
// default constructor，copy assignment，type-cast operator
#include <iostream>
using namespace std;

class A {};

class B {
public:
  // conversion from A (constructor):
  B (const A& x) {}
  // conversion from A (assignment):
  B& operator= (const A& x) {return *this;}
  // conversion to A (type-cast operator)
  operator A() {return A();}
};

int main ()
{
  A foo;
  B bar = foo;    // calls default constructor （特例：其余的都是copy constructor）
  bar = foo;      // calls assignment
  foo = bar;      // calls type-cast operator
  return 0;
}

// dynamic_cast (upcast & downcast available)
#include <iostream>
#include <exception>
using namespace std;

class Base {
    virtual void dummy() {}
};

class Derived: public Base {
    int a;
};

int main() {
    Base *pbase1 = new Derived; //Derived属于Base（有层级）,则可以成功被使用为dynamic cast
    Base *pbase2 = new Base;    //Base不属于Base（无层级）,无法成功被使用为dynamic cast
    Derived *pderived;

    pderived = dynamic_cast<Derived *>(pbase1);   //dynamic cast pbase1 to pderived （success）
    if (pderived == 0)
        cout << "Null pointer on 1st type-cast.\n";
    
    pderived = dynamic_cast<Derived *>(pbase2);   //dynamic cast pbase2 to pderived（failed）
    if (pderived == 0)
        cout << "Null pointer on 2nd type-cast.\n";
}

//static_cast (upcast & downcast available) (but cant gurentee the safety)
class Base {};
class Derived: public Base {};
Base *a = new Base;
Derived *b = static_cast<Derived *>(a);

//reinterpret_cast (upcast downcast无限制，class也无限制)
class A {};
class B {};
A *a = new A;
B *b = reinterpret_cast<B *>(a);

//const_cast
#include <iostream>
using namespace std;

void print (char *str) {
    cout << str << '\n';
}

int main() {
    const char *c = "sample text"; //定义pointer c的内容
    print (const_cast<char *>(c));  //把*c cast给function “print”
}

// typeid (check type of a variable)
#include <iostream>
#include <typeinfo>
using namespace std;

int main () {
  int * a,b;
  a=0; b=0;
  if (typeid(a) != typeid(b))
  {
    cout << "a and b are of different types:\n";
    cout << "a is: " << typeid(a).name() << '\n';
    cout << "b is: " << typeid(b).name() << '\n';
  }
  return 0;
}
//output:
//a and b are of different types:
//a is: int *
//b is: int  

// functon pointer
#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a+b;
}

int subtraction(int a, int b) {
    return a-b;
}

int operation (int x, int y, int (*functocall)(int,int)) {  //functocall为pointer，在main中定义
    int g;
    g = (*functocall)(x,y);  //functocall是pointer point to functions 
    return g;     
}

int main() {
    int m,n,p,q;
    int (*minus)(int, int) = subtraction; //新设一个pointer point to subtraction

    m = operation(2,3,subtraction);  
    n = operation(2,3,minus);
    p = operation(2,3,addition);
    q = addition(2,3);

    cout << m << '\n' << n << '\n' << p << '\n' << q;
}
