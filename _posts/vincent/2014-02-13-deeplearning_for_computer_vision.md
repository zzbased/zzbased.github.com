---
layout: post
category : 机器学习
tagline: "Supporting tagline"
tags : [deep learning, image]
---
{% include JB/setup %}



## deep learning for computer vision, slide learning.

**deep learning for computer vision,
nips 2013 tutorial,
rob fergus**
[slidelink](http://cs.nyu.edu/~fergus/presentations/nips2013_final.pdf)

- existing recognition approach. page4. **need **
features are hand-designed.
trainable classifier is often generic.

- supervised or unsupervised， deep or shallow。page10. **need**

- recap of convnet. page13. **need**
input image ->  convolution -> non-linearity -> pooling -> feature maps

- cnn. components of each layer. compare to sift descriptor. page 21~22. **need**

- filtering. tied filter weights. page24.

- non-linearity. tanh vs sigmoid vs rectified linear. page26.

- pooling. max or sum. larger receptive fields. page27~29

- architecture of krizhevsky. param nums? page35

- 直接拿某些层的features送进linear svm of soft-max. page40.

- visualizing convnets. page45~46
using deconvolutional networks.
和卷机神经网络某些操作类似，但是是相反的。
feature maps -> unpooling -> non-linearity -> convolution -> input image.

- details of operation. page48.  **need**

- imagenet 2013 results. page 69. **need**

- improving generalization. page76. **need**
data augmentation.
weight decay.
inject noise into network. dropout, dropconnect, stochastic pooling.

- 如何调试cnn。page84~85. **need**
训练diverges，减小learning rate，numerical gradient checking。
parameters collapse.
network is underperforming.

- detection with convnets. page89.

- using features on other datasets. page106.



