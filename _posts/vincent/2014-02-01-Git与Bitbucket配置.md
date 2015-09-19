---
layout: post
category : 系统知识
tagline: "Supporting tagline"
tags : [git, bitbucket]
---
{% include JB/setup %}


## Git + Bitbucket 配置 ##

bitbuckte 相比于时下最流行的 github, 其最牛之处在于可以免费创建私人项目。这点相当吸引人。我打算把一些杂乱的项目放上去，一方面为个备份，另一方面也为跟踪开发过程。

### Mac 配置 ###

mac电脑上默认有安装git, 需要做的只是一些简单的配置。

1. 首先申请一个bitbucket账号。创建一个repository。
2. 接着参考[这篇文章](https://confluence.atlassian.com/display/BITBUCKET/Set+up+SSH+for+Git)
3. ssh-keygen 生成rsa的私钥和公钥。
4. 创建ssh config.
vi ~/.ssh/config。在里面输入下面内容：
Host bitbucket.org
 IdentityFile ~/.ssh/id_rsa
5. 然后把public key设置到bitbucket里。
    设置成功后，执行“ssh -T git@bitbucket.org”测试是否OK。
6. 根据bitbucket的提示，在本地command shell里输入：
mkdir /path/to/your/project
cd /path/to/your/project
git init
git remote add origin ssh://git@bitbucket.org/zzbased/medcare.git
echo "# This is my README" >> README.md
git add README.md
git commit -m "First commit. Adding a README."
git push -u origin master

7. over!

### Windows7 配置

1. 安装[msysgit](http://code.google.com/p/msysgit/)。它包括一个git gui和一个git bash。

2. 参考[这篇文章](http://guganeshan.com/blog/setting-up-git-and-tortoisegit-with-bitbucket-step-by-step.html)设置ssh key。
经过mac和windows7两个设置后，我的bitbucket ssh key是这样的：

	![bitbucket_ssh.png](https://raw.githubusercontent.com/zzbased/zzbased.github.com/master/_posts/images/bitbucket_ssh.png)

3. 选定一个目录，在该目录下右键打开git bash。直接git clone bitbucket上创建的repository。

4. 更新代码后，右键git add all files now(or in git bash, execute 'git add -u .')。利用git gui commit代码(当然用git bash也可以，用git gui是方便查看diff)。最后在git bash里git push -u origin master代码即可。

OK，以后我的私人工程代码都将用bitbucket来管理。
