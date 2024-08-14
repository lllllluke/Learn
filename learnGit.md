# Git

[TOC]

## 配置Git用户信息

配置用户信息

```c++
$ git config --global user.name "Your name"
$ git config --global user.eamil "email@example.com"
```

> `git config` 命令的 `--global` 参数表示你这台机器上所有的Git仓库都会使用这个配置

## 创建版本库

1. 创建一个版本库

``` c++
$ mkdir learngit
$ cd learngit
$pwd 
/User/michael/learngit
```

> `pwd` 命令用于显示当前目录
>
> `/Users/michael/learngit` : 仓库位置

2. 通过 `git init` 命令把这个目录变成Git可管理仓库

```c++
$ git init 
Initialized empty Git repository in /User/michael/learngit/.git/
```

> `.git` 目录是Git用来跟踪管理版本库的目录
>
> 使用 `ls -ah` 显示 `.git` 目录

### 把文件添加到版本库

编写一个 `readme.txt` 文件，内容如下：

```
Git is a version control system.
Git is free software.
```

将文件放置在 `learngit` 目录下

1. 使用命令 `git add` 将文件添加到仓库	

```c++
$ git add readme.txt
```

2. 使用命令 `git commit` 将文件提交到仓库

``` c++
$ git commit -m "wrote a readme file"
[master (root-commit)eaadf4e] wrote a readme file
1 file changed, 2 insertions(+)
creat mode 100644 readme.txt
```

> `-m` 后面输入本次提交说明
>
> `add` 可以多次添加不同文件
>
> `commit` 可以一次提交很多文件

## 版本控制

修改 `readme.txt` 文件内容如下：

```
Git is a distributed version control system.
Git is free software.
```

使用 `git status` 命令查看结果

```c++
$ git status
On branch master
Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   readme.txt

no changes added to commit (use "git add" and/or "git commit -a")
```

> `git status` 命令查看仓库当前状态

使用 `git diff` 命令查看修改内容

``` c++
$ git diff readme.txt 
diff --git a/readme.txt b/readme.txt
index 46d49bf..9247db6 100644
--- a/readme.txt
+++ b/readme.txt
@@ -1,2 +1,2 @@
-Git is a version control system.
+Git is a distributed version control system.
 Git is free software.
```

> `git diff` 查看 difference 

提交: `git add` + `git status` + `git commit`

提交后使用 `git status` 命令查看仓库当前状态

```c++
$ git status
On branch master
nothing to commit, working tree clean
```

### 版本回退

修改 `readme.txt` 文件内容如下并提交：

```
Git is a distributed version control system.
Git is free software distributed under the GPL.
```

使用 `git log` 命令查看历史记录

```c++
$ git log
commit 1094adb7b9b3807259d8cb349e7df1d4d6477073 (HEAD -> master)
Author: Michael Liao <askxuefeng@gmail.com>
Date:   Fri May 18 21:06:15 2018 +0800

    append GPL

commit e475afc93c209a690c39c13a46716e8fa000c366
Author: Michael Liao <askxuefeng@gmail.com>
Date:   Fri May 18 21:03:36 2018 +0800

    add distributed

commit eaadf4e385e865d25c48e7ca9c8395c3f7dfaef0
Author: Michael Liao <askxuefeng@gmail.com>
Date:   Fri May 18 20:59:18 2018 +0800

    wrote a readme file
```

> `git log` 命令显示从最近到最远的提交日志

使用 `git log --pretty=oneline` 命令查看历史记录

```c++
$ git log --pretty=oneline
1094adb7b9b3807259d8cb349e7df1d4d6477073 (HEAD -> master) append GPL
e475afc93c209a690c39c13a46716e8fa000c366 add distributed
eaadf4e385e865d25c48e7ca9c8395c3f7dfaef0 wrote a readme file
```

> `1094abd...` 为 `commit id` （版本号）
>
> `HEAD` 表示当前版本

使用 `git reset --hard HEAD^` 命令将版本回退

```c++
$ git reset --hard HEAD^
HEAD is now at e475afc add distributed
```

> `HEAD^` 表示上一版本，`HEAD^^` 表示上上版本，`HEAD~100` 表示上100个版本
>
> `--hard` 表示回到上一版本已提交状态，`--soft` 可以回到上一版本未提交状态

使用`git reset --hard 1094a` 命令回到指定版本

```c++
$ git reset --hard 1094a
HEAD is now at 83b0afe append GPL
```

> `1094a` 为指定版本的版本号

> [!note]
>
> Git的版本回退速度非常快，因为Git在内部有个指向当前版本的 `HEAD` 指针，当你回退版本的时候，Git仅仅是把HEAD从指向 `append GPL`：
>
> ```
> ┌────┐
> │HEAD│
> └────┘
>    │
>    └──▶ ○ append GPL
>         │
>         ○ add distributed
>         │
>         ○ wrote a readme file
> ```
>
> 改为指向 `add distributed`：
>
> ```
> ┌────┐
> │HEAD│
> └────┘
>    │
>    │    ○ append GPL
>    │    │
>    └──▶ ○ add distributed
>         │
>         ○ wrote a readme file
> ```
>
> 然后顺便把工作区的文件更新了

使用 `git reflog` 命令查看命令历史

```
$ git reflog
e475afc HEAD@{1}: reset: moving to HEAD^
1094adb (HEAD -> master) HEAD@{2}: commit: append GPL
e475afc HEAD@{3}: commit: add distributed
eaadf4e HEAD@{4}: commit (initial): wrote a readme file
```

### 工作区和暂存区

#### 工作区（Working Directory）

电脑内的目录文件夹

#### 版本库（Repository）

工作区内隐藏目录 `.git` 为 Git 的版本库

> [!note]
>
> Git的版本库里存了很多东西，其中最重要的就是称为stage（或者叫index）的暂存区，还有Git为我们自动创建的第一个分支 `master`，以及指向 `master` 的一个指针叫 `HEAD`
>
> ![](https://liaoxuefeng.com/books/git/time-travel/working-stage/repo.png)

### 管理修改

第一次修改 -> `git add` -> 第二次修改 -> `git add` -> `git commit`

`git diff HEAD -- readme.txt` 命令可以查看工作区和版本库里最新版本的区别

### 撤销修改

使用 `git checkout -- file` 命令丢弃工作区的修改

```c++
$ git checkout -- readme.txt
```

> `readme.txt` 自修改后还没有被放到暂存区，现在，撤销修改就回到和版本库一模一样的状态
>
> `readme.txt` 已经添加到暂存区后，又作了修改，现在，撤销修改就回到添加到暂存区后的状态
>
> 总之，就是让这个文件回到最近一次 `git commit` 或 `git add` 时的状态

使用 `git reset HEAD <file>` 命令可以把暂存区的修改撤销（unstage），重新放回工作区

```c++
$ git reset HEAD readme.txt
Unstaged changes after reset:
M	readme.txt
```

### 删除文件

使用 `git rm` 从版本库中删除该文件

```c++
$ git rm test.txt
rm 'test.txt'

$ git commit -m "remove test.txt"
[master d46f35e] remove test.txt
 1 file changed, 1 deletion(-)
 delete mode 100644 test.txt
```

删除后使用 `git commit` 命令提交

## 远程仓库

GitHub 仓库托管服务（本地 Git 仓库和 GitHub 仓库之间传输通过 SSH 加密）

1. 创建SSH Key，打开Shell （Windows 打开Git Bash）

```
$ ssh-keygen -t rsa -C "youremail@example.com"	
```

> `.ssg` 目录会创建 `id_rsa` 和 `id_rsa.pub` 文件
>
> `id_rsa` 是私钥（不可泄露）
>
> `id_rsa.pub` 是公钥（可以告诉别人）

2. 登录 GitHub，打开 "Account settings", "SSH Keys" 页面，点击 " Add SSH Key", 填上任意 Title, 在 Key 文本框里粘贴 `id_rsa.pub` 文件内容，点击 "Add Key"

![](https://liaoxuefeng.com/books/git/remote/add-key.png)

### 添加远程仓库

1. 登陆GitHub，然后，在右上角找到“Create a new repo”按钮，在Repository name填入`learngit`，其他保持默认设置，点击“Create repository”按钮，即创建一个新的仓库

![](https://liaoxuefeng.com/books/git/remote/add-remote/new-repo.png)

2. 在本地 `learngit` 仓库下运行指令，将其与 GitHub 远程仓库关联

```
$ git remote add origin git@github.com:michaelliao/learngit.git
```

> 添加后，远程库的名字就是 `origin`，这是Git默认的叫法

3. 将本地仓库的内容推送到远程库上

用 `git push` 命令把本地库的内容推送到远程

```
$ git push -u origin master
Counting objects: 20, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (15/15), done.
Writing objects: 100% (20/20), 1.64 KiB | 560.00 KiB/s, done.
Total 20 (delta 5), reused 0 (delta 0)
remote: Resolving deltas: 100% (5/5), done.
To github.com:michaelliao/learngit.git
 * [new branch]      master -> master
Branch 'master' set up to track remote branch 'master' from 'origin'.
```

> 实际上是把当前分支 `master` 推送到远程
>
> 第一次推送 `master` 分支时，加上了 `-u` 参数，Git不但会把本地的 `master` 分支内容推送的远程新的 `master` 分支，还会把本地的 `master` 分支和远程的 `master` 分支关联起来

4. 后续本地提交

```
$ git push origin master
```

#### SSH 警告

第一次使用 Git 的 `Clone` 或 `push` 命令连接 GitHub 时，会得到一个警告：

```
The authenticity of host 'github.com (xx.xx.xx.xx)' can't be established.
RSA key fingerprint is xx.xx.xx.xx.xx.
Are you sure you want to continue connecting (yes/no)?
```

> SSH 连接在第一次验证 GitHub 服务器的Key时，需要你确认 GitHub的Key 的指纹信息是否真的来自 GitHub 的服务器

输入 `Yes` 即可

#### 删除远程库

使用 `git remote -v` 可以查看远程库信息

```
$ git remote -v
origin  git@github.com:michaelliao/learn-git.git (fetch)
origin  git@github.com:michaelliao/learn-git.git (push)
```

使用 `git remote rm <name>` 命令可以删除远程库

```
$ git remote rm origin
```

> 只是解除了本地与远程的绑定关系，并不是物理上删除了远程库

### 从远程克隆

先创建远程库，然后从远程库克隆

1. 登陆GitHub，创建一个新的仓库，名字叫 `gitskills`

![](https://liaoxuefeng.com/books/git/remote/clone/create-repo.png)

> 勾选 `Initialize this repository with a README`，GitHub 会自动为我们创建一个`README.md`文件

2. 克隆一个本地仓库

使用 `git clone` 命令克隆一个本地仓库

```
$ git clone git@github.com:michaelliao/gitskills.git
Cloning into 'gitskills'...
remote: Counting objects: 3, done.
remote: Total 3 (delta 0), reused 0 (delta 0), pack-reused 3
Receiving objects: 100% (3/3), done.
```

## 分支管理

![](https://liaoxuefeng.com/books/git/branch/branch.png)

### 创建与合并分支

> [!note]
>
> 每次提交，Git都把它们串成一条时间线，这条时间线就是一个分支。截止到目前，只有一条时间线，在Git里，这个分支叫主分支，即`master`分支。`HEAD`严格来说不是指向提交，而是指向`master`，`master`才是指向提交的，所以，`HEAD`指向的就是当前分支。
>
> 一开始的时候，`master`分支是一条线，Git用`master`指向最新的提交，再用`HEAD`指向`master`，就能确定当前分支，以及当前分支的提交点：
>
> ```
>                   HEAD
>                     │
>                     ▼
>                  master
>                     │
>                     ▼
> ┌───┐    ┌───┐    ┌───┐
> │   │───▶│   │───▶│   │
> └───┘    └───┘    └───┘
> ```
>
> 每次提交，`master`分支都会向前移动一步，这样，随着你不断提交，`master`分支的线也越来越长。
>
> 当我们创建新的分支，例如`dev`时，Git新建了一个指针叫`dev`，指向`master`相同的提交，再把`HEAD`指向`dev`，就表示当前分支在`dev`上：
>
> ```
>                  master
>                     │
>                     ▼
> ┌───┐    ┌───┐    ┌───┐
> │   │───▶│   │───▶│   │
> └───┘    └───┘    └───┘
>                     ▲
>                     │
>                    dev
>                     ▲
>                     │
>                   HEAD
> ```
>
> 你看，Git创建一个分支很快，因为除了增加一个`dev`指针，改改`HEAD`的指向，工作区的文件都没有任何变化！
>
> 不过，从现在开始，对工作区的修改和提交就是针对`dev`分支了，比如新提交一次后，`dev`指针往前移动一步，而`master`指针不变：
>
> ```
>                  master
>                     │
>                     ▼
> ┌───┐    ┌───┐    ┌───┐    ┌───┐
> │   │───▶│   │───▶│   │───▶│   │
> └───┘    └───┘    └───┘    └───┘
>                              ▲
>                              │
>                             dev
>                              ▲
>                              │
>                            HEAD
> ```
>
> 假如我们在`dev`上的工作完成了，就可以把`dev`合并到`master`上。Git怎么合并呢？最简单的方法，就是直接把`master`指向`dev`的当前提交，就完成了合并：
>
> ```
>                            HEAD
>                              │
>                              ▼
>                           master
>                              │
>                              ▼
> ┌───┐    ┌───┐    ┌───┐    ┌───┐
> │   │───▶│   │───▶│   │───▶│   │
> └───┘    └───┘    └───┘    └───┘
>                              ▲
>                              │
>                             dev
> ```
>
> 所以Git合并分支也很快！就改改指针，工作区内容也不变！
>
> 合并完分支后，甚至可以删除`dev`分支。删除`dev`分支就是把`dev`指针给删掉，删掉后，我们就剩下了一条`master`分支：
>
> ```
>                            HEAD
>                              │
>                              ▼
>                           master
>                              │
>                              ▼
> ┌───┐    ┌───┐    ┌───┐    ┌───┐
> │   │───▶│   │───▶│   │───▶│   │
> └───┘    └───┘    └───┘    └───┘
> ```

使用 `git merge` 命令合并指定分支到当前分支

```
$ git merge dev
Updating d46f35e..b17d20e
Fast-forward
 readme.txt | 1 +
 1 file changed, 1 insertion(+)
```

> 将 `dev` 分支的工作成果合并到 `master` 上
>
> `Fast-forward` 表示这次合并是“快进模式”，也就是直接把 `master` 指向 `dev` 的当前提交

合并完成后删除 `dev` 分支

```
$ git branch -d dev
Deleted branch dev (was b17d20e).
```

删除后使用 `$ git branch` 命令查看分支

```
$ git branch
* master
```

> [!tip]
>
> Git 支持在分支中完成某个任务，合并后再删掉分支，这和直接在 `master` 分支上工作效果一致，但过程更安全

#### switch 

> [!tip]
>
> 可以使用 `git checkout <branch>` 命令切换分支，最新版本 Git 提供新的命令可以代替该命令

使用 `git switch` 命令切换分支

```
$ git switch -c dev
```

> 创建并切换到新的 `dev` 分支

```
$ git switch master
```

> 直接切换到已有的 `master` 分支

#### 分支相关命令

查看分支：`git branch`

创建分支：`git branch <name>`

切换分支：`git checkout <name>` 或者 `git switch <name>`

创建+切换分支：`git checkout -b <name>` 或者 `git switch -c <name>`

合并某分支到当前分支：`git merge <name>`

删除分支：`git branch -d <name>`

### 解决冲突

当Git无法自动合并分支时，就必须首先解决冲突。解决冲突后，再提交，合并完成。

解决冲突就是把Git合并失败的文件手动编辑为我们希望的内容，再提交。

用 `git log --graph` 命令可以看到分支合并图

### 分支管理策略

使用`git merge` 命令加入 `--no-ff` 参数

```
$ git merge --no-ff -m "merge with no-ff" dev
Merge made by the 'recursive' strategy.
 readme.txt | 1 +
 1 file changed, 1 insertion(+)
```

> `--no-ff` 参数可以强制禁用 `Fast forward` 模式,Git 在 merge 时生成一个新的 commit,这样从分支 历史上就可以看出分支信息

> [!note]
>
> 不使用`Fast forward`模式，merge后就像这样：
>
> ```
>                                  HEAD
>                                   │
>                                   ▼
>                                 master
>                                   │
>                                   ▼
>                                 ┌───┐
>                          ┌─────▶│   │
> ┌───┐    ┌───┐    ┌───┐  │      └───┘
> │   │───▶│   │───▶│   │──┤        ▲
> └───┘    └───┘    └───┘  │  ┌───┐ │
>                          └─▶│   │─┘
>                             └───┘
>                               ▲
>                               │
>                              dev
> ```

#### 分支策略

1. `master` 分支应该是非常稳定的，也就是仅用来发布新版本，平时不能在上面干活
2. 干活都在 `dev` 分支上，也就是说，`dev` 分支是不稳定的，到某个时候，比如1.0版本发布时，再把 `dev` 分支合并到 `master` 上，在 `master` 分支发布1.0版本
3. 每个人都有自己的分支，时不时地往 `dev` 分支上合并就可以了

![](https://liaoxuefeng.com/books/git/branch/policy/branches.png)

### Bug分支

使用 `stash` 命令将当前工作暂存

```
$ git stash
Saved working directory and index state WIP on dev: f52c633 add merge
```

需要在哪个分支上修复 bug,就从该分支上创建临时分支

假定需要在`master`分支上修复，就从`master`创建临时分支

```
$ git checkout master
Switched to branch 'master'
Your branch is ahead of 'origin/master' by 6 commits.
  (use "git push" to publish your local commits)

$ git checkout -b issue-101
Switched to a new branch 'issue-101'
```

修复 bug 后提交

```plain
$ git add readme.txt 
$ git commit -m "fix bug 101"
[issue-101 4c805e2] fix bug 101
 1 file changed, 1 insertion(+), 1 deletion(-)
```

切换到 `master` 分支，并完成合并，最后删除 `issue-101` 分支

```
$ git switch master
Switched to branch 'master'
Your branch is ahead of 'origin/master' by 6 commits.
  (use "git push" to publish your local commits)

$ git merge --no-ff -m "merged bug fix 101" issue-101
Merge made by the 'recursive' strategy.
 readme.txt | 2 +-
 1 file changed, 1 insertion(+), 1 deletion(-)
```

回到 `dev` 分支

```
$ git switch dev
Switched to branch 'dev'

$ git status
On branch dev
nothing to commit, working tree clean
```

用 `git stash list` 命令查看原暂存内容

```plain
$ git stash list
stash@{0}: WIP on dev: f52c633 add merge
```

用 `git stash apply` 恢复 `stash` 内容，恢复后，`stash`内容并不删除，你需要用`git stash drop`来删除。或用`git stash pop`，恢复的同时把`stash`内容也删了

```
$ git stash pop
On branch dev
Changes to be committed:
  (use "git reset HEAD <file>..." to unstage)

	new file:   hello.py

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git checkout -- <file>..." to discard changes in working directory)

	modified:   readme.txt

Dropped refs/stash@{0} (5d677e2ee266f39ea296182fb2354265b91b3b2a)
```

> [!tip]
>
> `git stash apply stash@{0}` 命令可以恢复指定 `stash` 内容

把 `4c805e2 fix bug 101` 这个提交所做的修改“复制”到 `dev` 分支

使用 `cherry-pick` 命令复制一个特定的提交到当前分支

```
$ git branch
* dev
  master
$ git cherry-pick 4c805e2
[master 1d4b803] fix bug 101
 1 file changed, 1 insertion(+), 1 deletion(-)
```

>Git自动给`dev`分支做了一次提交，注意这次提交的commit是`1d4b803`，它并不同于`master`的`4c805e2`，因为这两个commit只是改动相同，但确实是两个不同的commit

### Feature 分支

每添加一个新功能，最好新建一个 feature 分支，在上面开发，完成后，合并，最后，删除该 feature 分支

使用 `git branch -D` 命令强行销毁分支

```plain
$ git branch -D feature-vulcan
Deleted branch feature-vulcan (was 287773e).
```

> 需要使用大写的 `-D` 参数

 

### 多人协作

> [!note]
>
> 多人协作的工作模式通常是这样：
>
> 1. 首先，可以尝试用`git push origin <branch-name>`推送自己的修改；
> 2. 如果推送失败，则因为远程分支比你的本地更新，需要先用`git pull`试图合并；
> 3. 如果合并有冲突，则解决冲突，并在本地提交；
> 4. 没有冲突或者解决掉冲突后，再用`git push origin <branch-name>`推送就能成功！
>
> 如果`git pull`提示`no tracking information`，则说明本地分支和远程分支的链接关系没有创建，用命令`git branch --set-upstream-to <branch-name> origin/<branch-name>`。

- 查看远程库信息，使用`git remote -v`；
- 本地新建的分支如果不推送到远程，对其他人就是不可见的；
- 从本地推送分支，使用`git push origin branch-name`，如果推送失败，先用`git pull`抓取远程的新提交；
- 在本地创建和远程分支对应的分支，使用`git checkout -b branch-name origin/branch-name`，本地和远程分支的名称最好一致；
- 建立本地分支和远程分支的关联，使用`git branch --set-upstream branch-name origin/branch-name`；
- 从远程抓取分支，使用`git pull`，如果有冲突，要先处理冲突。

### Rebase

- rebase操作可以把本地未push的分叉提交历史整理成直线；
- rebase的目的是使得我们在查看历史提交的变化时更容易，因为分叉的提交需要三方对比。

## 标签管理

通常先在版本库中打一个标签（tag），这样，就唯一确定了打标签时刻的版本，将来无论什么时候，取某个标签的版本，就是把那个打标签的时刻的历史版本取出来。

### 创建标签

- 命令`git tag <tagname>`用于新建一个标签，默认为`HEAD`，也可以指定一个commit id；
- 命令`git tag -a <tagname> -m "blablabla..."`可以指定标签信息；
- 命令`git tag`可以查看所有标签。

### 操作标签

- 命令`git push origin <tagname>`可以推送一个本地标签；
- 命令`git push origin --tags`可以推送全部未推送过的本地标签；
- 命令`git tag -d <tagname>`可以删除一个本地标签；
- 命令`git push origin :refs/tags/<tagname>`可以删除一个远程标签。

## 使用 GitHub

- 在GitHub上，可以任意Fork开源仓库；
- 自己拥有Fork后的仓库的读写权限；
- 可以推送pull request给官方仓库来贡献代码。