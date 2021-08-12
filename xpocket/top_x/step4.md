1.使用命令`cpu_p`{{execute}} 来查打印当前进程列表信息按照cpu使用率排序。

2.使用参数 -p 可以直接取得top cpu的 pid `cpu_p -o`{{execute}} 

3.使用命令`cpu_s`{{execute}} 可以获得不同状态的进程列表：
`cpu_s -r`{{execute}} 获取running状态下的进程列表(包含running和uninterruptible sleep状态)
`cpu_s -s`{{execute}} 获得sleep状态的进程列表
