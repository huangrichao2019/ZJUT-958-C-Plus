## 浙工大958C++练习代码仓库
    your_branch_nae最好用自己的名字拼音，确保跟别人不一样
- 本仓库属于浙工大计算机958代码联系仓库
- 需要的同学clone到本地后自行git fetch origin master:your_branch_name 
- 该指令会基于远程master分支在你本地创建一个你自己的branch
- git checktout your_branch_name即可进入自己的分支
- 需要在远程创建自己分支的话 git push origin your_branch_name:your_branch_name
- 本地push自己分支的代码到远程 git push --set-upstream origin your_branch_name
- 以后每次提交前请先git pull一下，防止conflict

### LISENCE
采用了Apache-2.0 LISENCE,最大权限地开源项目代码。大家提交时必须带上作者名，否则会被打回去。
### Git配置
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


## 慕课C++入门地址
[C++起航篇等系列教程](https://www.imooc.com/course/list?c=cplusplus)

## 代码目录
- /src/just_play放得是我练手的代码
- /src/board_out放得是慕课起航篇的代码
- /src/958C++放得是真题代码
- 这三个目录我会在master里持续更新
- Git Course.md放得是git入门教程
- C++ Note.md放得是C++学习笔记
- 这两个文件全部用makrdown语言整理好了，后续也会持续更新

## 代码编译参数
- 最好是Mac或Linux环境
- 推荐用终端编译cpp源文件 g++ -Wall -o hello hello.cpp生成hello.obj文件
- ./hello即可运行