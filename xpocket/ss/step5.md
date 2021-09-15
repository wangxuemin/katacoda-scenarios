1.可以使用record命令来采集cpu热点，需要通过-p 参数来指定进程,由于测试程序每次进程pid不一样
record 命令请用户手动输入

2.使用命令 `record -g -p <pid> sleep 15`采集系统测试进程的cpu热点函数

3.等待15s 等待数据采集完成 

4.使用命令 `report --no-children  --stdio --call-graph=graph   --percent-limit=1 `{{execute}} 更改报告的显示格式

