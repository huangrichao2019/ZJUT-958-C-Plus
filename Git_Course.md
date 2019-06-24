## git 原理

![image.png](http://note.youdao.com/yws/res/10723/WEBRESOURCE4fbc75df4a467404e2f5b07576710706)
1. 工作区即IDE显示的内容
2. 版本库/暂存区即.git/index/
```
graph TB
A(版本库) --> HEAD
A--> logs
A--> configs
A--> index
A--> branches
A--> info
```
### 覆盖操作
- 1->2 : git add . 或-- <file>
- 2->1 : git checkout . 或-- <file> || 暂存区文件覆盖工作区文件
- 2->3 : git commit -m '' || 当前分支指向提交时的暂存区
- 3->2 : git reset HEAD <file>|| 暂存区内容被上一次提交的分支覆盖，工作区不受影响，从而实现撤销add
- 3->2 & 3—>1 : git checkout HEAD . 或 <file> 极具危险，同时用上一次提交覆盖暂存区与工作区

### git建仓
- git init <directory>
- git clone <repo> <directory>
### clone项目
```
git clone git://github.com/fsliurujie/test.git          --GIT协议
git clone git@github.com:fsliurujie/test.git         --SSH协议
git clone https://github.com/fsliurujie/test.git      --HTTPS协议
```
## 查看详细改动
- git diff 未add过的改动
- git diff --cached 已add过的改动
## 为当前分支设置远程分支
```
--set-upstream-to=origin/dev-1.0.0-1127-YY dev-1.0.0-1127-YY
```
## 提交
- git config --global user.name 'runoob' 提交的用户名
- git config --global user.email test@runoob.com 提交的邮箱地址
- 默认提交 git commit -a
- 注释提交 git commit -am '注释' || 必须所有文件被git tracked才能用

## 删除
- git rm <file> 删除工作区文件
- git rm -f <file> 删除工作区+暂存区文件
- git rm --cached <file> 仅删除暂存区文件
- git rm -r * 全部工作区
- git rm -rf * 全部工作区+暂存区
- git mv readme README 移动到当前文件并取名为README（变相重命名）
-- git fetch + git merge = git pull

## 版本回退
- 安全回退 git checkout [commit] 只替换指定文件
- 全部回退 git reset [commit] 替换整个目录树，删除老版本里没有的文件，破坏劳动成果

## 分支管理
- git checkout -b test_branch
- git log --reverse --oneline 查看分支切换与合并信息
- git log --author=Linus --oneline -5 --after={2010-04-18}
## Git是什么
####  Author : Huangrichao.黄日超
####  Time   : 2018/09/26
![image](http://p1.pstatp.com/large/pgc-image/153761776465798a2409144)
### commit -m "注释内容统一"
    "黄日超:div分支第3次提交:text.txt添加第四行000000"
```
graph RL
A(工作区)-->|add|B(stage暂存区)
B-->|commit|C(Repository本地仓库)
C-->|push|D(remote远程仓库)
```
> 与SVN的区别

1. SVN是集中式远程仓库,每次干活前必须从网上下载最新版demo,很麻烦
2. Git是分布式版本控制系统,所有仓库都在本地上,写作者间仅需传递修改部分.
> 从零入门git指令
### 1. 创建test文件夹
   mkdir /Desktop/GitTest/day_01
### 2. 进入文件夹
   cd /Desktop/GitTest/day_01
### 3. 初始化文件夹
   git init
### 4. 在day_01内新建一个readme.txt文本
### 5. 直接提交第一版文件到暂存区
   git add readme.txt,方便版本回溯等操作,同时避免多次commit,即commit的一般是定下来的版本,有问题可以用check out将单个文件拿回来
### 6. 带注释一键将暂存区文件提交到本地仓库
   git commit -m "readme.txt的第一次提交"
### 7. 查看工作区是否还有没add过的新修改(与暂存区对比) git status
   返回changes not staged for commit 说明有修改即没commit更没add到暂存区里文件<br />
![image](http://p3.pstatp.com/large/pgc-image/1537617764913806e8ab497)
## add前谨慎起见先查看我改了什么,记得截图,红色部分是旧,绿色部分是取而代之的新内容.
### 1. git diff readme.txt<br />
![image](http://note.youdao.com/yws/res/3903/790DC2FDDC42447CB351982FD671098A)<br />
### 2. add完后立马git status查看一下,看是否还有没add的
![image](http://note.youdao.com/yws/res/3910/88509A7829EA450280437120DFDD265F)<br />
发现已经全部add过了,且modified过的文件正式readme.txt
### 3. modify,add,status,第三步才是commit.
**git commit -m "readme文件增加了3333333内容**"会把原来index索引目录里的一行删掉,从新添加两行<br />![image](http://note.youdao.com/yws/res/3917/7959269B484A4269A5CD202415050039)
### 4. 再次修改readme.txt添加第三行5555555
    
    继续addreadme.txt ,status,commit -m "添加第三行内容"
### 5. 由近及远查看修改历史git log(受版本回退影响)
    显示每次提交的版本号,时间,内容
![image](http://note.youdao.com/yws/res/3949/3493D3EF10484C8E86CF8CAA83DE23A2)
    
    清爽版log指令 git log --pretty=oneline
![image](http://note.youdao.com/yws/res/3960/FF42CC1DB2C549CFB9D62DEA6A5254B9)<br />
    
    查看历史版本与版本号(不受版本回退影响)git relog
![image](http://note.youdao.com/yws/res/3970/98A6D04AC66B431BA823EC9B9205ACCF)<br />
    
    无脑回退到上个版本,放弃最新一次的修改 git reset --hard HEAD^ hard是指针 HEAD^上一版本的版本号
![image](http://note.youdao.com/yws/res/3978/7DEC4F8582D1450CA616909D94C1E5D2)<br />

    用cat readme.txt指令直接在终端查看文件内容是否恢复到上一版本
![image](http://note.youdao.com/yws/res/3982/62DC51F909B94D17ACF3F798D7C068EF)<br />
    
    此时再用git log 发现最新一次的commit已经没了,只能通过git reflog找,reflog会记录全部版本指针,log只会显示当前版本指针之前的版本.
![image](http://note.youdao.com/yws/res/3991/A72CCED064174F25B041F4E64B5EC48A)<br />
    
    根据注释找到最新版本,根据版本号恢复最新版本,git reset--hard 6fcfc89
    <br />
    
    通过cat readme.txt查看效果
![image](http://note.youdao.com/yws/res/4010/B1B88D9AEEBB4CF485F9CCB8241B75E9)<br />

### 目录总结
    理清工作区,版本仓库,暂存区的区别
1. workspace就是day_01这个被git init过的文件夹中除.git目录外的全部内容
2. repository就是day_01文件夹中的.git目录.里面有
    - stage 暂存区
    - master 自动生成的第一个分支
    - HEAD 指向master分支的指针
3. 提示changes not staged for commit意思就是还有修改过的文件没add过
4. Changes to be commited 意思就是暂存区里的文件还没commit,注意commit必须跟-m "版本信息"

### git删除与修改
> 在我已经多次add,想要把所有修改commit到分支的时候,突然发现某个地方写错了,此时必须删掉错误内容

1. git add 过后,及时用git status查看
2. 发现可以用git reset HEAD filename 撤销该文件的add动作
![image](http://note.youdao.com/yws/res/4110/A98CDBE5D6EE45D68C118E771EDAAB46)<br />
3. git reset HEAD test.txt

> 只是工作区中做了大量修改,尚未add过

1. git status
![image](http://note.youdao.com/yws/res/4112/DC05F67A54AA4DE8BC2AEBBCEFCA8158)<br />
发现在git管理下的文件夹中,git可以直接撤销某个文件的修改 discard changes in working directory
2. 撤销文件修改 git checkout -- test.txt 

#### 两种情况
1. 一种test.txt从未add过,撤销就是撤销工作区的修改
2. 一种是test.txt曾经add过,又被修改,撤销就是恢复到刚add后的状态,工作区内容也恢复

### 恢复总结
1. 修改部分还未add的,用git checkout -- filename 撤销修改
2. 修改部分已经add了,用git reset HEAD filename 撤销add,但保留修改,需配合git checkout -- filename使用
3. 修改部分不但add了,还commit了.用git reset --hard HEAD^退回到上一版本
4. 退回到特定版本先git reflog查看特定commit节点的版本号,再git reset --hard 版本号即可将代码退回到特定版本
5. commit指针指向哪个commit版本,代码就变成哪个版本
    
### 指针总结 
> 分支与HEAD都是指针,HEAD指向当前分支,分支指向提交

1. 创建分支 git branch test
2. git log 查看当前指向的commit节点
![image](http://note.youdao.com/yws/res/4089/E8827BA5E7F1462AB386448B9507CE21)<br />
3. 在当前commit节点切换分支,git checkout test.当然,commit节点不变
4. 切换当前commit节点 git reflog ; git reset --hard 版本号 


### 删除总结
> 对于已commit的文件和代码,rm filename可直接删除文件,事后补个commit即可

1. 确定删除,git commit
2. 后悔删除,git checkout -- filename 撤销修改,即撤销删除

### 创建分支
1. git branch div
2. git checkout div
3. 前两条指令相当于git checkout -b div 创建并切换
4. git branch 查看当前分支,工作区与暂存区的内容是所有分支共享的.但是在分支上的提交是独立的,一旦修改commit提交到该分支的本地仓库,就标志此时的本地区是一个全新的版本.
5. 一旦切换分支,本地区会恢复到另一个分支的状态
### 合并分支
1. 因为我们在div分支上做过一次提交,所以此时div分支已经有了自己的版本记录,与master不同了,div已经具备了master没有的修改和特色.
2. git采用主合并从的逻辑顺序,即我
3. master主动合并div,而不是把div合并到master
3. 切换到master,git merge div
4. 一般采用fast-forward快速合并形式,即直接把div分支的提交指针记录合并到master的提交指针时间轴上.这操作骚啊~


### 删除与恢复分支
1. 创建分支本质是修改HEAD的操作,只要HEAD被改了,reflog一定会变,删除分支只是删除了相关log里的HEAD记录而已
2. git branch -d branch_name 会删除对应非当前分支
3. git branch -D branch_name 强制删除当前在用分支
4. git reflog查看历史HEAD,找到最后一次checkout切换到被删分支的记录,找到它的hash值或HEAD编号
![image](http://note.youdao.com/yws/res/4256/52755789F44344A1801A131DDFFCBDF6)<br />
2. git branch <branch_name> HEAD@{4} 成功恢复

### 如何解决版本冲突
1. 对于test.txt文件
2. master分支添加了第四行000000
3. div分支与添加了第四行888888
4. 此时master执行git merge div会发生conflict
5. cat test.txt查看
![image](http://note.youdao.com/yws/res/4306/EFDDE36F1EE64AD0A099B0F35787BCAC)<br />
6. `<<<<`之下表示当前分支的内容
7. `=====`隔开两个分支的不同修改
8. `>>>>>`之下表示被合并的分支的内容
9. 有======的地方说明这两分支都在同一地方做了修改,现在合并不了

### 解决矛盾
1. 首先git log查看当前分支所有指针修改记录![image](http://note.youdao.com/yws/res/4316/531D8E925A994C998302F6A816BDAB4E)<br />
2. 发现上一届div分支合并的master的信息也还在,建议以后分支命名带版本号,如div_01
3. 规定不许再master分支上干活
4. 快速合并会导致分支被删后信息无法复原.git merge -no-ff -m "注释" div采用禁止快合形式合并
### 处理bug分支
1. 思路
```
graph LR
bug-->临时分支
临时分支-->修复
修复后-->A(合并到主分支)
A-->删除临时分支
```
2. 搁置当前工作分支
3. 当前工作分支需要3天才能完成,才能提交.而issue-404 bug需要在5小时内完成.怎么办?
4. 确保当前分支是div,隐藏工作现场git stash 会将工作区+暂存区的内容保存起来
5. 切换到master git checkout master
6. 在master分支上创建新分支 git checkout -b issue404_bug
7. 修复完后,切换到master分支,完成合并,删除bug分支
8. 重回div ; git checkout div
9. git status发现工作区很干净,需要手动恢复工作现场
10. git stash list查看,然后git stash apply恢复,
11. 为防止不同的stash叠加干扰,每次恢复后必须手动删除stash ; git stash drop
12. git stash pop 一步从stash恢复工作现场并删除stash里的记录


### 链接远程git仓库
1. git 默认远程仓库名为 origin.可以git remote -vv查看
1. 配置好本地.ssh 与git账户里的Key
2. 在本地仓库运行并链接到远程仓库 git remote add origin https://github.com/huangrichao/testgit.git
3. 推送并关联本地maser与远程master git push -u origin master

5. 想换远程仓库,只需git remote rm origin
6. 再git remote add origin https://github.com/huangrichao/helloworld.git
7. 从现在起,只要本地作了提交,就可以通过`git push origin master`叫代码推送到远程仓库的master分支上
8. 远程仓库默认master是默认分支,所以本地要是删了master分支的话,就不能push了.必须先本地创建一个temp分支,远程也创建一个temp分支,并修改其为default branch.然后在本地temp push 到远程temp.最后才能无损删除本地master分支.
![image](http://note.youdao.com/yws/res/4302/BA89B203A1DD4A1C8F9C76D1D10CF74B)<br />
### 绕过clone拉取代码的方法
1. 进入文件夹后git init
2. git add origin http://github.com/huangrichao/testgit
3. git pull origin master
4. git checkout -b div origin/div
5. 成功拉取master和div两个分支

### 查看远程仓库与本地各个分支提交情况
1. git remote add origin http://github.com/huangrichao/testgit定义origin绑定的远程仓库后
1. git remote -v
![image](http://note.youdao.com/yws/res/4379/189C30F1D47146DCBA94FAC86A517546)
2. git branch -vv
![image](http://note.youdao.com/yws/res/4381/D7502CCD6DEB42BD8DA08B527F648BE2)
3. git push origin master会将本地master推到远程master
4. git push origin div会将本地div分支推送到远程div

### 多人协作
1. 已知甲分别推送了master和div分支到远程仓库
2. 乙在文件夹里git clone url克隆代码的同时,本地master也会自动关联到远程master
3. 乙想继续甲针对div分支做开发,必须创建分支并使用origin/div链接 git checkout -b div origin/div
4. 乙创建并切换到div分支后,修改了test.txt文件,add,commit后,通过git push origin div推送到远程testgit仓库的div分支
5. 此时甲想继续工作,必须先git pull origin div.不管三七二十一先拉取最新版总没错.
6. pull完后甲再修改,add,commit,最后push
7. 很有可能的情况是,在你pull到push的这段时间了,你的同事先你一步做了push.你就悲剧了.push -f强制覆盖线上版本也不行,除非你能承受覆盖同事工作成果的后果.只能先pull下来,merge一下,根据冲突报错手动解决冲突.最后再提交.如果此时又被人先push了,那真是悲剧中的悲剧
8. 所以一般程序员们团队开发时很少会有两个人同时开发一个模块的做法.简直要打架.
    
    
    下图就是晚push别人一步你可能需要经历的悲剧.
![image](http://note.youdao.com/yws/res/4420/3F515BA33C794D4C9651424DCC7FE179)<br />

### 删除总结
1. git rm filename 是删除已commit的文件的
2. git rm origin [url] 是删除远程仓库链接的
3. git branch -d div 是删除非当前分支的
4. git branch -D div 是删除当前分支的

## 一次综合演练
> clone一个项目后,修改,并上传
#### 1. mkdir directory
#### 2. cd directory
#### 3. git clone https://github.com/huangrichao/godEyes.git
#### 4. 修改完后 git remote add upstream https://github.com/huangrichao/godEyes.git
#### 5. git remote -v
 ![image](http://note.youdao.com/yws/res/1654/B5CC92D42E4A4B53855DDF268ACA16FC)
#### 6. git diff 
![image](http://note.youdao.com/yws/res/1657/DD5EEF6FA34C478C94555AD3C2B24DEB)
#### 7. git add .
#### 8. git commit -m "命名规范版"
![image](http://note.youdao.com/yws/res/1663/D13BB98589954F9CAB753E156635EC7F)
#### 9. git push origin master
    输入username与password
    huangrichao huang123581321
![image](http://note.youdao.com/yws/res/1668/43022ABB6A31441F84333BADC026380D)
### 10. 第九步一般是没有的,因为我们都是修改别人的项目后再上传给别人,别人会在他在项目的pullrequest界面确认你的修改.


### 11. 推送到远程新分支
push前远程没有test分支
```
git push origin test:test
```
### 12. 删除远程分支
```
git push origin :test
```

## Git rebase
比merge更优雅的合并,merge的话主分支时不允许有commit过的，必须保持拉出fix分支的状态才能将fix分支合并进来
- *bugfix
- git rebase master
- git checkout master
- git rebase bugfix
### cherry-pick
cherry-pick是对

## 通过Checkout 进入 HEAD
    掌握在git提交树上移动的能力
- ^ 向上位移1个记录
- ~3 向上位移3个记录

## 强行回退 相对位移^~
    前后移动某个分支的状态 git branch -f 
- 强行将某个分支指向当前HEAD前的某个位置 git branch -f master HEAD~3 
- 知道当前HEAD所在位置时git checkout HEAD~3
- git checkout HEAD^
- 知道某次提交的Hash值将master分支强行拉到该次提交状态，git branch -f master SHA-1


## 安全拉取远程分支
- git fetch origin master:tmp
- git diff tmp
- git merge tmp