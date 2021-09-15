1.下载cpu测试程序源码 `wget https://raw.githubusercontent.com/wangxuemin/katacoda-scenarios/main/xpocket/resourse/useallcpu.c`{{execute}}。

2.查看一下测试程序源码`more useallcpu.c`{{execute}}。

3.编译测试程序`gcc useallcpu.c -o useallcpu -pthread`{{execute}}。

4.运行测试程序`nohup ./useallcpu &`{{execute}}。
