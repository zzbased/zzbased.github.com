---
layout: post
category : jekyll
tagline: "Supporting tagline"
tags : [jekyll, blog]
---
{% include JB/setup %}

##利用jekyll+github搭建简易博客

### Jekyll步骤

基于jekyll的blog搭建

- 在github上创建username.github.com目录。
- 安装jekyll，然后jekyll new username.github.com，将这些内容git push到github。

参考文档：

- [Jekyll theme](http://jekyllthemes.org)
- [Using Jekyll with Pages](https://help.github.com/articles/using-jekyll-with-pages/)
- [在Github上搭建Jekyll博客和创建主题](http://yansu.org/2014/02/12/how-to-deploy-a-blog-on-github-by-jekyll.html)
- [Jekyll中使用MathJax](http://www.pkuwwt.tk/linux/2013-12-03-jekyll-using-mathjax/)

### Jekyll-bootstrap步骤
1. Github工作目录：
搭建Github工作目录，需要先把ssh通道建立好，参看下面两篇文章。[产生ssh keys](https://help.github.com/articles/generating-ssh-keys), [可能碰到的问题](https://help.github.com/articles/error-permission-denied-publickey)

	需要注意的是，如果在上面准备工作里github的ssh设置没能成功。
	git remote set-url origin git@github.com:zzbased/zzbased.github.com.git
	可以更改为https地址:
	git remote set-url origin https://github.com/zzbased/zzbased.github.com.git

2. Markdown编辑器：在macbook上，我使用的编辑器是lightpaper. 引用图像存储链接服务是 [droplr](droplr.com)

3. [jekyllbootstrap](http://jekyllbootstrap.com)，号称三分钟可以教会搭建github博客，事实就是如此。参考这篇入门指南即可。[入门指南](http://jekyllbootstrap.com/usage/jekyll-quick-start.html)

	如果不喜欢默认的主题，可以按照示例做修改[jekyll-theming](http://jekyllbootstrap.com/usage/jekyll-theming.html)。

4. 安装好jekyll后，就可以本地调试(执行命令：jekyll serve)。在index.md上做修改改变登陆页，在_config.yml里做定制化的配置，譬如user name，title，是否使用comments系统。

5. 然后在_post文件夹里，删除原来的example。利用rake post title="xxx"新增一个md文件。接下来就开始编辑了。
编辑时，对于post文章的基本配置，请参考[常见的jekyll配置](http://jekyllbootstrap.com/usage/blog-configuration.html)

6. 如果不喜欢页面最下面的footer, 可以在“./_includes/themes/twitter/default.html”文件中，把footer屏蔽掉。不过建议还是留着，可以让更多的人接触到这项工具。如果不喜欢disqus中的广告，请参考[关掉Jekyll Bootstrap的comments广告](http://stackoverflow.com/questions/19577049/jekyll-bootstrap-commenting-function-without-advertisement)
