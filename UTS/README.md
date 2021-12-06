UTS namespace 是用来隔离系统的hostname以及NIC domain name的。

术语UTS来自于调用函数uname()时用到的结构体: struct utsname. 而这个结构体的名字源自于"UNIX Time-sharing System".



* namespace的本质就是把原来所有进程全局共享的资源拆分成了很多个一组一组进程共享的资源

* 当一个namespace里面的所有进程都退出时，namespace也会被销毁，所以抛开进程谈namespace没有意义

* UTS namespace就是进程的一个属性，属性值相同的一组进程就属于同一个namespace，跟这组进程之间有没有亲戚关系无关

* clone和unshare都有创建并加入新的namespace的功能，他们的主要区别是：

        unshare是使当前进程加入新创建的namespace

        clone是创建一个新的子进程，然后让子进程加入新的namespace

* UTS namespace没有嵌套关系，即不存在说一个namespace是另一个namespace的父namespace
