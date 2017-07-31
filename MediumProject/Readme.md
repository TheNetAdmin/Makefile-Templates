# Makefile for MEDIUM Project

## Language

[English](../Readme.md) | [简体中文](./Doc/Readme-cn.md)

## Introduction

This is the template for **MEDIUM** Project, which has the features like:

- There are nested src folders
- There are multiple sub src folders under one src folder
- The objects should be held by their folder, rather than a common folder like *obj*
- (Mostly) Only one target to build

All in all, it is possible to write all rules for a medium-size project in the top Makefile, but it's low-efficient and hard to maintain.

## How to

When using this template, you may need to:

1. Copy the top Makefile from *Template* to your project root folder.
    1. Fill the blanks, remove their comments like `# FILL: ...`
    1. **NOTE**: you should add all the src folders to variable `DIRS`, and all the objects in the current folder to variable `OBJS`
1. Copy the folder *config* from *Template* to your project root folder.
    1. Specify the compile tool in *config/make.global*
    1. Under Linux/Mac
        1. Delete or comment the line `export MAKE := ...` in *config/make.global*
    1. Under Windows
        1. Fill the blank of `export MAKE := ...` and remove it's comment
1. Create Makefile in each sub src dir, following the template shown in *Template/src/Makefile*, or *Example/.../Makefile*

## Problem description

Assume we have a project with the following folder structure, we call it a **Medium Project**

- Root: holds the **main** src file
  - Makefile: the top Makefile
  - main-src-file
  - src-file1
  - src1: holds some src dirs and files
    - Makefile: rules to make objects in current dir
    - src-file2
    - src-file3
    - sub-src-dir1: holds some src dirs and files
      - src-file4
      - src-file5
      - Makefile: rules to make objects in current dir
  - src2:
    - Makefile: rules to make objects in current dir
    - sub-src-dir2: holds some src dirs and files
      - src-file6
      - src-file7
      - Makefile: rules to make objects in current dir

## Work flow

When executing `make` at the root folder, it will first look into the `TARGET` file, which depend on all the objects `ALL_OBJS` specified by the PHONY target `find-all-objs`.

If any of the objects are not updated, it will be re-generated at its own folder, and `TARGET` will use it for linking.

When linking, compiler link all the object files under all the src dirs, recursively. Since there are path prefixs, it is ok to have filename conflict in different dir(like having *src1/f1.c* and *src2/f1.c* is ok)

## FAQs and Discussions

1. Why we need a Makefile in each src dir
    1. This gives us the chance to maintain the objects under their sources' dirs, which further prevent the filename conflict under different path, since the objects will have a path prefix to eliminate the filename conflict.
1. Why we should manually specify the `DIRS` and `OBJS`
    1. Just in case some source file are not to be compiled(e.g. a test file named `test.c` may not need to be compiled), or some dirs does not contain any source files(e.g. a dir `doc` contains documents), nor in their sub-dirs.
    1. It's easy to add some auto-find rules for `DIRS` and `OBJS`, using `wildcard`.
    1. For simplicity, we do not provide this kind of auto-find which may cause some trouble unintentionally.
1. Why use a `submake.global`, but put all rules in `make.global`
    1. The `all` and `clean` rules in sub-dirs is different from the root-dir, these are to specified seperately.
1. Why re-link and re-generate the target even if all the objects are updated
    1. Since the target`$(TARGET)` depend on some PHONY targets, it may be re-generated even all non-PHONY dependencies are updated. But consider about the simplicity of the Makefile, this redundency is endurable. If anyone has a better idea, feel free to raise an issue or pull-request.