## Exam Details
#### 2019.12.15 期末考试题
考试还是很友好的 §(*￣▽￣*)§

~#include <string.h>~ ~strlen()~ ~strcpy()~ ~strcat()~ ~strcmp()~

←_← 没有用到string库函数

## Problem 1
#### 题目内容：
    输入数据有多组，每组分2行，第1行为整数n（n<100），表示有n个整数，接下来为n个具体整数值，要求将其按从小到大进行排序后输出。
    每组单独1行输出，数据与数据之间用1个空格分隔，最后一个数字没有空格。
#### 输入输出说明：
    input
    5
    10 7 5 2 4
    6
    12 34 25 10 19 16
    output
    2 4 5 7 10
    10 12 16 19 25 34
#### 本题为代码拼接题请注意以下说明:
    你只能在代码输入框中："//start(或#start)"行的下面，"//end(或#end)"行的上面输入你的代码，
    而不能改变"//start(或#start)"以及其上所有行的代码，包括添加空格与空行，
    也不能改变"//end(或#end)"以及其下所有行的代码，包括添加空格与空行．

## Problem 2
#### 题目内容：
    金色的秋天，收获的季节，红彤彤的苹果上市了，其中个头大于平均值且糖分也大于平均值的为优等苹果，现在请将优等苹果挑选出来。输出优等苹果的个数。注：平均值均按整数处理。
    输入数据有多组，每组分两行，为5个苹果的大小及含糖量；第一行为苹果的大小，第二行为该苹果的糖份，<br>输出：每组优等苹果个数，每组数据单独1行输出。
#### 输入输出说明：
    input
    13 10 13 11 15 
    5  4  2  2  5
    output
    2

## Problem 3
#### 题目内容：
    给定任意一个整数，求其素（质）数因子的和。
    输入数据有多组，每组为1个整数，输出该整数的所有因子为素数的累加和，每组单独1行输出。
#### 输入输出说明：
    input
    2
    10
    output
    2
    7

## Problem 4
#### 题目内容：
    从学校出发去乐松广场，百度地图导航路径为经过北门，直行右转，过路后到达目的地，或者经过东门，直行左转到达目的地。
    现请按最短距离原则给出最终选择路径。为表述方便，起点为点A，北门为点B，东门为点C，乐松广场为点D。
    输入数据有多组，每组为ABCD 4个点的坐标，输出所选择的路径，每个点之间用1个空格分隔，每组数据单独1行输出；备注：常用的数学函数在<math.h>文件中。
#### 输入输出说明：
    input
    1 1 2 4 4 1 5 2
    1 1 1.5 5 3.2 1 5.5 2.1 
    output
    A C D
    A C D

## Problem 5
#### 题目内容：
    完成函数实现一个字符串中字符的删除。输入数据有多组，每组为一个不含空格的字符串及待删除字符，完成一个函数删除字符串中字符。
#### 输入输出说明：
    input
    afdasf a
    dfewjfrs f
    output
    fdsf
    dewjrs
#### 本题为代码拼接题请注意以下说明:
    你只能在代码输入框中："//start(或#start)"行的下面，"//end(或#end)"行的上面输入你的代码，
    而不能改变"//start(或#start)"以及其上所有行的代码，包括添加空格与空行，
    也不能改变"//end(或#end)"以及其下所有行的代码，包括添加空格与空行．

## Problem 6
#### 题目内容：
    新生入学，各地生源学生档案录入归档，其中录取成绩与生源地为2项主要信息，现在按河北、山东、河南、安徽、湖北顺序录入考生成绩（整数）。
    输入数据有多组，每组为5名学生入学成绩（不重复），并按上述顺序录入。输出每年最高入学分数的生源地，为描述简单起见，生源地按录入顺序简化为1、2、3、4、5；每组单独1行输出。
#### 输入输出说明：
    input
    578 601 561 540 581
    580 578 590 551 582
    output
    2
    3