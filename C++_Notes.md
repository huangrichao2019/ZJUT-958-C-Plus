## Title
- 查看运行效果：右上角「运行按钮」
- 预览MD：cmd+shift
- 查看终端效果：F5
- 编译指令：g++ -g -Wall -std=c++11 helloworld.cpp hello.cpp -o helloworld  
- 执行：./helloworld

```
gantt
dateFormat YYYY-MM-DD
title 清华大学C++自主学习进度
section 初期阶段
语法基础: 2018-09-5,3d
section 中期阶段
代码编写: 2018-9-11,20d

```
[toc]
# Xcode C++常用快捷键
## @author : huangrichao
1. build : cmd + b
2. run : cmd + r
3. debug : 设置断点后按run自动进入debug
4. 运行到下一断点或结尾 : cmd + ctrl + Y
5. 下一步 : f6
6. 进入循环 : f7
7. 跳过循环 : f8
8. 批量注释 : cmd + /
9. 选中一行 : cmd + shift + →
10. 选中多行 : shift +←→ + ↑↓
11. 查看调试变量 : debug到变量所在代码段后,将鼠标停留在对应变量上,自动浮现其值
12. 使当前行上下移动 : alt + ↑↓ 
***


# 心得笔记

### 自顶向下做功能分解
    学习心法:
            1. 不这样想就不能xxx.不断点头,肯定知识
            2. 用自己的话把知识讲一遍
            3. 写写画画见奇效
            
### 1.using namespace std;的意义
    1.1 声明一个空间,使得程序在该空间内可以大量命名,不与其他空间冲突

### 2.常量必须初始化
    2.1 常量必须初始化,且后续不可修改.
    2.2 const float PI = 3.1415926 

### 3.显示转换:static_cast<int>pi
### 4.隐式转换:int a =1
    4.1 double c = a+ 1.0 没有类型转换符号,但是a悄悄地被改成了double
### 5.调试Debug
    利用辅助调试工具,可以实现单步运行,设置断点,观察变量和表达式的值等功能.
### 6.数据的输入与输出
    6.1 程序空间与程序空间之外的空间.c++没有输入输出语句,只能通过输入输出流类里定义好的功能
    6.2 << 是cout流对象的预定义插入符 cout<<a<<b<<endl
    6.3 >> 是cin流对象的提取符 cin>>a>>b
    6.4 常用操纵符:dec十进 hex十六进 oct八进 ws空白符 
        endl 换行并刷新 ends 空字符 setw(int)设置域宽
        setprecision(int)设置浮点数的小数有效位数 
    
例如 : **cout<<setw(5)<<setprecision(3)<<3.14159;**

### 7.else嵌套
**else会自动匹配离它最近的同一个代码块内(大括号)的if**
```
graph LR
A(IF)-->B(if)
A(IF)-->C(else)

D(else)-->E(if)
D(else)-->F(else)
```

### 8.已有类型建别名
    8.1 typedef int Nature
    8.2 using Area = double 
    8.3 using Week = int  这样一来不会出现Week 7 这种低级错误
    
**通过类型别名使代码更能自证其意,同时保证程序员们维护他人代码时不会犯浑**

### 9.枚举类型
    9.1 在main前声明语句 enum GameResult{WIN,LOSE,AGAIN,CANCEL}; 
    9.2 把GameResult当类型使用即可 每个元素顺序对应一个int型数,默认0起
    9.3 访问枚举元素 类型名(对应整数) GameResult(0)
    9.4 类型转换 枚举->整数 int state = WIN; 
        整数->枚举 GameResult result = GameResult(0);
    9.5 因为支持隐式转换,故枚举元素支持与int型数做混合运算
        
```
graph LR
A(整型)-->|显示转换| B(对应的枚举元素)
B-->|隐式转换|A
C(整型)-->|Result result = Result括号0括号 | D(对应的枚举元素)
D-->|int state = WIN,WIN是Result类元素|C

```

```c++
using namespace std;
enum GameResult = {WIN,LOSE,PAUSE,CANCEL};
int main(){
    GameResult result;
    enum GameResult end = CANCEL;
    for(int state = WIN; state < CANCEL; state++){
        result = GameResult(state);
        if(result==end) 
            cout<<"The game was cancelled"<<endl;
        else{
            cout<<"The game was played!";
            if(result==WIN)
                cout<<"and we won!";
            if(result==LOSE)
                cout<<"and we lost.";
            cout<<endl;
        }
    }
    return 0;
}
```

### 10.auto与decltype类型
    auto 编译器通过初始值自动给变量声明,如 auto var = 1 + 1.0 
    decltype 强制给一个变量声明 decltype(game) j =2 强制将j声明为game类型
    static_cast<int>(表达式) 将表达式的值强制转成int
    
### 11.c++结构
```c++
    struct MyTimeStruct{
      int year;
      int month;
      int day;
      int hour;
      int min;
      int sec;
    };
```

    11.1 结构体就是类型集合,本身也是一个数组类,初始化如下:
         MyTimeStruct mytime = {2015,3,16,12,0,0};
    11.2 用成员符访问结构体属性,输出如下:
         cin >> mytime.year;
    
### 12.函数,支持复用的代码块
    12.0 科学计数 1e-15 相当于10的负15次方
    12.1 内联函数
    12.2 constexpr函数,符号常量函数
    12.3 默认参数函数
    12.4 支持函数重载,都是同名函数,根据传入实参不同,编译时找到并绑定函数体
    12.5 形参就是函数本地局部变量
    12.6 函数调用前必须做函数原型声明,方便编译器核对.当然函数体写在main前面不必做该声明.
    12.7 函数体中常用第三方变量做缓存,常用映射思想.如11101101,第一个"1" 内涵"7"这个数字,从左到右遍历转换成十进制数,可在for循环中使用内涵的数字.
    
编程实现arctan(x)函数
```math
arctan(x) = x - \frac{x^3}{3}+\frac{x^5}{5}-\frac{x^7}{7}+\cdots
```
解析,该公式可以看出四个抽象:
1. 公式总值f
2. 当前分母i
3. 当前分子e
4. 当前项值r

`$\begin{bmatrix}
{a_{11}}&{a_{12}}&{\cdots}&{a_{1n}}\\
{a_{21}}&{a_{22}}&{\cdots}&{a_{2n}}\\
{\vdots}&{\vdots}&{\ddots}&{\vdots}\\
{a_{m1}}&{a_{m2}}&{\cdots}&{a_{mn}}\\
\end{bmatrix}$`

作者：ColdRomantic
链接：https://www.jianshu.com/p/a0aa94ef8ab2
來源：简书
简书著作权归作者所有，任何形式的转载都请联系作者获得授权并注明出处。
```c++
double arctan(double x){
    double e = x;
    int i = 1;
    double f = 0.0;
    double r = 0.0;
    
    while(e/i > 1e-15){
        f = e/i;
        //如何描述i是1,5,9,13等差数列中的一员 
        //if(i==4*(n++)+1),即i/4=(n+1)......1
        //即i%4==1,则i是其中一员
        //if(i%4==1),完美去掉n
        r = (i%4==1)? r+f:r-f;
        e = e*x*x;
        i += 2;
    }
}
```
    
判断某数是否回文数,用取余判断
```c++
bool reverseNum(unsigned n){
    unsigned int t = n;
    unsigned int m = 0;
    while(t){
        m = m*10 + t%10;
        t /= 10 ;
    }
    return m==n;
}
```

计算如下公式:`$y=x^2$`
```math
k=\begin{cases}\sqrt{\sin^2r+\sin^2s} ~~~~r^2\leq s^2\\ ~\frac{1}{2}\sin(rs)~~~~~~~~~~~~~~~~r^2>s^2 \end{cases}
```
### $\sin x=\frac{x}{1!}-\frac{x^3}{3!}+\frac{x^5}{5!}+\cdots=~\sum_{n=1}^{n}(-1)^{n-1}~\frac{x^(2n-1)}{(2n-1)!}$


### 13.函数
    13.1 带默认参数函数.有实参则覆盖,实参没有给够则使用默认参数
    13.2 重载函数 同一文件内的多个同名同功能不同参数的函数,不允许功能不同的重载
    13.3 如何在程序内输入角度,用隐藏了单位符号的弧度制,angle = angle/180*PI;
    
### 14.对象
    用类的构造函数创建对象.
    用类的构析函数删除对象.
    用类的大括号实现封装,提供具备特定访问权限的对外接口
    默认构造函数,要么没形参,要么全是默认形参
    
    类中写了专门的构造函数,但有希望需要时也能使用默认构造函数;
    Clock()=default;//默认构造函数的专门写法
    Clock(int newH,int newM,int newS)
```c++
class Clock{
    Clock()=default; //定义默认构造函数,且所有属性默认为0
    Clock(int newH,int newM,int newS);
    Clock(const Clock &p) ;//=delete则编译器不生成默认复制构造函数
    ~Clock();//析构函数原型声明
    //第一行权限不定义的话,默认private
    private:
        int hour,minute,second;
    protected:
    public:
        void setTime(int newH,int newM,int newS);
        void showTime();
};
//实现析构函数
CLock::~Clock(){
}

//类外定义构造函数
Clock::Clock(int newH,int newM,int newS):
//初始化列表指定初始化赋值操作
hour(newH),minute(newM),second(newS){ 
}

//类外定义默认构造函数,若类内只是声明了默认构造函数却没default的话.
Clock::Clock():hour(0),minute(0),second(0){
//相当于 hour=0;minute=0;second=0;
}

//C++允许用委托构造函数,复用已有构造函数的初始化列表
//如默认构造函数可以复用已有构造函数写成
Clock():Clock(0,0,0){}

//类外定义函数
void Clock::setTime(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}
void Clock::showTime(){
    cout<<hour<<":"<<minute<<":"<<second;
}
Clock::Clock(const Clock &p){
    hour = p.hour;
    minute = p.minute;
    second = p.second;
}
//应用
int main(){
    Clock myClock(0,0,0);//调用自定义构造函数
    Clock yourClock();//调用默认构造函数
    Clock hisClock(myClock);//调用复制构造函数
    myClock.~Clock();//释放myClock对象资源
    myClock.setTime(8,30,30);
    myClock.showTime();
    return 0;
}
```
    14.1 类的成员函数
    允许在类外定义函数,函数前缀必须加类名,且类内对该函数作原型声明
    最后在类内定义函数,形成内联函数
    
    14.2 形参引用
    一个对象作为实参被函数引用后,本质是一个双向引用,
    即该对象可以赋值给函数内部的量,函数内也可以反过来操作该对象.
    因为引用是指针指向的,所以函数对对象的修改会真实地传到对象所在空间,所以要用const修饰

### 15.复制构造函数(类似于new,但以复制为主)
    编译器会自动生成默认复制构造函数,有时需要特定功能的复制构造,部分修改或部分复制,故此时需要自定义复制构造函数.
    将已有对象作为引用参数,被构造函数调用.使得两个对象的数据成员间一一复制.
    复制构造函数发生作用的三种场景
    15.1 定义本类新对象时
        Point b(a);
    15.2 类对象做函数形参时
        应用场景 fun1(b)
        void fun1(Point p){ 
            p.getX();
        }
    15.3 函数返回类对象(匿名,因为在正式的main里该对象被函数代表了)
        Point fun2(){
            Point a;
            return a;//a是局部对象,要想返回给主函数,必须用复制构造函数
        }

### 16.对象消亡时自动调用析构函数
### 17.组合类构造函数
    不仅要初始化本类成员,也要初始化对象成员(该传参传参)
    若不写组合类构造函数,则自动调用对象成员的默认构造函数
    
### 18.类的前向引用声明
    class B;
    class A{
        void f(B b);
    };


<hr>

# 菜鸟C++

## 1. C++的类与对象

1.1 C语言的内部类关键字`struct`
```
#include <stdio.h>
//定义结构体 Student
struct Student{
    //结构体包含的成员变量
    char *name;
    int age;
    float score;
};
//显示结构体的成员变量
void display(struct Student stu){
    printf("%s的年龄是 %d，成绩是 %f\n", stu.name, stu.age, stu.score);
}
int main(){
    struct Student stu1;
    //为结构体的成员变量赋值
    stu1.name = "小明";
    stu1.age = 15;
    stu1.score = 92.5;
    //调用函数
    display(stu1);
    return 0;
}
```
1.2 C指针

C语言里一切函数遵循`值传递`,即`pass by value`，而我们是没法对值赋值的，比如把1赋给7，此时想改变对象的值必须对指针进行操作。


指针是程序数据在内存中的地址，而指针变量就是用来保存这些地址的标识符。int* char* float* Student*等


1Byte = 8 bit，数据以字节为单位，内存就是一张线性表，每个字节都有自己的编号。比如初始化 int num =10；10这个数被分配到第101-104号字节里，此时*num 代表了101-104这个地址空间名.


但是我怎么知道num的真实地址是多少，&num就是num的真实地址,*num这个内存块里的内容就是&num。

![](http://ww1.sinaimg.cn/large/006tNc79ly1g3ro0ce8oxj31m60jegn5.jpg)

*ch和ch[]等价，**ch和ch[][]

```
#include <stdio.h>

int main(void)
{
    char ch = 'a';
    int  num = 97;
    printf("ch 的地址:%p\n",&ch);   //ch 的地址:0028FF47
    printf("num的地址:%p\n",&num);  //num的地址:0028FF40
    return 0;
}
```

97的二进制是 : 00000000 00000000 00000000 0110000 , 但使用的小端模式存储时，低位数据存放在低地址，所以图中画的时候是倒过来的。
![](http://ww4.sinaimg.cn/large/006tNc79ly1g3qp3vzcxmj31fw0gcmy7.jpg)

num是int型数据，占了四个字节的内存块，`0028FF40`就是标志这个内存块的虚拟内存地址

内存的容量有限，所以我们划分了栈区，堆区，静态数据区，方法区来给不同的数据分配不同的生命周期。

指针总结：
- 当 int num = 9 并且 &num == 0022FF88时;
- 变量名`num`就是数据`9`所在的内存地址块名；
- 此时num这个内存地址块的地址是0022FF88 内容是二进制的4；
- *num这个内存地址块的内容就是二进制的0022FF88 地址未知;
- 编译器优化，对*num赋值就是0022FF88这个内存块送数；

**( 即一旦\*fp_num = \&num; \*fp_num就是java里的num; )**

**(指针一旦初始化，它就是代表它所指向的变量)**

**(指向的含义：\*fp_num = &num等价于初始化一个变量fp_num，其内容为\*fp_num,而C++里地址的赋值就是向这个地址松鼠。所以对\*fp_num的修改就是对num的修改)**



- 指针可以指向基本数据类型，已定义的结构体，已定义的函数，已定义长度的数组，指针（此时指针的指针为int） 

- %p 16进6字节96位内存地址

- 指针浅拷贝 int* fp_number = fp_num ，复制一个链接，依旧指向num

- 空指针 int* fp_num = null;C++里 null == 0
- 野指针 指向了null等程序不可访问的内存地址块，或指向未知地址。

### 一句总结指针
指针不是变量所以它不能被赋给变量，只能赋给指针，指针就是一个软连接，真正指向的变量在另外一个地方。

```c++
int num = 9;
int *fp_num = &num;
//分解为 int* fp_num = &num;
//*fp_num == num；
//注意int fp_num = &num没有任何意义，int不能构建链表关系，int*可以构建指向链表关系。
```

```c++
int main(void)
{
    int num = 97;
    int *p1  = &num; //初始化int型，从&num开始往后取4个字节的二进制内容，并保存为int
    char* p2 = (char*)(&num);//初始化char型，从&num开始往后取1个字节的二进制内容，并保存为char

    printf("%d\n",*p1);    //输出  97
    putchar(*p2);          //输出  a
    return 0;
}
```

### C与C++


 || 逻辑类型|真|假
---|---|---|--
C |无 |非0|0|
C++ | bool|true|false|

有bool值可以允许变量自证其义。比如`if(isFlag){}`

初始化：
- 直接初始化：int x (1024);
- 赋值初始化：int x = 1024;
- 变量允许随在需要的时候再定义变量

### C++的I/O方式
- cout<<x<<endl;
- cout<<'x+y='<<x+y<<endl;
- cin >> x;
- cin >> x >> y;

### 编译步骤

gcc and g++分别是gnu的c & c++编译器   
gcc/g++在执行编译工作的时候，总共需要4步   
1.预处理,生成.i的文件  

    预处理器cpp
2.将预处理后的文件不转换成汇编语言,生成文件.s  

    编译器egcs
3.有汇编变为目标代码(机器代码)生成.o的文件

    汇编器as
4.连接目标代码,生成可执行程序

    连接器ld


`常用指令 g++ -Wall hello.cpp -o hello 生成全部警告信息，并生成hello.obj可执行文件`

## C++的输出
- C++取消的%d，%o，%x的用法
- 改用cout<<oct<<x,八进制
- cout<<dec<<x,十进制
- cout<<hex<<x，十六进制
- cout<<bitset<8>(y)
- cout<<boolalpha<<x; 输出bool格式，而不是输入bool格式,因为输入的东西在变量空间里都是一串二进数.大于0就是ture


### 命名空间namespace
所有的stdlib.h或iostream文件都在std空间里


### 引用
- 变量是一个有内容（值）的内存空间的名字
- 引用就是变量的别名，故引用必须初始化，它必须先声明一次所指向的对象。
- 引用也可以是结构体的别名
- 引用也可以是指针的别名，注意指针的引用也是指针
总结：引用不是地址，它就是不同名字的同一变量

#### 引用可以做函数参数
c的写法
- void fun(int *a,int *b){};
- fun(&x,&y);
c++的写法
- void fun(int &a,int &b){};
- fun(x,y)

## const

对于 int x =3 有如下内存模型

|变量名|存储地址|存储内容|
--|--|--|--
|x|&x|3|

const int x =3 则存储内容置灰不可变

### 写法
```c++
int x = 3;
const int *p = &x //*p不可变 x不可变，p可变,
int const *p = NULL 二者等价 //*p不可变,x不可变，p可变

指针变量p与指针*p是两个不同的东西 const一次只能锁一个，所以需要两个const

int* const p =NULL //*p可以变，p不可变
const int* const p =&x //*p,p都不可变
int const* const p= NULL //*p,p都不可变

const int y =5 不可赋值给 int* const t = &y; 二者不是同事物

int *p = &x; 准确得写法是int* p = &x；因为p与&x都是int数据

*p是int* ,二int* 就是x，&x是int，二者不一致；

const int x = 10;
int y = x;不允许，const变量不允许被赋给非const
```
#### 指针总结
```C++
int x = 3;
int y = 5;
int* p = &x; 此时 x.equals(*p)；等价于 int &t = x;此时x.euqals(t)
p=&y;此时,y.equals(*p);等价于int &t = y;此时y.equals(t)；
```

### 变量的作用域

- 函数外 全局变量 支持自动初始化
- 函数参数 形式参数 必须初始化
- 函数内 局部变量 必须初始化
- const常量必须初始化，无论在哪里

全局变量自动初始化
|||
--|--|--|
int|0
char|'\0'
float|0
double|0
pointer|NULL

### 函数参数默认值
void func(int x,int y,int z=0)，默认参数必须放最后

一旦有了默认参数，形参可有可无，以下都行：
void func(1,2)
void func(1,2,3)

### 函数重载
- 统一作用域内的同名不同参数（类型，数量）函数 

### 内联函数
- 编译时编译器直接将函数被调用处替代为函数体，实参赋给形参。尤其在编译循环时非常节省时间，代码又简洁编译效率又高。
- 用inline声明一下函数声明即可，是否生效由编译器决定。一般循环里频繁调用某个函数时会生效
- inline递归函数会失效

### if-if漏判
```c++
if(xxx){
    return xxx;
}
if(xxx){
    return xxx;
}
容易发生逻辑漏判，万一代码没少考虑了一种if情况，就会报错。编译器觉得，你是百分百会漏判的，故一定会报warning。
看到`warning`一定要及时改成`if-else`的形式，绝对不会漏。
```


### ASCII转数字

cout<<'x'+0<<endl;


### 内存管理

- new 申请内存时if判断一下申请失败的情况
- delete 回收内存后，需要将指向被回收空间的野指针设为NULL.
- int* arr = new int[10] 指针后面可以被变量赋，如果没有变量，可以new一个赋给它
- int* arr = new int(10)//创建无名变量，赋给指针
- int arr[2] = {10,20}//栈数组，连续内存适用于size较小时使用，可自动判空与回收，
- int* arr = new int[10]//堆数组，内存空间不连续适用于size较大时使用，动态分配，需手动判空与回收

### 标准模板
```c++
#include <stdlib.h>
#include <iostream>
using namespace std;


int main(int args,char* argv[]){
     
    cout<<"hello"<<endl; 
    cin.get();
    return 0;
}

```
