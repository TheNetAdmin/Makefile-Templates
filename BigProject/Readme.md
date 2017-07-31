# Makefile for BIG Project

## Language

[English](../Readme.md) | [简体中文](./Doc/Readme-cn.md)

## Introduction

If the Makefile for SMALL or MEDIUM project are not suitable for your project, then maybe we can call it a BIG project.

For such complex project, I would recommend you to generate Makefile or IDE related project automatically, using tools like CMAKE or IDE related build tools. These tools are especially designed to solve the complex dependencies and make the build more frendly and automatically.

The usage of CMAKE or some IDE related tools is way out of this post's range, but you should find many awesome blogs or posts on Google, Stack Overflow or Github, etc.

Basically, if the effiency is not the priority or the build process doesn't take too much time, using an automatic build tool is a good-enough choice. But if the effiency is to be considered during the build process, maybe you need an expert to construct a complex manually written Makefile structure, with the help of some other tools. I would recommend you to analyze what Linux Kernel does to maintain a huge project.