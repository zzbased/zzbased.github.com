---
layout: post
category : 机器学习
tagline: "Supporting tagline"
tags : [topic model, rbm, deep learning]
---
{% include JB/setup %}


## Modeling Documents with a Deep Boltzmann Machine. Thesis learning.

topic model:
[Replicated Softmax](http://books.nips.cc/papers/files/nips22/NIPS2009_0817.pdf)
[LDA](http://en.wikipedia.org/wiki/Latent_Dirichlet_allocation)
[DocNADE](http://books.nips.cc/papers/files/nips25/NIPS2012_1253.pdf)

文章称从rbm model里提取出来的文本特征在文本分类和检索的效果比lda, DocNADE，Replicated Softmax都好。

lda这些模型，精确inference是比较困难的，所以一般采用近似inference，例如stochastic variational inference, online inference, collapsed gibbs。
不过在replicated softmax模型中，inferring latent topic representations is exact and efficient。

The Replicated Softmax model is a family of Re- stricted Boltzmann Machines (RBMs) with shared pa- rameters.

Therefore, we have the following two extremes: On one hand, RBMs can be efficiently trained (e.g. us- ing Contrastive Divergence), inferring the state of the hidden units is exact, but the model defines a rigid, implicit prior. On the other hand, a two hidden layer DBM defines a more flexible prior over the hidden rep- resentations, but training and performing inference in a DBM model is considerably harder.

We introduce a two hidden layer DBM W1 model, which we call the Over-Replicated Softmax W1 model. This model is easy to train, has fast approxi-
mate inference and still retains some degree of flexibil-
ity towards manipulating the prior.

