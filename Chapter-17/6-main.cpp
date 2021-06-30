/*
考虑14章的编程练习5中的类定义。如果还没有完成这个练习，请现在就做，然后完成下面的任务。
编写一个程序，它使用标准C++I/O、文件I/O以及14章的编程练习5中定义的employee、manager、fink和highfink类型的数据。
该程序应包含程序清单17.17中的代码行，即允许用户将新数据添加到文件中。
该程序首次被运行时，将要求用户输入数据，然后显示所有的数据，并将这些信息保存到一个文件中。
当该程序再次被运行时，将首先读取并显示文件中的数据，然后让用户添加数据，并显示所有的数据。
差别之一是，应通过一个指向employee类型的指针数组来处理数据。这样，指针可以指向employee对象，也可以指向从employee派生出来的其他三种对象中的任何一种。
使数组较小有助于检查程序，例如，您可能将数组限定为最多包含10个元素：
const int MAX = 10; // no more than 10 objects
...
employee * pc[MAX];
为通过键盘输入，程序应使用一个菜单，让用户选择要创建的对象类型。菜单将使用一个switch, 以便使用 new 来创建指定类型的对象，并将它的地址赋给pc数组中的一个指针。
然后该对象可以使用虚函数 setall() 来提示用户输入相应的数据：
pc[i]->setall(); // invokes function corresponding to type of object
为将数据保存到文件中，应设计一个虚函数 writeall();

*/