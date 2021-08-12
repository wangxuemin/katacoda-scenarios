1.可以使用record命令来采集cpu热点，最好通过-p 参数来指定进程,由于测试程序每次进程pid不一样
所以本例中采集系统所有进程的热点数据

2.使用命令 `record sleep 15`{{execute}} 采集系统所有进程的cpu热点函数

3.等待15s 等待数据采集完成 

4.使用命令 `report`{{execute}} 查看热点函数分析报告

5.使用命令 `report --no-children  --stdio --call-graph=graph `{{execute}} 更改报告的显示格式

