## 浙工大958C++
    
    本仓库属于浙工大计算机958代码仓库，**同时也是极好的C++入门教程仓库，你只要根据这篇Readme，一步一步来就能踏入程序开发的世界**
    


- 默认你会用github与vscode，百度一下这两样东西不会超过5分钟
- 下载仓库的同学git clone到本地后建议git fetch origin master:your_branch_name 该指令会基于远程master分支在你本地创建一个你自己的branch。 your_branch_name最好用自己的名字拼音，确保跟别人不一样
- git checktout your_branch_name即可进入自己的分支
- 需要在远程创建自己分支的话 git push origin your_branch_name:your_branch_name
- 本地push自己分支的代码到远程 git push --set-upstream origin your_branch_name
- 以后每次提交前请先git pull一下，防止conflict
- 打标签 git tag -a v1.0 -m '起航篇'
- 推送标签到远程 git push origin --tags


        编辑器推荐vscode，目录/代码/笔记/终端都在同一个界面,效果极好

![](http://ww3.sinaimg.cn/large/006tNc79ly1g4bgoe78okj31c00u048o.jpg)


### 1 LISENCE
    采用了Apache-2.0 LISENCE,最大权限地开源项目代码。大家提交时必须带上作者名，否则会被打回去。
**这是一个基于开源精神搭建起来的仓库，联系邮箱是huangrichao@growingio.com，工作日都可接受，欢迎提issues**

### 2 项目经验
- 考研复试，工作实习需要写简历的，参考这个简历提PDF [校招开发工程师简历](https://download.csdn.net/download/weixin_41474319/11251698)
- 想要搞几个项目丰富自己的简历，参考这篇博客[我是如何通过项目丰富我的简历的](https://blog.csdn.net/weixin_41474319/article/details/80885656)
- 毕设答辩PPT没时间写的，参考这个[PPT](https://download.csdn.net/download/weixin_41474319/11251688)
  

### 3 Git配置
[Git超速入门](https://blog.csdn.net/weixin_41474319/article/details/82850521)

    推荐如下配置，直接在终端里输就行，日常开发非常方便：
- git config --global user.email"you@example.com"
- git config --global user.name"你的名字"
- git config --global alias.co checkout
- git config --global alias.br branch
- git config --global alias.ci commit
- git config --global alias.st status
- git config --global alias.lg=log --graph --pretty=format:'%Cred%h%Creset -%C(yellow)%d%Creset %s %Cgreen(%cr) %C(bold blue)<%an>%Creset'
- git config --global alias.llg=log --pretty=format:'%h %ai %ce %s'

    git lg效果

![](http://ww4.sinaimg.cn/large/006tNc79gy1g4banjynctj31540bcwg7.jpg)


### 4 慕课C++入门地址
[C++起航篇等系列教程](https://www.imooc.com/course/list?c=cplusplus)

[C++数据结构堆栈队列线性表超速入门文章](https://blog.csdn.net/weixin_41474319/article/details/82962542)

### 5 代码目录
```
.
├── C++_Notes.md    //git入门教程
├── Git_Course.md   //C++学习笔记   这两个文件全部用makrdown语言整理好了，后续也会持续更新
├── LICENSE
├── readme.md
├── src
│   ├── 958C++      //真题代码
│   ├── board_out   //起航篇代码 bool cin cout namespace
│   ├── c_practise  //练手代码 C语言100例为主
│   ├── departure   //离港篇代码 指针&&引用 #define&&const 函数默认&&函数重载 内存管理
│   └── inherit     //继承篇代码
└── tree.md

6 directories, 5 files
```



### 6 代码编译参数
- 最好是Mac或Linux环境
- 推荐用终端编译cpp源文件 g++ -Wall -o hello hello.cpp生成hello可执行文件
- vscode自动编译快捷键cmd+shift+B
- ./hello即可运行

#### 6.1 代码的三层报错
- 第一层error > 第二层warning > 第三层run_bad 。请记住build well 不代表run well。否则程序员们也不用修bug了。
- 编译器报错（编译器就是你敲代码与编译运行代码的那个软件）属于最基本的报错，error表示语法错误,直接不让你运行程序。warning表示编译器提醒你代码里可能的问题与bug，但允许你运行程序。
- 很明显，error是所有c++编译器通用的，因为就那么几套语法版本
- 但是,warning就不一定了，同样一种写法int* p;不同的编译器开发公司定义不同的报错规则。在A编译器里是0 warning的程序，在B编译器里就可能是1 warning。
- 0 error 0 warning的程序就是完美的了吗？大错特错。如果这样的程序就是是完美的程序，那程序员也不用代码都交给客户了还要每天加班改Bug。
- 比如int* p；我啥也没给*p指，*p里是什么呢？
- 任何cout<<*p的写法在大部分编译器里都是0 error 0 warning，因为C++语法允许它这样写
- 但是逻辑不对，cout<<*p啥也输出不了，计算机也不可能无中生有，此时运行一定会报错。

### 7 一段话理解指针与引用
```c++
int x = 0;
int* p = &x; //此时*p可以当x用
int& t = x; //此时t可以当x用

给*p换个指向的对象
p = &y;//此时*p可以当y用

给t换个要引用的对象
不好意思，这个墙头草特性被c++之父干掉了，单个作用域内引用一旦初始化完不可再变
```

p与*p这两个符号的区别：

写法|类型|是什么
--|--|--
*p|int|是数值
p|int*|是0x地址

**二重指针**
```C++
int x= 0;
int* p = &x; //p是x的地址，*p是x
int** q = &p; //q是p的地址，*q是x的地址，**q是x

指针传递
int* t = p;//将指针p传递给指针t，，t是x的地址，*t是x
```
总结:
指针与引用都是把p与t关联到x上的一个动作。只不过指针关联的是x的地址（先有*p=&x=0x000DDEE1123 从而使 p.equals(x)）,引用关联的是数值(即 t.equals(x))


