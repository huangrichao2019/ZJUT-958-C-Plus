## 浙工大958C++练习代码仓库
    your_branch_nae最好用自己的名字拼音，确保跟别人不一样
- 本仓库属于浙工大计算机958代码练习仓库
- 需要的同学clone到本地后自行git fetch origin master:your_branch_name 
- 该指令会基于远程master分支在你本地创建一个你自己的branch
- git checktout your_branch_name即可进入自己的分支
- 需要在远程创建自己分支的话 git push origin your_branch_name:your_branch_name
- 本地push自己分支的代码到远程 git push --set-upstream origin your_branch_name
- 以后每次提交前请先git pull一下，防止conflict

### 1 LISENCE
    采用了Apache-2.0 LISENCE,最大权限地开源项目代码。大家提交时必须带上作者名，否则会被打回去。
**这是一个基于开源精神搭建起来的仓库，需要每个人共同维护！想加入我的话可以将你的微信号发到huangrichao@growingio.com,我会邀请你的**

### 2 项目经验
- 考研复试，工作实习需要写简历的，参考这个简历PDF [校招开发工程师简历](https://download.csdn.net/download/weixin_41474319/11251698)
- 想要搞几个项目丰富自己的简历，参考这篇博客[我是如何通过项目丰富我的简历的](https://blog.csdn.net/weixin_41474319/article/details/80885656)
- 毕设答辩PPT没时间写的，参考这个[PPT](https://download.csdn.net/download/weixin_41474319/11251688)
  

### 3 Git配置
    推荐如下配置，日常开发非常方便：
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

### 5 代码目录
- /src/just_play放得是我练手的代码
- /src/board_out放得是慕课起航篇的代码
- /src/958C++放得是真题代码
- 这三个目录我会在master里持续更新
- Git Course.md放得是git入门教程
- C++ Note.md放得是C++学习笔记
- 这两个文件全部用makrdown语言整理好了，后续也会持续更新

### 6 代码编译参数
- 最好是Mac或Linux环境
- 推荐用终端编译cpp源文件 g++ -Wall -o hello hello.cpp生成hello.obj文件
- ./hello即可运行