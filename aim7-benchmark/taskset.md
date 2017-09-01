### taskset

```
$ taskset --help
Usage: taskset [options] [mask | cpu-list] [pid|cmd [args...]]

Show or change the CPU affinity of a process.

Options:
 -a, --all-tasks    operate on all the tasks (threads) for a given pid
 -p, --pid               operate on existing given pid
 -c, --cpu-list      display and specify cpus in list format
 -h, --help             display this help
 -V, --version       output version information

The default behavior is to run a new command:
    taskset 03 sshd -b 1024
You can retrieve the mask of an existing task:
    taskset -p 700
Or set it:
    taskset -p 03 700
List format uses a comma-separated list instead of a mask:
    taskset -pc 0,3,7-11 700
Ranges in list format can take a stride argument:
    e.g. 0-31:2 is equivalent to mask 0x55555555
```
