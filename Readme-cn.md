# Makefile 模板

## 语言选项

[English](./Readme.md) | [简体中文](./Readme-cn.md)

## 简介

这个仓库针对不同大小与复杂度的工程，提供了不同的**Makefile模板**，分别对应从小到只包含一个'扁平的'源文件组织结构的小工程，到大到有比较'复杂'的结构的工程。

这些模板并非全都是非常简洁清晰的，甚至其中有一部分模板在工程不断增长后会带来一些难以预料的副作用。但是本仓库提供的是针对**不同尺寸与复杂度的工程**的Makefile模板，所以每个模板必然针对其要解决的问题进行了简化与优化，随之而来的就是无法动态地适应所有情况。当然这也是我们尝试做了一些分类的原因，毕竟针对一些简单的工程，可能只有几个源文件，不需要非常复杂的Makefile，那么提供一个短小精悍，功能足够的模板就可以了；针对一些可能会有所增长，需要自适应但是也需要一些灵活性的中等规模的工程，我们提供了一个比较可行的解决方案；对于更大型，更复杂的工程，我们推荐使用自动化的工具来帮你完成手写Makefile难以完成的任务。

本代码基于MIT协议开源，请尽管使用(在协议允许的范围内)。同时也随时欢迎任何issue和pull-request。

## 证书

[![license](https://img.shields.io/github/license/mashape/apistatus.svg?style=plastic)](https://github.com/TheNetAdmin/Makefile-Templates/blob/master/LICENSE)