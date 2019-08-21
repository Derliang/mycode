# mycode

##start test

    cd ./test
    ./install.py


    duang duang

    diu diudiu

## git rebase
    两个分支不同在16:07分以前是相同的现在master和liang分支分别进行编辑

    master两次commit liang 两次commit

    master change time at 16:07   
    master change time at 16:12 

    liang change time 16:08
    liang change time 16:10 
    liang change time 16:13 

### 下面是liang分支的 rebase步骤 

    说明一下 感觉step 1 和Step 2 应该反着来。。。。。。。。僵 如 - -

### step 1

    git checkout master

    git pull 拉去最新master

    git checkout liang

    git rebase master(相当于git merge master) 这里会出现冲突 先退出编辑器 然后git status 查看状态

    while(1)
	    会提示冲突文件，修复冲突， git add 文件，git rebase --continue 继续下一步
    break while(1）当你全部解决完成了

    git log 看一看提交记录

### step 2

    接着进行合并commit

    git rebase -i HEAD~3  (i表示交互 HEAD~3表示最新分支之前三个commit）

    会弹出vim编辑界面或者nano界面， nano界面ctrl + x  然后选择 y 然后回车保存

    内容编辑 除去第一个pick 其他pick 全部改成 s 保存退出

    第二个弹出框让你合并提交信息 保存退出

    git log 看看效果 发现三个commit变成一个commit

### step3 push rebase 到远程
    git push 会提示你失败 因为比较的commit id 这个时候需要强制push
    git push orgin --force liang:liang