#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Nov 24 14:49:17 2019

@author: zw
"""

# =============================================================================
# hi = "hello there"
# name = "ana"
# greet = hi + " " + name
# #print(greet)
# 
# silly = hi + (" " + name)*3
# print(silly)
# 
# =============================================================================

# =============================================================================
# x = 1
# print(x)
# x_str = str(x)
# print("my fav number is", x, ".", "x =", x)
# print("my fav number is", x_str + "."+ " x =", x_str)
# print("my fac number is " + x_str + "." + " x =" + x_str)
# =============================================================================

# =============================================================================
# text = input("type anything...")
# print(5*text)
# num=int(input("type a number..."))
# print(5*num)
# =============================================================================

x = float(input("enter a number for x: "))
y = float(input("enter a number for y: "))
if x == y:
    print("x and y are equal")
    if y != 0:
        print("therefore, x/y is", x/y)
elif x < y:
    print(" x is smaller")
else:
    print("y is smaller")
print("thanks")