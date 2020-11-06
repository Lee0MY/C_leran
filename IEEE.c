//C语言具有高级语言的特点，又具有汇编语言的特点，所以可以作为工作系统设计语言，编写系统应用程序，也可以作为应用程序设计语言，编写不依赖于硬件的应用程序
//主要应用：操作系统平台开发、游戏软件开发、嵌入式系统开发、桌面应用系统开发、交互式系统开发、多媒体系统开发、网络系统开发、底层接口系统开发、软硬件系统设备开发

//！！！第一章！！！

/*
//输出一个三角形
#include <stdio.h>
int main(){
    printf("  *\n");
    printf(" ***\n");
    printf("*****\n");

    return 0;
}
*/

/*
//打印一个正方形
#include<stdio.h>
int main(){
    printf("* * * *\n");
    printf("*     *\n");
    printf("*     *\n");
    printf("* * * *\n");

}
*/

/*
//猴子吃桃问题 每天吃一半多一个，到第十天早上，还剩1个桃子，求第一天共有多少桃子
#include<stdio.h>
int taozi(int allDay, int sum);

int main(){
    int inputDay = 10;
    int lastTao = 1;
    int allTao = taozi(inputDay, lastTao);

    printf("the total is %d\n", allTao);

    return 0;
}
int taozi(int allDay, int lastTao){
    int i = allDay;
    int sumTao = lastTao;
    if( i == 1 ){
        return sumTao;
    }
    else
    {
        sumTao = (sumTao + 1) * 2;
        i -= 1;
        return taozi(i, sumTao);
    }
    
}
*/

//！！！第二章！！！
//关键字：  1. 类型说明符：用于定义和说明变量、函数其他数据结构的类型。 2. 语句定义符：用于表示一个语句的功能，如if else就是条件语句的语句定义符。 3. 预处理命令字：用于表示一个预处理命令。

/*
//求10!
#include<stdio.h>
int main(){
    float sum=1;
    
    for( int i=1;i<=10;i++ ){
        sum *= i;
    }
    printf("factorial of 10 is %.2f.\n", sum);

    return 0;
}
*/

/*
//3个数由小到大排序
#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int num[MAX_SIZE];
    int i, j, temp;

    //获取输入，并且存储于一维数组中
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &num[i]);
    }
    
    //冒泡排序 从小到大排列
    for (i = 0; i < 2; i++)   //3个数， 3 - 1 轮冒泡，每一轮都将当前最大数推到最后
    {
        for (j=0; j < 2-i; j++)  //j < 2 - i，在当i=0时，已经通过比较移位， num[max]已经是输入的整数数组中的最大整数。故减少一次比较。
        {
            if( num[j] > num[j+1] ){
                temp = num[j];      
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
        
    }
    
    printf("%d %d %d\n", num[0], num[1], num[2]);
    
    return 0;
}
*/

/*
//进阶 10个整数的从大到小排序
#include<stdio.h>
#define MAX_SIZE 1000

int main(){
    int num[MAX_SIZE];
    int i, j, temp;

    //获取整数输入
    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    //对数组中整数进行排序
    for (int i = 0; i < 9; i++)  //10个数，，冒泡排序 10-1 次。
    {
        for (int j = 0; j < 9 - i; j++)  
        {
            if(num[j] < num[j+1]){    //逆序的改变，就是改变比较方式，变为了将最小的值放在最后。（原来如此简单！！！）
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }   

    for ( i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    printf("\n");

    return 0;
    
}
*/

/*
//买苹果，每个苹果0.8元，第一天买2个，第二天买前一天的2倍，直到购买的苹果个数不超过100的最大值，编程求每天平均花都少钱。
#include<stdio.h>

int main(){
    float money = 0.8;
    int day = 1; 
    int all_apple = 2, temp = 2, buy_apple=2;
    float all_money;
    float avg;

    while (1)
    {
        buy_apple = buy_apple*2;
        if( ( buy_apple ) >100){  //当日购买的总苹果数不超过100
            break;
        }
        all_apple = all_apple + buy_apple;
        day += 1;
    }
    
    all_money = all_apple * money;
    avg = all_money / day;
    printf("%.6f\n", avg);

    return 0;

}
*/

//！！！第三章！！！

//通常一个程序包含算法、数据结构、程序设计方法及语言工具和环境4个方面。
//算法是程序的灵魂，用于解决程序”做什么“和”如何做“的问题。
//一个程序主要应该包括两方面内容：一是对数据组织的描述，二是对程序操作的描述。   对数据组织的描述称为数据结构，二队程序操作的描述称为算法。
//因此有这样一个公式：  数据结构 + 算法 = 程序。  对于面向对象的程序设计语言，强调的是数据结构；而对于面向过程的程序设计语言，主要关注的是算法。

//算法是解决问题的一系列方法。 严格的说，算法是对特定问题求解步骤的一种描述，是指令的有限序列。一般地，一个问题的算法并不是唯一的，可能有很多种，一个给定的算法解决一个特定的问题。
//算法的特性： 1.输入 2.输出 （算法可以没有输入，但一定要有输出）3. 有穷性 4. 确定性 5. 可行性。
//算法的好坏： 1.正确性 2.可读性 3.健壮性 4.时间复杂度与空间复杂度 

//算法包含算法设计和算法分析两方面内容，算法设计主要研究怎样针对某一特定类型的问题设计出求解步骤，算法分析则要讨论所设计出来的算法步骤的正确性和复杂性。

//求两个输入整数的最大公约数
/*
解决该问题的自然语言描述：
1、输入a和b的值。
2、求a除以b的余数c。
3、若c等于0，则b为最大公约数，算法结束；否则执行第四步。
4、将b的值放在a中，将c的值放在b中。
5、重新执行第二步。
*/

/*
#include<stdio.h>
int main(){
    int a, b, c;

    scanf("%d %d", &a, &b);
    while (( c = a % b) != 0)  //核心步骤， 通过辗转相除，若余数为0，则此时的整数b是a、b两个整数之间的 最大公约数。
    {
        a = b;
        b = c;
    }
    printf("%d\n", b);

    return 0;  
}

*/

//由此可以看出，在有确定的算法描述情况下，在有编码知识的情况下，编写代码，是一件及其舒适的事情。
/*
算法的描述： 
    1.自然语言：最大的优点就是容易理解，适用于比较简单的问题。对于比较复杂的问题或者在描述分支或循环的算法时一般会很冗长，所以不用自然语言描述算法，避免二义性。
    2.流程图：一种传统的算法表示法，用一些图框来代表各种不同性质的操作，用流程线来指示算法的执行反向。

三种基本结构：
    任何复杂的算法，都可以由顺序结构、选择结构和循环结构这三种基本结构组成。
    循环结构可以分为当型（while）循环 和 直到型（until）循环
        1. 当型循环：先判断条件 P 是否成立，再执行。
        2. 直到型循环：先执行，再判断条件P是否成立。
    
    3.N-S流程图：既然任何算法都是由前面介绍的三种结构组成，所有各基本结构之间的流程线就是多余的。 N-S流程图去掉了原来的所有的流程线，将全部的算法写在一个矩形框内。它也是算法的一种结构化描述方法，同样也是3种基本结构。

    4. 伪代码：伪代码是使用介于自然语言和计算机语言之间的文字和符号来描述算法。它采用某一程序设计语言的基本语法。如操作指令可以结合自然语言来设计，而且它不用符号，书写方便，没有固定的语法和格式，具有很大的随意性，便于向程序过渡。
    （伪代码虽然不是一种实际的编程语言，但表达能力类似编程语言，同时避免了描述技术细节带来的麻烦，所以伪代码更适合描述算法，故被称作”算法语言“或第一语言。）

*/

/*
//判断2000-2500年中的每一年是否为闰年
#include<stdio.h>
int main(){
    int m = 2000;

    do
    {
        if( m%4 == 0 ){
            if( m%100 != 0){
                printf("%d是闰年\n", m);
            }
            else
            {
                if( m%400 == 0){
                    printf("%d是闰年\n", m);
                }
                else
                {
                    printf("%d不是闰年\n", m);
                }          
            }         
        }
        else
        {
            printf("%d不是闰年\n", m);
        }
        m += 1;
        
    } while (m <= 2500);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int m = 2000;
    
    do
    {
        if( m%4 == 0 && m %100 != 0){
            printf("%d是闰年\n", m);
        }
        if( m%4 ==0 && m % 400 ==0 ){
            printf("%d是闰年\n", m);
        }

        m += 1;
    } while ( m <= 2500 );
    
}
*/

//n!问题
/*
伪代码描述：
1.开始
2.如果n=0，输出s=1
3.如果n>0
4.s=1，i=1
5.循环知道i>n
6.s=s*i
7.i=i+1
8.输出s
9.结束
*/
/*
#include<stdio.h>
int main(){
    int all;   //n!中的n值。
    int sum=1;  //sum = n！;

    scanf("%d", &all);
    if( all == 0){
        printf("%d！= %d\n", all, 1);
    }
    else
    {
        for (int i = 1; i <= all; i++) 
        {    
            sum *= i;
        }
    }
    
    printf("%d！= %d\n", all, sum);
    
    return 0;
}
*/ 

//1.判断三角形的类型

//2.计算某日是该年第几天

//3.百钱百鸡问题

//4.打鱼晒网问题

//！！！常用数据类型！！！
//编程的基础————数据类型  数据结构是以数据类型形式出现的，数据类型是程序设计语言的基本组成部分，用以说明数据的存储格式、存储空间的占用情况、可表达的数据范围及可以施加的运算。
/*
    基本类型：
        1.整型： 短整型、基本整型、长整型
        2.字符型
        3.实型（浮点型）：单精度型、双精度型
        4.枚举类型
    构造类型：（使用基本类型的数据，或者使用已经构造好的数据类型进行添加、设计，构造出新的数据类型，以满足待解决问题所需要的数据类型）
        1.数组类型
        2.结构体类型
        3.共用体类型
    指针类型 （指针是C语言的精华，指针类型不同于其他类型的特殊性在于，指针的值表示的是某个内存地址）
    空类型 （关键字为void，主要有两个作用：1、对函数返回的限定。2、对函数参数的限定。 当函数不用返回一个值时，就可以使用空类型设定返回值的类型。）
    
    C语言中， 数据分为： 常量 and 变量
    常量：其值在程序运行的过程中不可以改变的量
        1.数值型常量： 
        整型常量 （根据不同的编译器，整型的取值范围是不一样。另外，如果在16位的就计算机中，整型就是16位的；在32位的计算机中，整型就是32位。）
            整型数据都是以二进制的方式存放在计算机内存中的，其数值是以补码的形式进行表示的。一个正数的补码与其原码的形式相同，一个负数的补码是将该数绝对值二进制形式按位取反再加1。
            对于有符号整数，其在内存中存放的最左面一位表示符号位，如果该位为0，则说明该数为正；如果该位为1，则说明该数为负。
        实型常量 （也称为浮点数常量，是一个十进制表示的有符号实数，由整数部分和小数部分组成。 表示实数的方式有科学计数和指数方式两种。）

2019.9.26
        科学计数方式就是使用十进制的小数方法描述实型。
        有时候实型常量非常大或者非常小，这样使用科学计数方式是不利于观察的，这时可以使用指数方式显示实型常量。其中使用字母e或者E进行指数显示，如45e2表示的是4500。
        在编写实型常量时，可以再常量的后面加上符号 F 或者 L 进行修饰。F表示该常量时float单精度类型，L表示该常量为long double 长双精度类型。
        如不加后缀，在默认状态下，实型常量为double双精度类型。

        2.字符型常量
        字符常量：
            一般字符常量：使用单撇号括起来的单个字符称作字符常量，如'A'、'#'等。 注意： 字符常量中只能包括一个字符，不是字符串。 字符常量是区分大小写的。  
        特殊字符常量： 
            就是转义字符。转义字符在C语言中表示字符的一种特殊形式，其含义是将反斜杠”\“后面的字符转换成另外的意义。
            1.转义字符中只能使用小写字母，每个转义字符只能看做一个字符
            2.垂直制表符 \v 和 \f 对显示没有任何影响，但会影响打印机执行响应操作。
            3.在C程序中，使用不可打印字符时，通常使用转义字符。
            4.如果反斜杠之后的字符和反斜杠不构成转义字符，则'\'不起转义作用，则被忽略。  
        3.字符串常量
        使用双撇号括起来的若干字符序列称作字符串常量，如字符串"Hello World!"等。如果在字符串中没有字符，则称为空串，此时字符串的长度为0。
        ps1: 双撇号和前面提到的单撇号一样只起到界定作用，双撇号里的字符序列可以使C语言字符集中除双引号和反斜杠以外的所有可显示字符组成的序列。
        ps2: C语言存储字符串变量时，系统会在字符串的末尾自动添加一个"\0"作为字符串的结束标志。 所以对于字符串"H"，它的长度为 2 ，因为系统会自动在字符串的尾部添加一个字符串的结束字符"\0"。
        ASCII码表：  C语言中，所使用的字符被一一映射到一个表中，这个表就是ASCII码表。

        3.符号常量
        在C语言中，将程序中的常量定义为一个标识符，该常量就叫做符号常量。
*/

/*
//字符常量的输出  在该例子中，使用putchar()函数将单个字符常量进行输出，使得输出的字符常量形成一个单词hello显示在控制台。
#include<stdio.h>
int main(){
    putchar('H');   //字符常量必须用单引号括起来。
    putchar('e');
    putchar('l');
    putchar('l');
    putchar('o');
    putchar('\n');

    return 0;
}
*/

/*
//输出字符串常量 使用函数printf()将一个字符串常量在控制台进行输出显示。
#include<stdio.h>
int main(){
    printf("Hello World!\n");

    return 0;
}
*/

/*
//符号常量的使用
#include<stdio.h>
#define PAI 3.14   //定义符号常量
int main(){
    double fRadius;  //定义半径变量
    double fResult;  //定义结果变量
    printf("请输入圆的半径：");  //提示
    scanf("%lf", &fRadius);  //输入数据
    fResult = fRadius * fRadius * PAI;  //进行计算
    printf("圆的面积为：%lf\n", fResult);  //显示结果

    return 0;

}
*/

/*
//十进制转换为二进制
#include<stdio.h>
#define MAX_SIZE 16

int main(){
    int twoBit[16];
    int tenBit, mod;
    int num = 15;

    //16位存放二进制数位，初始为0
    for (int i = 0; i < 10; i++)
    {
        twoBit[i] = 0;
    }
    
    //输入待转换的十进制数
    printf("Please input the decinalism number (0~32767)：");
    scanf("%d", &tenBit);

    while ( tenBit != 0)
    {
        mod = tenBit % 2;
        twoBit[num] = mod;
        num -= 1;
        tenBit /= 2;
    }
    
    for (int i = 0; i < 16; i++)
    {
        if( i % 4 == 0 && i != 0 ){
            printf(" ");
        }

        printf("%d", twoBit[i]);
    }
    
    printf("\n");
    return 0;
}
*/
/*
//数值型常量的使用  分别以十进制、八进制、十六进制输出123
#include<stdio.h>
int main(){
    printf("%d.%o.%x\n", 123, 123, 123);

    return 0;
}
*/

//变量
/*
    整型变量 6种类型 基本类型的符号使用int关键字，在此基础上根据需要加上一些符号进行修饰，如关键字short或long等。
        有符号基本整型： signed int 型 == int
        （ C语言中并没有规定各类数据所占内存的字节数，只是要求 short <= int <= long ） [ 整型变量在内存中占的字节数与所选择的编译器有关。 ] (在visual C++ 6.0环境中， int类型变量和long型变量在内存中占4个字节(32位))。
        无符号基本整型： unsigned int
        有符号短整型： signed short 
        无符号短整型： unsigned short int 
        有符号长整型： long int
        无符号长整型： unsigned long int

    实型变量（浮点型变量） 单精度类型 float、双精度类型 double、长双精度类型 long double
        单精度类型：float ，在内存中占4个字节(32位)，取值范围为————-3.4*10^-38 ~ 3.4*10^38。
        双精度类型：double，在内存中占8个字节(64位)，取值范围为————-1.7*10^-308 ~ 1.7*10^308。
        长双精度类型：long double，在内存中占8个字节(64位)，取值范围为————-1.7*10^-308 ~ 1.7*10^308。
    大多数C语言编译系统规定，实型在内存中占用的位数是32位，其中24位表示小数部分(包括符号位)，8位表示指数部分(包括指数符号)。、

变量的存储类别：
    变量的存储类别决定变量什么时候被分配到指定的内存空间中以及在什么时候释放存储空间。因此，存储类别就是为变量分配使用空间的方式，也称为存储方式。变量的 存储类别分为 动态存储 和 静态存储 两种形式，并且通过存储类修饰符来告诉编译器要处理什么类型的类型变量，
    包括： 自动（auto）、静态（static）、寄存器（register）和外部（extern）四类。
    动态存储与静态存储：
        从变量产生时间上可以将变量分为静态存储和动态存储。
        静态存储：在程序运行时分配的固定的存储方式
        动态存储：在程序运行期间根据需要动态地分配存储空间。

        系统给用户的存储空间可以分为3个部分，即程序区、静态存储区和动态存储区。程序区用来存放用户要执行的程序段。数据分别放在静态存储区和动态存储区。
        静态存储的变量位于内存的静态存储区，全局变量都保存在静态存储区，因此，全局变量从程序执行时开始分配存储单元，直到程序结束才释放其所占用的存储单元。
        动态存储区中存储与堆栈操作相关的数据，堆栈中的数据随着进栈出栈操作而变化，当变量被弹出堆栈后，其生存周期也就结束了。在调用函数时，其局部变量也被保存到动态存储区，但函数结束执行时，返回到主调函数时，变量所占用的空间将被释放，此时局部变量也将消失。（由此可见，如果一个函数被调用两次，其中变量的存储空间可能为不同的地址。）
        (1)静态存储区：存储全局变量，在程序的执行过程中，全局变量占据固定的内存空间，知道程序执行完毕才释放内存。
        (2)动态存储区：
            1、自动变量：在函数调用时分配存储空间，当调用完成后释放存储空间。
            2、函数调用时现场保护和返回地址：在函数被调用时分配内存空间。
            3、函数形参：只有在调用该函数时才能为形参分配内存空间，调用完成以后会将所有的空间释放掉

auto变量：
    auto关键字用于修饰一个局部变量为自动的，这意味着每次执行到定义该变量时，都会产生一个新的变量，并且对其进行重新的初始化。
    自动变量的存储方式是动态的，该变量被调用时才会为其分配存储单元，并且被调用结束后立即释放。因此，函数调用结束后自动变量的值不能被保留，如果是在复合语句中定义的自动变量，那么执行执行复合语句后就不能再使用了，否则将引起错误。正是由于这个原因，不同函数间、不同复合语句以及函数与复合语句间都允许使用同名变量，且不会混淆。
    函数内凡未标明存储类型说明的变量均视为自动变量，也就是说自动变量的关键字auto是可以省略，如”auto int i“和 ”int i“等价。

static变量：
    为静态变量，从变量定义时就为其分配存储空间并一直保持不变，直到整个程序结束，才释放其所占的存储单元。

auto 与 static变量区别：
    1.静态存储类型的局部变量是在经他爱存储区内分配内存单元，在程序的整个运行期间都不释放空间。而自动类型的局部变量属于动态存储类型，是在动态存储区分配存储单元的，函数调用结束后存储单元即被释放。
    2.静态局部变量是在编译时赋初始值，并且只赋一次初值，在以后每次调用函数时，都不再为其重新赋值，只是使用上一次函数被调用结束时变量的值。而自动局部变量的初值不是在编译时赋予的，而是在函数调用时赋予的，每调一次函数都会对变量重新赋予一次初值。
    3.如果没有对定义的静态局部变量进行赋值，则该变量的默认值为0或空字符串。而对于自动局部变量来说，如果不赋值，则变量的值是一个不确定的值，这是因为在函数被调用的时候，会为该变量分配一个存储空间，在函数结束时，存储空间被释放。在下一此调用该函数时，又会重新分配一个存储空间，这两次分配的存储空间是不一样的，存储空间的值也是不确定的。

register变量：
    寄存器存储类变量
    对于一个要具备可移植的程序来说，register的作用不大。
    只有局部自动变量和形式参数才能作寄存器变量，因为寄存器变量属于动态存储方式，凡采用静态存储方式的变量都不能定义为寄存器变量。

extern变量：
    澄清一个概念————变量的声明和定义。变量的声明是告知编译器变量的名称和数据类型；变量的定义将为变量分配存储区域。通常情况下，变量的声明也被认为是变量的定义，但是可以使用extern关键字只声明而不定义变量。
    extern 变量 称为外部存储变量。extern声明了程序中将要用到的、但尚未定义的外部变量。
    （一个工程是由多个C文件组成的。这些源代码文件分别编译，然后连接成一个可执行模块。把这样的一个程序作为一个工程进行管理，并且生成一个工程文件来记录所包含的所有源代码文件。）

混合运算：
    在C语言中有很多数据类型，这些数据类型在进行混合运算时该如何进行转换？
    PS：将低等级的数据类型转换为高等级的数据类型，这种转换称为自动类型转换，是由编译器自动完成的。
    低     >>>>-------->>>>  高
    char short  -->  int   -->   unsigned -->  long   -->
                                                         --> double
                                               float  -->

总结：
    介绍了数据类型及数据类型的分类，之后介绍了有关常量的内容，接着引出了有关变量的知识，最后通过介绍了变量的存储类别，进一步说明有关变量的具体使用情况。
*/  

/*
//通过输入，来判断该电脑编译器上 int为 32位； long int为64位,  sort int为16位。
#include<stdio.h>
int main(){
    
    int num;
    float num1;

    scanf("%d %f", &num, &num1);
    printf("%d\n%f", num, num1);

    return 0;
}
*/

/*
//使用sizeof关键字求双精度变量的长度
#include<stdio.h>
int main(){
    int a;
    a = sizeof(long double);
    printf("%d\n", a);

    return 0;
}
*/

//求100 ~ 200 之间的素数

//利用#输出三角形

/*
//auto 变量的应用
#include<stdio.h>
void AddOne(){
    auto int i = 2; //定义auto整型变量
    i += 1;  //变量加1
    printf("%d\n", i);  //显示结果 
}
int main(){
    printf("第一次调用：");  //显示结果
    AddOne();
    printf("第二次调用：");  //显示结果
    AddOne();

    return 0;
}
*/

/*
//使用register变量修饰整型变量，计算1~5的阶乘值
#include<stdio.h>
int fact(int n){
    register int i,f = 1;
    for ( i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return(f);
    
}
int main(){
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("%d! = %d\n", i, fact(i));
    }
    return 0;
    
}
*/

/*
//使用extern变量
//这个时候有一个外部C文件 extern.c  文件中内容如下：
//#include<stdio.h>
//int i = 100;
#include<stdio.h>
int main(){
    extern int i;  //定义外部整型变量
    printf("%d\n", i);  //显示变量值

    return 0;
}
//编译 cc IEEE.c extern2.c
*/

/*
//混合运算 将int型变量、char型变量和float变量进行相加，将其结果存放在double类型的变量result中，最后使用printf()函数输出。
#include<stdio.h>
int main(){
    int i = 1;
    char c = 'A';
    float f = 2.2f;

    double result = i + c + f;

    printf("%f\n", result);

    return 0;
}
*/

//第四章 实战模拟

/*
//1， 小球下落问题   一球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下，求它在第10次落地时共经过多少米？第10次反弹多高？
#include<stdio.h>
int main(){
    int ball = 100;
    int cishu = 1;
    int sum = 0;

    while ( cishu <= 9)
    {
        sum = sum + ball*3/2;
        ball /= 2;
        cishu += 1;
    }

    sum = sum + ball;
    printf("%d\n", sum);
    
    return 0;
}
*/

/*
//巧分苹果
#include<stdio.h>
int main(){
    int a, b;
    signed int c = 4;
    int people;
    int num[6];

    for (int i = 6; i > 2; i--)
    {
        a = 420 / i;
        b = 420 * i / (i-1) - a;
        //printf("%d\n", b);
        num[i - c] = b;
        c = c - 2;   

    }

    num[0] = ( 420 - 420 / 2 ) *  8 / 7;
    num[1] = 420 * 7 / 6 - num[0] / 8;

    for (int i = 0; i < 6; i++)
    {
        people = i + 1;
        printf("老%d原先分到的苹果为：%d\n", people, (int)num[i]);
    }
    
    return 0;    
}
*/

//老师分糖果


//！！！第五章！！！
//表达式与运算符
//在C语言中，运算符、变量和函数一起组成表达式  (每个表达式的返回值都具有逻辑性。如果返回值是非0的，那么该表达式返回为真值，否则返回为假值。通过这个特点，可以将表达式放在用于控制程序流程的语句中，这样就构建了条件表达式。)
/*
#include<stdio.h>
int main(){
    int i,j,k;
    int x = (i=4,j=16,k=32);

    printf("%d\n", x);

    return 0;
}   
*/

/*赋值运算符与赋值表达式 

数值类型有很多种，如字符型、整型、长整型和实型等，因为这些不同类型的变量具有不同的长度和符号特性，所以取值范围也不同。
自动类型转换： 指的是整型数据和实型数据之间的互相转换。转换规则如下：
    将实型数据赋给整型变量时，实型数据的小数部分将被舍弃。
    将整型数据赋给实型变量，数值不变，但以浮点数形式存储到变量中。
强制类型转换：强制类型转换的一般形式为：（类型名）表达式

算术运算符与表达式：
    算术运算符包括两个单目运算符（正和负） 和 五个双目运算符（乘法、除法、取模、加法和减法）
    用算术运算符和括号将运算对象（也称为操作数）连接起来、符合C语法规则的式子称为算术表达式。
    优先级与结合性：
        算术运算符的优先级： *、/、% 的优先级高于 +、-的级别；
        算术运算符的结合行： 当算术运算符的优先级相同时，结合方向为”自左向右“。
    自增自减运算符：
        自增与自减运算符都可以放在变量的前面或者后面，放在变量前面称为前缀，放在变量后面称为后缀，使用的一般形式如下：
            ++i  i自增1后再使用i
            --i  i自减1后再使用i
            i++  使用i后i的值再自增1
            i--  使用i后i的值再自减1

关系运算符与表达式：
    关系运算符也叫做标胶运算符  > < >= <= == !=
    关系表达式 用关系运行算符将两个表达式连起来、符合C语法规则的式子称为关系表达式。 优先级： < <= > >= 优先级相同  大于  == !=

逻辑运算符：
    ！、 && 、 ||
    综合运算时，优先级从高到低的顺序为： ! ->  算术运算符  ->  关系运算符  ->  &&和||  ->  赋值运算符


*/

/*
//显示类型转换的结果
#include<stdio.h>
int main(){
    char c;
    short int i;
    int a;
    float z = 70000;

    c = (char)z;
    i = (short)z;
    a = (int)z;

    printf("字符是： %c\n", c);  //输出字符型变量
    printf("短整型数值是：%hd\n", i);  //输出短整型变量值
    printf("整型数值是：%d\n", a);  //输出整型变量
    printf("实型数值是：%f\n", z);  //输出单精度浮点型变量值

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    double a = 3.5, b = 2.5;
    printf("%f\n", (int)a+b/b );    //先进行强制类型转换，然后再进行数值计算，输出结果为4.000000

    return 0;
}
*/

/*
//使用算术表达式计算摄氏温度
#include<stdio.h>
int main(){
    int iCelsius, iFahrenheit;  //声明两个变量，分别存放温度和华氏温度
    printf("请输入华氏温度：");  //显示提示信息
    scanf("%d", &iFahrenheit);  //在键盘上输入华氏温度
    iCelsius = 5 * (iFahrenheit - 32) / 9;  //通过算术表达式进行计算，并将结果赋值

    printf("%d 华氏摄氏度转换成摄氏温度为：%d 摄氏度\n", iFahrenheit, iCelsius);  

    return 0;
}
*/

/*
//比较自减自增运算符前缀与后缀的不同
#include<stdio.h>
int main(){
    int a = 3;
    int b = 3;

    int i,j;  //得到自增运算的结果
    int m,n;  //得到自减运算的结果

    j = ++a;
    i = b++;

    printf("自增操作 ...\n");
    printf("a的值是：%d\n", a);
    printf("j的值是：%d\n", j);  
    printf("i的值是：%d\n", i);
    printf("b的值是：%d\n", b);

    a=3, b=3;

    m = --a;
    n = b--;

    printf("自减操作 ...\n");
    printf("a的值是：%d\n", a);
    printf("m的值是：%d\n", m);  
    printf("n的值是：%d\n", n);
    printf("b的值是：%d\n", b);

    return 0;
}
*/

/*
//定义变量a，并为其赋值为3，使用printf函数显示 -a++ 的结果，观察输出结果，了解自增运算的结合性。
#include<stdio.h>
int main(){
    int a = 3;

    printf("%d\n", -a++);
    printf("%d\n", -a++);

    return 0;
}
*/

/*
//关系运算符的使用
#include<stdio.h>
int main(){
    int a=5, b=10, c=8, d=6, x1, x2, x3;
    x1 = a>b>d;
    x2 = a>(b>d);
    x3 = a+b>c+d;  //算术运算符的优先级高于关系运算符。
    printf("%d, %d, %d\n", x1, x2, x3);  

    return 0;
}
*/

//求解二元一次不定方程，其中a、b、c要求从键盘输入，其中a>0, b>0且a>=b。

//可逆素数： 指将一个素数各位数字的顺序倒过来构成的反序数仍然是素数，按以上要求求所有的4位素数。

/*
//逻辑运算符的运用
#include<stdio.h>
int main(){
    int i = 5, j = 8, k = 12, l = 4, x1, x2;
    x1 = i > j && k > l;
    x2 = !(i > j) && k > l;
    printf("%d, %d\n", x1, x2);

    return 0;
}
*/

/*
//逻辑运算符的应用  不同运算符的优先级  ! > 算术运算符 > 关系运算符  >  && or || > 赋值运算符
#include<stdio.h>
int main(){
    int a,b;
    a = 10;
    b = 0;

    printf("1 代表真，0代表假\n");
    printf("5<a&&b 的值为%d\n", 5<a&&b));
    printf("5<a||b 的值为%d\n", 5<a||b);

    b = !!a;
    printf("b的值为 %d\n", b);
    return 0;

}
*/

/*
//判断闰年  
#include<stdio.h>
int main(){
    int year;

    printf("请输入你要判断的年份：");
    scanf("%d", &year);

    if( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0) ){  //添加判断条件 4年一闰年， 百年不闰； 同时可以除尽100和400的是闰年
        printf("%d年是闰年。\n", year);
    }
    else
    {
        printf("%d年不是闰年。\n", year);
    }

    return 0;   
}
*/

//位逻辑运算与表达式
//位逻辑运算符实现位的设置、清零、取反和取补操作。
//位运算符包括 位逻辑与 &、 位逻辑或 |、 位逻辑异或 ^、 取补 ~  。 （位逻辑运算符通常用于对整型变量进行位的设置、清零和取反，以及对某些选定的位进行检测）

//条件运算符与表达式
//条件运算符 ?: 是C语言中唯一的三目运算符，结合方式是由左向右
/*
    if(a>b)
        {max=a};
    else
        {max=b};   
    
    上面的代码可以用条件运算符 ?: 来进行简化
    max=(a>b)?a:b;
    条件运算符对一个表达式的真或假值结果进行检验，然后根据检验结果返回另外两个表达式中的一个，条件运算符的一般形式为：
    表达式1 ? 表达式2: 表达式3;
    在运算中，首先对第一个表达式的值进行检验。如果值为真，返回第二个表达式的结果值；如果值为假，则返回第三个表达式的结果值。
*/

/*
//利用条件运算符的嵌套表示  成绩大于等于90分的用A来表示， 60~89分的用B来表示，其余的用C来表示
#include<stdio.h>
int main(){
    int score;
    char grade;

    printf("请输入学生的成绩：");
    scanf("%d", &score);

    grade = score>=90?'A':(score>=60?'B':'C'); //用条件运算符来进行判断
    printf("%d属于%c等\n", score, grade);

    return 0;
}
*/

/*
#include<stdio.h>
int main(){
    int a = 12;

    a += a *= a /= a - 6;  //输出的值是多少？
    printf("%d\n", a);

    return 0;
}
*/

//总结：第五章介绍了程序的各种运算符与表达式。
//赋值运算符、算术运算符、关系运算符、逻辑运算符、位逻辑运算符、逗号运算符和条件运算符, 以及如何使用复合运算符简化程序的编写。
//实战模拟

/*
//1.0  阿姆斯特朗数  水仙花数 指一个3位数，其各位数字的立方和等于该数本身。编程求出所有水仙花数。
#include<stdio.h>
int main(){
    int i,b,c,d,sum;

    for(i=100;i<1000;i++){
        
        b = i%10;
        c = i/10%10;
        d = i / 100;
        sum = b*b*b + c*c*c + d*d*d;

        if (i == sum){
            printf("%d\n", i);
        }

    } 
    return 0;
}
*/

/*
//2.0 从键盘输入两个正整数a和b，求最大公约数和最小公倍数。
#include<stdio.h>
int main(){
    int a,b;  //输入的两个数
    int c,m,t;
    printf("请输入两个整数：\n");
    scanf("%d %d", &a, &b);
    if(a<b){
        t = a;
        a = b;
        b = t;
    }
    m = a * b;
    c = a % b;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a%b;
    }
    printf("最大公约数为：%d\n", b);
    printf("最大公倍数为：%d\n", m / b);  //最小公倍数是两数相乘的积除以这两个数的最大公约数。

    return 0;
}
*/

/*
//3.0 求1~10的累加和
#include<stdio.h>
int main(){
    int firstNum, endNum;
    double sum;
    printf("请输入你要求累加和的数字范围，即其开头数字与结尾数字：");
    scanf("%d %d", &firstNum, &endNum);

    sum = (firstNum + endNum) * (endNum - firstNum + 1) / 2;
    printf("%d ~ %d 的累加和为%.2f.\n", firstNum, endNum, sum);

    return 0;
}
*/

//！！！第六章 数据输入与输出函数 ！！！
//目标： 1、了解有关语句的概念 2、掌握单个字符数据的输入/输出操作 3、掌握如何输入/输出字符串  4、掌握数据的格式化输入/输出操作

//一个C程序应该包括数据描述(由数据声明部分来实现)和数据操作(由执行语句来实现)。 C语句分为5类，即表达式语句、函数调用语句、空语句、控制语句和复合语句。

/*
//判断回文数 运行程序，输入一个数字，如121，判断是否诶回文数。
#include<stdio.h>
int palind( char str[], int k, int i)     //自定义函数检测是否为回文字符串
{   
    printf("%d %d\n", k, i);
    printf("测试数据：%d\n", (str[k] == str[i-k] && k == 0));

    if( str[k] == str[i-k] && k == 0){     //定义递归结束条件
        return 1;               
    }
    else if( str[k] == str[i-k]){         //判断对应的两个字符是否相等
        palind(str, k-1, i);              //递归调用
    } 
    return 0;       
}
int main(){
    int i=0, n=0;    //i 记录字符个数   n是函数返回值
    char ch, str[20];
    while (( ch=getchar() != '\n' ))
    {
        str[i] = ch;
        i++;
    }

    if( i%2 == 0){  // 当字符串中的字符个数为偶数时
        n = palind(str, (i/2), i-1);
    }
    else{
        n = palind(str, (i/2 - 1), i-1);   //当字符串中的字符个数为奇数时。
    }
    if( n == 1 )
        printf("是回文数\n");
    else
        printf("不是回文数\n");
      
    return 0;
}
*/

/*  只有分号 ；组成的语句称为空语句。
    空语句是什么也不执行的语句。
    for(n=1;getchar()!='\n',n++);
    等效于
    for(n=1;getchar()!='\n',n++)
    {
        ;
    }
*/

//C语言从执行方式上看，可以分为顺序、选择、循环这3种基本结构。
//条件判断语句： if、switch语句；  循环执行语句：do while语句、 while语句、  for语句。 转向语句：break、 goto、 continue、 return。


//字符数据输入与输出
//C语言标准I/O函数库提供了一些输入/输出函数，主要包括字符输入/输出函数getchar()和putchar()、 格式化输入/输出函数scanf()和printf() 以及 字符串输入/输出函数puts()和gets()。

//字符数据输出与输入
/*
    putchar()函数，向显示设备输出一个字符，该函数每次输出一个字符。 
    int putchar( int ch );
    使用putchar函数，首先要包含头文件stdio.h，声明字符型变量，用来保存要输出的字符，另外，由于putchar()函数只能输出一个字符，因此想要输出字符串，就要多次调用putchar()函数来实现。

    getchar()函数，作用是从终端(输入设备)输入一个字符。getchar()函数每次获取一个字符。getchar函数矛putchar()函数不同的是getchar()没有参数。
    int getcahr();
    ch = getchar();

    putchar( getchar() );
*/

/*
//使用getchar()函数实现字符数据输入
#include<stdio.h>
int main(){
    char a;
    a = getchar();
    putchar(a);
    putchar('\n');
    getchar();  //接收回车键， 当接收第一个输入后，为了确定输入完毕，要按回车键进行确认。其中的回车也算是字符，如果不进行获取，那么下一次使用getchar()函数将得到回车键
    putchar(getchar());
    putchar('\n');
    
    return 0;

}
*/

//字符串输入和输出
//在C语言中，提供了两个函数用来对字符串进行操作，分别是gets()函数和puts()函数。
/*
    字符串输出函数： puts() 作用是用来输出一个字符串到屏幕上。
    int puts( char *str );
    形式参数str是字符指针类型，可以用来接收要进行输出的字符串(可以包含空格)。例如使用puts()函数输出一串字符。
    puts("I LOVE YOU!!!");
    该语句会自动进行换行操作。puts()函数会在字符串中判断'\0'结束符，遇到结束符时，后面的字符不再输出并且自动换行。
    （注释： 编译器会在字符串常量的末尾添加结束符'\0'。）

    字符串输入函数： gets()，作用是将读取的字符串保存在形式参数str变量中，读取直到出现新的一行为止。其中新的一行的换行字符将转化为字符串中的空终止符'\0'。
    char *gets( char* str );

    puts()函数和gets()函数每次只能输入或输出一个字符串，不能写成puts(str1, str2)或gets(str1, str2)的形式。
*/

/*
//使用puts()函数读字符串常量和字符串变量进行操作
#include<stdio.h>
int main(){
    char* words = "I LOVE YOU !!!";  //定义字符串指针性变量

    puts("I LOVE YOU !!!");
    puts("I LOVE YOU !\0!!");
    puts(words);
    words = "I LOVE YOU !\0!!";
    puts(words);

    return 0;
}
*/

/*
//使用字符串输入函数gets()获取输入信息
#include<stdio.h>
int main(){
    //char cString[30];  //定义一个字符数粗变量
    //gets(cString);     //获取字符串
    //puts(cString);
    
    char* aString;
    gets(aString);
    puts(aString);

    return 0;
}
*/

//格式输出与输入函数
/*
    printf()函数就是格式输出使用的函数，其作用是向终端(输出设备)输出若干任意类型的数据。
    printf( 格式控制, 输出表列 );
    格式控制：用双引号括起来的的字符串，包括两种字符：
        ①格式字符：用来进行格式说明，作用是将输出的数据转换为指定的格式输出。格式字符是以 % 字符开头的。
        ②普通字符是需要原样输出的字符，其中包括双引号内的逗号、空格和换行符。
    输出表列：
        输出表列中列出的是要进行输出的一些数据，可以是变量或表达式。
        ps：输出表列中给出了各个输出项，要求格式字符和各输出项在数量和类型上应该一一对应。
    在程序中，定义的长整型变量在使用printf()函数对其进行输出时，应该在%d格式字符中添加” l “字符，继而输出长整型变量。

    scanf()函数是格式输入函数，该函数的功能是可以指定固定的格式，并且按照指定的格式接收用户在键盘上输入的数据，最后将数据存储在指定的变量中。
    scanf( 格式控制, 地址列表);
    scanf( "%d", &a );
    在上面的代码中，&符号是表示取a变量的地址,所以变量的地址不用关心具体是多少，只要在遍历标识符前加&符号，就表示是取变量的地址。

    什么叫按照格式控制的格式输入呢？就是当格式控制中出现%d, %d，即两个%d之间用逗号隔开，这时输入的数据之间必须用逗号隔开，除此之外用其他字符隔开均会产生错误。
    如果格式控制中出现%d%d，即两个%d之间无热河东西，这时输入的两个数据之间可以以一个或多个空白字符作为间隔，这些空白字符包括空格、换行、制表符，除此之外用其他字符隔开均会产生错误。

    scanf()函数与gets()函数的区别：
        ①scanf()函数没有精度控制;
        ②使用gets()函数输入的字符串可以含有空格, 而scanf("%s", str); 不能输入含空格字符的字符串。
*/

/*
//使用格式输出函数printf()
#include<stdio.h>
int main(){
    int a = 24;
    char b = 'Z';
    float c = 12.34f;

    printf("整数是：%d\n", a);
    printf("字符是：%c\n", b);
    printf("实数是：%f\n", c);
    printf("字符串是：%s\n", "I LOVE YOU!!!");
    
    return 0;
}
*/

/*
//使用格式化输入函数scanf()得到用户输入的数据。
#include<stdio.h>
int main(){
    int x,y,m,n;
    char word[30];

    scanf("%d%d", &x, &y);
    scanf("%d%d", &m, &n);
    scanf("%s", word);

    printf("x的值是%d, y的值是%d\n", x, y);
    printf("m的值是%d, n的值是%d\n", m, n);
    printf("字符串为%s\n", word);
    return 0;
}
*/

/*
//使用附加格式说明scanf()函数的格式输入
#include<stdio.h>
int main(){
    long a;
    short b;
    int i1=1;
    int i2=2;
    char c[10];

    printf("请输入一个长整型数据：");
    scanf("%ld", &a);

    printf("请输入一个短整型数据：");
    scanf("%hd", &b);

    printf("请输入一个整数：");
    scanf("%d*%d", &i1, &i2);

    printf("请输入一个长度不长于3的字符串：");
    scanf("%3s", c);

    printf("长整型数据是：%ld\n", a);
    printf("短整型数据是：%hd\n", b);    
    printf("整型数据i1是%d, 整型数据i2是%d\n", i1, i2);
    printf("得到的字符串是：%s\n", c);

    return 0;
}
*/

//顺序程序设计应用
/*
    顺序程序设计师C语言中最简单、最常见的程序设计。所谓的顺序程序设计结构是按程序次序顺序执行，也就是说程序执行时，是依照语句顺序排列顺序，一个语句接一个语句地执行，没有跳转、没有循环。

    下面介绍几个顺序程序设计的实例，其主要目的是巩固前面所学的内容、加深印象。
*/

/*
//从键盘输入一个直角三角形的两边求出另外一条边并将其显示在屏幕上 直角边a、b，用数学函数hypot()来求直角三角形的斜边。
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    printf("请输入两条直角边：\n");
    scanf("%f %f", &a, &b);
    
    c = (float)hypot(a,b);
    printf("直角三角形的斜边是：%f\n", c);

    return 0;
}
*/

/*
//计算圆的面积
#include<stdio.h>
int main(){
    float Pie = 3.14f;

    float fArea;
    float fRadius;

    puts("请输入半径：");
    scanf("%f", &fRadius);
    fArea = fRadius * fRadius * Pie;
    printf("圆的面积是： %.2f\n", fArea);

    return 0;
}
*/

/*
//字母转换，将大写字母转换为小写字母
#include<stdio.h>
int main(){
    char cUpper;
    char cLower;

    puts("请输入大写字母：");
    cUpper = getchar();
    puts("转换为小写字母时：");
    cLower = cUpper + 32;
    printf("%c\n", cLower);

    return 0;

}
*/

//6.9 实战模拟

//用 * 号输出图案 MR

//输出一个字符的前驱字符

//求学生总成绩和平均成绩


//！！！选择分支结构程序设计！！！
//走入程序设计领域的第一步，是学会如何设计编写与一个程序，其中顺序结构程序设计师最简单的程序设计，而选择程序设计中就用到了一些用条件判断的语句，增加了程序的功能，也增强了程序的逻辑性与灵活性。

//if 语句： 就是判断表达式的值，然后根据该值的情况选择如何控制程序流程。 if   if···else  else if 三种语句形式
/*
    if(表达式)  语句；  if(iNum) printf("The true value");
    分号预示着一条语句的结尾，就相当于写作时的句号一样。但并不是每一条C语言的语句都需要分号作为语句结束的标志，if语句后面是不需要加上分号的。
*/
/*
//使用 if 语句模拟信号灯指挥车辆行驶
#include<stdio.h>
int main(){
    int iSignal;
    printf("0代表红灯， 1代表绿灯。\n");
    scanf("%d", &iSignal);
    if(iSignal == 1){
        printf("🚥 信号灯是绿灯，车可以行驶\n");
    }

    return 0;
}
*/

//if···else语句形式：除了可以指定在条件为真时执行某些语句以外，还可以在条件为假时执行另外一段代码。C语言中是利用else语句来完成的。
/*
    if(表达式)
        语句块;
    else
        语句块2;

    if(value){
        printf("the value is true");
    }
    else{
        printf("the value is false");
    }
*/
/*
//用键盘输入3个整数，输出3个数中最小的数。
#include<stdio.h>
int main(){
    int num1 ,num2, num3, min;
    printf("请输入三个整数：\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    if( num1 > num2){
        min = num2;
    }
    else{
        min = num1;
    }
    if(min > num3){
        min = num3;
    }
    printf("最小的数是%d。\n", min);

    return 0;
}
*/
/*
//判断一个数是否既是5又是7的整倍数
#include<stdio.h>
int main(){
    int x;
    printf("请输入一个数：\n");
    scanf("%d", &x);
    if( x % 5 ==0 && x % 7 ==0 )
        printf("yes\n");
    else
        printf("no\n");
}
*/

// else if语句格式： 利用if和else 关键字的组合可以实现else if语句，这是对一系列互斥的条件进行检验。
/*
    if(表达式1) 语句1
    else if(表达式2) 语句2
    else if(表达式3) 语句3
    ...
    ...
    ...
    else if(表达式m) 语句m
    else 语句n
*/
/*
//使用else if编写屏幕菜单程序
#include<stdio.h>
int main(){
    int i;

    printf("---菜单---\n");
    printf("1 = 加载\n");
    printf("2 = 保存\n");
    printf("3 = 打开\n");
    printf("other = 关闭\n");

    scanf("输入选项\n");
    scanf("%d", &i);

    if( i == 1){
        printf("加载文件\n");
    }
    else if(i == 2){
        printf("保存文件\n");
    }
    else if(i ==s 3){
        printf("打开文件\n");
    }
    else
    {
        printf("关闭文件\n");
    }
    
    return 0;
}
*/

//连续使用 if 语句进行条件判断的方法，其中每个条件的判断都是分开的、独立的。而使用 if 和 else if进行条件判断的方法，所有的判断可以看成是一个整体，如果其中有一个为真值，那么下面的else if语句中的判断即使有符合的也被跳过。

/*
// 判断偶数 利用单分支选择语句判断输入的一个整数是否为偶数。
#include<stdio.h>
int main(){
    int num;
    printf("请输入一个整数：\n");
    scanf("%d", &num);
    if(num % 2 == 0){
        printf("%d是偶数\n", num);
    }

    return 0;
}
*/

/*
//判断字母是否是大写 是大写字母 则提示“uppercase letter”; 不是大写字母，则提示“other letter”
#include<stdio.h>
int main(){
    char word;
    printf("请输入一个英文字母：\n");
    word = getchar();
    if(word >= 'A' && word <= 'Z'){   //在C中，字符是以ASCII的形式存储的。
        printf("uppercase letter\n");
    }
    else
    {
        printf("other letter\n");
    }

    return 0;
}
*/

//if 的嵌套形式
// 单条件双分支和多条件多分支的 if 语句虽然可以实现多分支的处理，但有时写出的代码比较繁琐。处理这样的程序时，可以使用 if 语句的嵌套，这样可以使程序简单化，可读性也会有所提高。
// 所谓 if 语句的嵌套，就是在 if 语句中，又添加了一个或者多个 if 语句。
/*
    if(表达式1)
        if(表达式2)  语句块1
        else 语句块2
    else
        if(表达式3) 语句块3
        else 语句块4
    
    使用 if 语句，如果只有一条语句时可以不用大括号。但是有时在使用嵌套结构时，这样会导致错误产生，
    ！！！所以建议是一条语句，也要使用大括号。
*/
/*
//使用 if 嵌套语句选择日程安排。
#include<stdio.h>
int main(){
    int iDay = 0;
    int Monday=1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6, Sunday = 7;

    printf("请输入星期时：\n");
    scanf("%d", &iDay);

    if(iDay > Friday){
        if( iDay == Sunday ){
            printf("和朋友去逛街\n");
        }
        else
        {
            printf("在家陪家人\n");
        }
        
    }
    else
    {
        if( iDay == Monday ){
            printf("公司开会\n");
        }
        else
        {
            printf("和同事一起工作\n");
        }
        
    }

    return 0;
    
}
*/

//if 语句是判断选择语句，总是需要对表达式进行判断真假，为了能够节省时间，不让程序进行多次毫无意义的比较判断，在编写代码时，尽量将正常情况，或说是发生几率较大的表达式放在前面，也就是if 的后面，而不是else的后面。
//这样编写代码不但可以减少程序运行次数，而且可以使程序代码含义清晰，对于程序的可读性和性能都有大幅度提高。所以编写代码时不要本末倒置，将发生概率大的程序放在后面，而将不常发生的程序放在前面的if 语句中。

//虽然使用switch语句编写出来的程序有规律，可读性强，但是由于switch语句不能根据表达式的取值范围作出选择，所以使用时也有很大的局限性。
/*
    基本形式：
        switch(表达式){
            case 情况 1:
                语句块 1;
            case 情况 2:
                语句块 2;
            ...
            case 情况 n:
                语句块 n;
            default:
                默认情况语句块;
        }
*/

/*
//使用switch 输出分数段
#include<stdio.h>
int main(){
    char cGrade;
    printf("请输入你的级别：\n");
    scanf("%c", &cGrade);
    printf("级别情况是：");
    switch (cGrade)
    {
    case 'A':
        printf("90~100\n");
        break;
    case 'B':
        printf("80~89\n");
        break;
    case 'C':
        printf("70~79\n");
        break;
    case 'D':
        printf("60~69\n");
        break;
    case 'F':
        printf("<60\n");
        break;
    default:
        printf("输入有误！\n");
        break;
    }
}
*/

/*
//修改日程安排程序
#include<stdio.h>
int main(){
    int iDay = 0;

    printf("请输入星期时：\n");
    scanf("%d", &iDay);

    switch ( iDay )
    {
    case 1:
        printf("公司开会\n");
        break;
    case 6:
        printf("和朋友去逛街\n");
        break;
    case 7:
        printf("在家陪伴家人\n");
        break;
    default:
        printf("和同学一起工作\n");
        break;
    }

    return 0;
}

//使用switch 语句后使得程序的结构看起来比较清晰，易于观察。在使用case进行检验值时，不要忘记case检验的条件只能是常量或者常量表达式，所以这里不能对变量进行检验。

*/

//多路开关模式的switch语句
/*
    将break去掉之后，会将符合检验条件的所有语句都输出。利用这个特点，可以设计多路开关模式的switch语句。
    形式如下：
    switch(表达式){
            case 1:
                语句块 1;
            case 2:
            case 3:
                语句2;
                break;
            ...
            default:
                默认情况语句块;
        }
    如果在case 2后不使用break语句，那么符合检验和时与符合case 3检验时的效果是一样的，也就是说使用多路开关模式，可以使多种检验条件使用一种解决方式。
*/
/*
//使用if···else语句，就算是再复杂的逻辑判断都可以实现，而且switch语句不能实现的程序，用if···else也能实现。
//if 语句 和 switch 语句的综合使用
#include<stdio.h>
int main(){
    int iMonth=0, iDay=0;
    printf("请输入您想要知道的所包含日期数的月份：\n");
    scanf("%d", &iMonth);

    switch( iMonth ){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            iDay = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            iDay = 30;
            break;
        case 2:
            iDay = 28;
            break;
        default:
            iDay = -1;
            break;
    }

    if(iDay == -1){
        printf("您输入的值有误！\n");
    }
    else{
        printf("2019年% d 月有 %d 天。\n", iMonth, iDay);
    }

    return 0;
}
*/

/*
//选择结构程序应用 使用switch计算运输公司的计费
#include<stdio.h>
int main(){
    int iDiscount;
    int iSpace;
    int iSwitch;
    float fPrice, fWeight, fAllPrice;
    printf("请输入单价，重量和距离\n");
    scanf("%f%f%d", &fPrice, &fWeight, &iSpace);

    if( iSpace > 3000 ){
        iSwitch = 12;
    }
    else
    {
        iSwitch = iSpace/250;
    }
    switch(iSwitch){
        case 0:
            iDiscount = 0;
            break;
        case 1:
            iDiscount = 2;
            break;
        case 2:
        case 3:
            iDiscount = 5;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            iDiscount = 8;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            iDiscount = 10;
            break;
        case 12:
            iDiscount = 12;
            break;
        default:
            break;
    }

    fAllPrice = fPrice * fWeight * iSpace * (1-iDiscount/100.0);
    printf("您一共需要支付：%.4f\n", fAllPrice);
    
    return 0;
}
*/

//！！！循环结构！！！
//程序除了可以做出选择以外，还必须能够重复，也就是反复执行一段指令，直到满足某个条件为止。这种重复的过程称为循环。
//循环语句  Iteration stateents 循环语句：在给定的条件成立时，反复地执行相应的程序，知道给定的条件不成立为止。
//while do...while  for

/*
//求出用户输入数值(n)内所有正整数的和
#include<stdio.h>
int main(){
    int number, sum=0;
    printf("请输入要加到的数字：\n");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        sum += i;
    }
    printf("%d\n", sum);
        
    return 0;
}
*/

/*
//简化上述循环函数
#include<stdio.h>
int main(){
    int number, sum=0, i;
    printf("请输入一个整数：\n");
    scanf("%d", &number);
    i = number;

    while (i)
    {
        sum += i--;
    }
    printf("计算%d以内的整数的总和为：%d\n", number, sum);

    return 0;
}
*/

//while 语句的死循环。使用循环语句容易出错的地方在于编写循环条件！！！有些错误的循环条件会使循环多一次或者少一次，有些错误的循环条件会使循环永远进行————这种循环称为死循环。
//while 语句的空循环体。 如果循环体只是单行语句，那么while语句从while开始，到第一个分号“；”结束，while后面的第一个分号“；”便是while语句结束的标志。如果while(表达式)后面的循环体只有一个分号“；”，也就是胡搜单行语句为空，这样的循环体称为空循环体。
/*
    while(表达式)
    ;
*/

/*
//使用while 语句求 n!
#include<stdio.h>
int main(){
    int num, i;
    long long int sum=1;
    printf("请输入数字：\n");
    scanf("%d", &num);
    i = num;
    while (i)
    {
        sum *= i--;
    }
    
    printf("%d! = %lld\n", num, sum);  
    //!!!对于较大的数，long long int也无法存放这些数字了。 那么该用怎么样的数据结构与算法来实现 大n! 呢？
    
    return 0;
}
*/
/*
//利用 while循环 实现实现菜单操作
#include<stdio.h>
int main(){
    int num=1;

    while (num)
    {
        printf("个人物品管理系统\n");
        printf("---------------菜单---------------\n");
        printf("---------出售物品--------1\n");
        printf("---------购买物品--------2\n");
        printf("---------产品列表--------3\n");
        printf("---------退出系统--------0\n");

        scanf("%d", &num);
        if(num == 1) printf("进入出售页面。\n");
        else if(num == 2) printf("进入购买页面。\n");
        else if(num == 3) printf("进入产品列表页面。\n");
        else{
            printf("输入有误，请输入正确指令。\n");
        }
    }
    printf("成功退出系统。\n");

    return 0;
}
*/

// do...while  先执行条件判断，再做条件判断。 即不论条件是否满足，循环过程必须至少执行一次。

//在C语言中，还有一种类型的循环语句，可以完全替代while型循环和do...while型循环。这种循环不但可用于循环次数已经确定的情况，也可以用于循环次数不确定的情况 —————— for循环。
/*
    for(表达式1; 表达式2; 表达式3;){
        语句;
    }

    一、先计算表达式1的值，如果表达式1不存在，则直接进入步骤二；
    二、然后计算表达式2的值，如果表达式2为真，则执行一次循环（循环语句）;如果表达式2为假，则程序跳出循环，执行步骤五；
    三、计算机表达式3的值；
    四、跳转回步骤二，继续执行循环
    五、循环结束，执行for循环下面的相应语句。

    表达式1：用来完成变量的初始化，一般是一个赋值表达式，用来控制循环的变量，被称为循环变量赋初值。
    表达式2：其主要作用是进行判断，和while循环语句中表达式的作用大致相同。
    表达式3：其主要作用为修改改变量的值。
*/

/*
//使用for语句显示随机数  显示10个随机数
#include<stdio.h>
#include<stdlib.h>
int main(){
    int c;
    for ( c = 0; c < 10; c++)
    {
        srand(c+2);  //设置随机发生数的种子
        printf("随机发生数%d是：%d\n", c, rand());
    }

    return 0;
}
*/

//for循环语句要比while循环语句简单、灵活。从结构上对比，可以看出for循环语句要比while清晰。
//在for 语句中的表达式1和表达式3处，除了可以使用简单的表达式外，还可以使用逗号表达式，即包含一个以上的简单表达式，中间用逗号间隔。
/*
    设置初值
    for(iSum=0,i=1; i<n; i++){
        iSum += i;
    }
    执行循环比变量自加操作两次
    for(i=1;i<n;i++, i++){
        iSum += i;
    }
*/
/*
//计算数值n内所有偶数的累加和
#include<stdio.h>
int main(){
    int i, iSum,n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    for (iSum = 0, i = 0; i <= n; i++, i++)
    {
        iSum = iSum + i;
    }
    printf("数值n内所有偶数的累加和结果为：%d\n", iSum);

    return 0;
}
*/

/*
//一元钱的兑换方案 如果将整钱换成零钱，那么一元钱可兑换成一角、两角或五角，问有多少种兑换方案。
#include<stdio.h>
int main(){
    int i,j,k;
    for (i = 0; i <= 10; i++)
    {
        for(j=0;j<=5;j++){
            for(k=0;k<=2;k++){
                if(i+j*2+k*5 == 10){
                    printf("一角：%d，两角：%d，五角：%d\n", i,j,k); 
                }
            }
        }
    }

    return 0;
    
}
*/
/*
//有这样的一个等式 xyz+yzz = 532，编程求x、y、z的值
#include<stdio.h>
int main(){
    int x, y, z;
    int sum;
    for (x = 0; x <= 5; x++)
    {
        for ( y = 0; y <= 9; y++)
        {
            for ( z = 0; z <= 9; z++)
            {
                sum = x * 100 + y*110 + z * 12;
                if( sum == 532){
                    printf("x=%d, y=%d, z=%d\n", x,y,z);
                }
            }
            
        }
        
    }

    return 0;
}
*/

/*
    三种循环的比较： 
        1、while和do···while循环中，只在循环体中包含使循环趋于结束的语句。
        2、for循环可以在表达式3中包含使循环趋于结束的操作，可以使循环体中的操作全部放在表达式3中。因此for语句的功能更强是，凡是while循环能完成的，用for 循环都能实现。
        3、使用while和do...while循环和for循环都可以用break语句跳出循环，用continue语句结束本次循环。

    循环嵌套：
        一个循环体内又包含另一个完整的循环结构，就称为循环的嵌套。（不管在什么语言中，关于循环嵌套的概念都是一样的。）
        各种循环必须完整，不允许相互交叉，下面的嵌套形式是不允许的。
*/

/*
//使用嵌套语句输出金字塔
#include<stdio.h>
int main(){
    int i, j, k;
    for ( i = 1; i <= 5; i++)  //这就是算法的魅力！！！
    { 
        for ( j = 1; j <= 5-i; j++)
        {
            printf(" ");
        }
        for ( k = 1; k <= 2*i -1; k++)
        {
            printf("*");
        }
            printf("\n");
            
    }
    
}
*/
/*
//打印乘法口诀表
#include<stdio.h>
int main(){
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d ", i,j,i*j);
        }
        printf("\n");
    }

    return 0;
}
*/
/*
//任意给出一个自然数K，数K不为0，计算其各位数字的平方和K1，再计算k1的各位数字的平方和k2，重复此过程，最终得到数1或145。
#include<stdio.h>
int main(){
    long a[10], n, i;
    p: printf("请输入一个整数：\n");
    scanf("%ld", &n);
    if( n == 0){
        goto p;
    }
    while (n != 0 && n != 145)
    {
        printf("n=%ld -->", n);
        i = 0;
        while (n > 0)
        {
            a[i++] = n % 10;
            n /= 10;
        }
        n = 0;
        i--;
        while (i>=0)
        {
            printf("%ld*%ld", a[i], a[i]);
            if(i > 0){
                printf("+");
            }
            n += a[i] * a[i];
            i--;
        }
        printf("=%ld\n", n);
    }
    
    return 0;
}
*/  

//循环的应用
/*
    1、计数循环：程序次数已知，而不依赖语句中的结果。一般为for循环语句。
    2、无限循环：有时程序需要日夜不停地执行循环，如监控、检测中经常使用。
    3、查找循环：按给定的对象进行查找，如电脑中的搜索查找就是使用查找循环。
    4、延时循环:循环中不实现任何功能，只是为了使机器等待一定的时间再运行相应程序，如计时器功能就是用延时循环实现的。
    5、哨兵循环：循环程序不停地执行，直到遇到实现制定的停止命令，循环才能终止。
    6、输入验证循环：为了避免程序员按错按钮，有时程序中包含输入验证循环是很必要的。
*/

//转移语句 改变程序的正常流向 在C语言中提供了4种转移语句 goto 、 break、 continue、 return。

/*
//求出数值内的所有正整数的和
#include<stdio.h>
int main(){
    int n,i,iSum;
    iSum = 0;
    i = 1;
    printf("请输入一个整数：");
    scanf("%d", &n);
    loop: 
    if( i<= n){
        iSum += i;
        i++;
        goto loop;
    }
    printf("计算%d以内的正整数总和的结果为：%d。\n", n, iSum);

    return 0;
}
*/
/*
//使用break语句来跳出循环
#include<stdio.h>
int main(){
    int i;
    for ( i = 1; i < 11; i++)
    {
        if( i == 6){
            printf("当i=6时，程序到此跳出循环。\n");
            break;
        }
        printf("当i=%d时，程序运行为%d次循环。\n", i,i);
    }

    return 0;
    
}
*/
/*
//continue 结束本次循环，即跳过循环体下面尚未执行的部分，接着执行下一次循环操作。
//使用continue结束本次的循环操作。
#include<stdio.h>
int main(){
    int i;
    for ( i = 1; i < 11; i++)
    {
        if( i == 6){
            printf("当i=6时，程序到此跳出循环。\n");
            continue;
        }
        printf("当i=%d时，程序运行为%d次循环。\n", i,i);
    }

    return 0;
    
}
*/

/*
//求输出用户从键盘中输出字符的个数
#include<stdio.h>
int length(char *p){
    int n = 0;
    while ( *p != '\0')  //当指针未指到字符串结尾标识时，执行循环体语句
    {
        n++;  //长度加1
        p++;  //指针向后移
    }
    
    return n;  //返回最终长度
}
int main(){
    int len;
    char str[100];  //定义字符型指针数组str
    // printf("请输入一个字符串：\n");
    gets(str);    //gets函数将输入的字符串 放入数组str中
    len = length(str);
    printf("这个字符串有%d个字符。\n", len);

    return 0;
}
*/
/*
//打印杨辉三角
#include<stdio.h>
int main(){
    int i,j,a[11][11];
    for(i=1; i< 11; i++){
        a[i][i] = 1;  //对角线元素全为1
        a[i][1] = 1;  //每行第一列元素全为1
    }
    for(i=3; i<11; i++){  //for循环范围从第三行开始到第十行
        for(j=2; j<=i-1; j++){  //for循环范围从第二列开始直到该行行数减1列为止
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }  
    }
    for(i=1; i<11; i++){
        for(j=1; j<=i; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//小结：通过了解循环结构的使用，可以再程序功能上节约很多时间，不再一条一条进行操作。while、do···while、for。 其次是转移语句：goto、break、continue。
/*
#include<stdio.h>
int main(){
    char *s = ("ABC");
    do{
        printf("%c\n", *s);
        s++;
    }while(*s);
}
*/
/*
#include<stdio.h>
int main(){
    int i,s=0, t[]={1,2,3,4,5,6,7,8,9};
    for ( i = 0; i < 9; i+=2)
    {
        s+=*(t+i);
    }
    printf("%d\n", s);
    
    return 0;
}
*/

//！！！数组！！！ 第九章
//在编写程序的过程中，经常会遇到使用很多数据量的情况，处理每一个数据量就要有一个相对应的变量，如果每一个变量都要单独进行定义就会变得很繁琐，使用数组就可以解决这种个情况。
//掌握一维数组与二维数组的作用 通过一维与二维数组了解有关多维数组的内容；掌握字符数组的使用及相关的操作；最后将数组用于排序算法，介绍有关字符串处理函数的作用。
/*
    对于这种需求数据量非常大的程序，需要把同一类型的数据按照一定形式的有序的组织起来，这些有序数据的集合就称为数组。
    数组：也可以理解为类型相同、数目固定的若干变量的有限集合。 
    数组 = 数组名 + 下标
    数组是有序数据的集合，有序是指系统在存放时会为数据元素分配一段连续的存储空间，数据元素在这段空间内按照先后顺序进行存放。

    数组有两种分类方式：
    1、按照数组元素的类型分类
        数组元素是组成数组的基本单元，必须具有相同的数组类型。 整型数组、实型数组、字符数组、指针数组等。
    2、按照下标个数进行分类：
        因为数组的下标是唯一确定的，所以可以按照下标个数分类，分别为一维数组、二维数组和多维数组。
    
    C语言中的数组类型包括基本类型、构造类型、指针类型和空类型。数组为构造类型，构造类型除了数组外，还包括结构体类型、共用体类型。
*/

//一维数组 一维数组是数组只有一个下标的组数。
//虽然使用数组和使用变量一样都要“先定义，后使用”。但是定义数组和定义变量还是有不同之处，即定义数组还意味着对这个数组进行构造。
//1.数组元素的类型 2.数组元素的总个数。 3.类型说明符：表示数组中的所有元素的类型，可以是任意一种简单类型、构造类型或指针。 4.数组标识符：表示这个数组型变量的名称。 4.中括号：这对中括号是数组标志，同时也是数组的重要组成部分，不能缺少，也不可以使用其他符号。 5.常量表达式。
//对于一个一维数组，可以使用下列公式计算所需要的内存字节数：  总字节数 = sizeof(类型) * 数组长度
//在 C89中，数组，是不允许进行动态定义的。 int a=10; int num[a]; 像这种，是不允许的。 
//但是，在 C99标准的编译器中则是合法的。上述代码的定义方法称为变长数组，变长数组允许动态分配存储单元。

//在 C 语言中，数组元素不能够被整体引用，只能逐个引用。  数组标识符[下标]
/*
//使用数组保存数据  当输入完毕后，逆向输出数据
#include<stdio.h>
int main(){
    int a[5], b, c;
    printf("请输入5个数组元素：\n");
    for(b=0; b<5; b++){
        scanf("%d", &a[b]);
    }
    printf("数组中元素为：\n");
    for ( b = 0; b < 5; b++)
    {
        printf("%d ", a[b]);
    }
    printf("\n");
    for(b=0; b<2; b++){
        c = a[b];
        a[b] = a[4-b];
        a[4-b] = c;
    }
    printf("现在数组中的5个元素为：\n");
    for(b=0; b<5; b++){
        printf("%d ", a[b]);
    }
    printf("\n");

    return 0;
}
*/

//一维数组的初始化 int i, a[6] = {1,2,3,4,5,6};
/*
#include<stdio.h>
int main(){
    int i;
    int a[6]={10,20,30,40,50};
    for(i=0; i<6; i+=2){
        printf("%d\n", a[i]);
    }

    return 0;
}
*/

//部分初始化 可以给一部分元素赋值，当{}中值的个数少于元素个数时，只给前面的部分元素赋初值，没有赋值的元素默认值为0。
/*
#include<stdio.h>
int main(){
    int i;
    int a[6]={10,20,30};
    for(i=0; i<6; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
*/
//一维数组的应用 使用数组保存学生资料 
/*
#include<stdio.h>
int main(){
    char* StudentName[5];  //字符指针数组
    int Age[5] = {15,17,19,16,18};
    int i;
    StudentName[0] = "王XX";
    StudentName[1] = "赵XX";
    StudentName[2] = "钱XX"; 
    StudentName[3] = "孙XX";
    StudentName[4] =  "李XX"; 
    for ( i = 0; i < 5; i++)
    {
        printf("%s：", StudentName[i]);
        printf("%d岁。\n", Age[i]);
    }

    return 0;
}
*/
/*
//输出20个整数中最大的数值
#include<stdio.h>
int main(){
    int i, max, a[20];
    printf("请输入20个整数：\n");
    for(i=0; i<20; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i=1; i<20; i++){
        if(a[i] > max){
            max = a[i];
        }
    }
    printf("最大的整数为：%d\n", max);

    return 0;
}
*/


//关于一维数组的注意事项
/*
    1、在为一维数组元素全部赋值时，只能给数组元素逐个赋值，不能给数组整体赋值 int a[10] = {10}; X
    2、如果初值的类型与数组元素类型不一致，则把初值类型转换为数组元素类型；
    3、避免数组越界。  C语言并不检查数组索引是否越界，从而导致数组使用范围外的索引时能够访问数组之外的空间，而这些空间可能分配给其他变量的，因此数组越界常常会导致一些不可预期的结果。
*/

//二维数组
// 数据类型说明符 数组名[常量表达式 1][常量表达式2] 常量表达式1被称为行下标，  常量表达式2被称为列下下标。
//二维数组的初始化： 1、按行连续赋值； 2、在为所有元素赋初值时，可以省略行下标，但是不能省略列下标。int a[][3] = {1,2,3,4,5}; 3、按行分段赋值 int a[2][3] = {{1,2,3}, {4,5,6}}; 4、二维数组可以直接对数组元素赋值。

/*
//实现一个二维数组的行和列元素互换，存在另一个二维数组中。
#include<stdio.h>
int main(){
    int i, j, i1, j1;
    printf("请输入数组行数(<=100):\n");
    scanf("%d", &i1);
    printf("请输入数组列数(<=100):\n");
    scanf("%d", &j1);
    int a[i1][j1], b[i1][j1];
    printf("请输入数组的元素\n");
    for ( i = 0; i < i1; i++)
    {
        for ( j = 0; j < j1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("将数组a元素以矩阵形式输出：\n");

    for ( i = 0; i < i1; i++)
    {
        for ( j = 0; j < j1; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<i1; i++){
        for(j=0;j<j1;j++){
            b[j][i] = a[i][j];  //将a数组i行j列元素赋给b数组j行i列，实现行列互换  
        }
    }
    
    printf("将数组b元素以矩阵形式输出：\n");
    for ( i = 0; i < i1; i++)
    {
        for(j=0; j<j1; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
    
    
}
*/

/*
//打印出杨辉三角（要求打印出头10行）
#include<stdio.h>
int main(){
    int i,j,a[11][11];
    for(i=1; i<11; i++){  //首行、对角线处的数字都为1
        a[i][i] = 1;
        a[i][1] = 1;
    }
    for(i=3;i<11;i++){  //从第三行开始 每i行的第二位开始 j，都是上一行 num[i-1][j-1] + num[i-1][j] j<=i;
        for(j=2;j<=i-1;j++){ 
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }

    for(i=1;i<11;i++){
        for(j=1;j<=i;j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//任意输入一个三行三列的二维数组，求各元素之和
#include<stdio.h>
int main(){
    int i, j, num[3][3], sum=0;
    printf("请输入9个数字：\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d", &num[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d", num[i][j]);
            sum += num[i][j];
        }
        printf("\n");
    }

    printf("最终这个二维数组的每个元素之和为：%d。\n", sum);

    return 0;
}
*/

/*
//使用二维数组保存数据
#include<stdio.h>
int main(){
    int i, j, num[2][3];
    printf("请输入6个数字：\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            scanf("%d", &num[i][j]);
            printf("a[%d][%d]=%d\n", i,j,num[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%-4d", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/

//多维数组  二维数组是一维数组的延伸与拓展，因此多维数组也可以说是二维数组的延伸与拓展。 多维数组的定义和二维数组相同，只是下标更多，一般形式为：  数据类型 数组名[常量表达式1][常量表达式2][常量表达式3]...[常量表达式n]
//数组元素的位置是可以通过偏移量计算，所以对于三维数组a[m][n][p]来说，元素a[i][j][k]所在的地址是从a[0][0][0]算起到（i*n*p + j*p + k）个单位的地方。
//二维以上的数组在编写程序的过程中很少使用，主要是因为需要占用大量的存储空间。例如，四维基本整型数组 int a2[9][8][8][9] 需要占用 9*8*8*9*2 个即10368个字节的存储空间。


//字符数组 数组中的元素类型为字符型时称为字符数组。字符数组即为char型数组，是用以存放char型数据的数组容器。字符数组中的每一个元素可以存放一个字符。
/*
    字符数组的定义与其他数据类型的数组定义类似，一般形式如下：
        char 数组标识符[常量表达式];
    字符数组的初始化：
        逐个字符赋给数组中各元素：char ca[12]={'H','E','L','L','O',',','W','O','R','L','D'}; 
    注释：！！！在初始化字符数组的时候，每一个元素的字符都是使用单引号''表示的。再循环中，因为输出的类型是字符型，所以在printf中使用的是%c。通过循环变量i，ca[i]是对数组中每一个元素的引用。
    如果在定义字符数组时进行初始化，可以省略数组长度。
        char ca[] = {'H','E','L','L','O',',','W','O','R','L','D'};
    利用字符串给字符数组赋初值：
        char ca[] =  {"HELLO, WORLD!"};  or  char ca[] =  "HELLO, WORLD!";
    
    字符数组的结束标志：
        在C语言中，使用字符数组保存字符串，也就是使用一个一维数组保存字符串中的每一个字符。字符串总是以'\0'作为串的结束符。因此当把一个字符串存入一个数组时，也把结束符'\0'存入数组，并以此作为该字符串是否结束的标志。系统会自动在字符串的末尾为其添加'\0'作为结束符，不必手动添加。
    
    字符数组的输出：
        使用格式化符 %c 进行输出
        使用格式化符 %s 进行输出 char ca[] = "GoodDay！"; printf("%s", ca);
            注释：输出字符不包括结束符'\0'； 用%s格式输出字符串时，printf()函数中的输出项是字符数组名ca，而不是数组中的元素名ca[0]等； 如果数组长度大于字符串实际长度，也只输出直到'\0'为止。 如果一个字符数组中包含多个'\0'结束字符，则在遇到第一个'\0'时就结束。

    字符数组的输入：
        使用格式化符 %c 进行输入；
        使用格式化符 %s 进行输入。
            注释：使用scanf()函数通过格式化符 %s 进行输入时，输入的字符串不带有空格或者回车键，因为空格和回车键都会被认为是数据的分隔符，而不认为是字符串的一部分，不会作为数据保存。
*/

/*
//使用字符数组输出一个字符串
#include<stdio.h>
int main(){
    char ca[12]={'H','E','L','L','O',',','W','O','R','L','D'};
    int i;
    for(i=0; i<12; i++){
        printf("%c", ca[i]);  //在字符数组中，未赋值部分为空。
    }
    printf("\n");

    return 0;
}
*/

/*
//使用一个二维字符数组输出一个钻石形状
#include<stdio.h>
int main(){
    int iRow, iColumn;
    char cDiamond[][5] = {
                          {' ',' ','*'},
                          {' ','*',' ','*'},
                          {'*',' ',' ',' ','*'},
                          {' ','*',' ','*'},
                          {' ',' ','*'}
    };

    for(iRow=0;iRow<5;iRow++){
        for(iColumn=0;iColumn<5;iColumn++){
            printf("%c", cDiamond[iRow][iColumn]);
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//使用两种方式输出字符串
#include<stdio.h>
int main(){
    int i;
    char ca[50] = "四川省雅安市四川农业大学";
    for(i=0;i<50;i++){
        printf("%c", ca[i]);
        if( ca[i] == '\0'){
            break;
        }
    }
    printf("\n%s\n", ca);

    return 0;
}
*/

/*
//使用格式符 %s 进行输入
#include<stdio.h>
int main(){
    char s[25];
    printf("请输入字符串：\n");
    scanf("%s", &s);
    printf("%s\n", s);

    return 0;
}
*/

/*
//输出完整带有空格的字符串
#include<stdio.h>
int main(){
    char s1[50], s2[50];
    printf("请输入字符串：\n");
    scanf("%s%s", &s1, &s2);
    printf("%s %s\n", s1,s2);

    return 0;
}
*/

//字符数组的应用

/*
//字符升序排列 将已按升序排好的字符串a和字符串b按升序归并到字符串c中并输出。 ！！！挺有意思的一道算法题。因为是升序的，所以再通过归并排序就已经方便许多。
#include<stdio.h>
#include<string.h>
int main(){
    char a[100], b[100], c[200], *p;
    int i=0, j=0, k=0;
    printf("请输入字符串a：\n");
    scanf("%s", a);
    printf("请输入字符串b：\n");
    scanf("%s", b);
    while (a[i] != '\0' && b[j] != '\0')
    {
        if(a[i]<b[j]){
            c[k] = a[i];
            i++;
        }
        else{
            c[k] = b[j];
            j++;
        }
        k++;
    }
    c[k] = '\0';
    if(a[i] == '\0'){   //判断a中字符是否全部复制到c中。
        p = b+j;   // *p指向数组b中未复制到c的位置。
    }
    else{  
        p = a + i;  // *p指向数组a中未复制到c的位置。
    }
    strcat(c,p);  //将p指向位置开始的字符串连接到c中。

    puts(c);

    return 0;
    
}
*/
/*
//计算字符串中有多少个单词
#include<stdio.h>
int main(){
    char a[500], cSpace;
    int num = 1;
    gets(a);
    for(int index=0;a[index] != '\0';index++)
    {
        cSpace = a[index];
        if(cSpace == ' '){
            num += 1;
        }  
    }

    printf("%d\n", num);

    return 0;
}
*/

/*
//不使用strcpy()函数实现字符串复制功能
#include<stdio.h>
int main(){
    char words[100];
    printf("请输入字符串1：\n");
    gets(words);
    printf("字符串2：\n");
    puts(words);
}
*/

//字符串处理函数 转换字符大小、求字符串长度等  C语言标准库专门为其提供了一系列处理函数，可以实现字符串的输入、输出、复制、连接、比较、转换和获取字符串的长度等功能
//在编写程序的过程中，合理有效地使用这些字符串函数可以提高编程效率，同时还可以提高程序性能！

/*
字符串复制 
    在字符串处理函数中包含strcpy()函数，该函数将复制特定时间长度的字符串到另一个字符串中  语法格式：
        strcpy(目的字符数组名, 源字符数组名)
    功能：把源字符数组中的字符串复制到目的字符数组中，字符串结束标志'\0'也一同复制
    注意事项：
        1、不能用赋值语句将一个字符串常量或字符数组直接赋给一个字符数组。
        2、要求目的字符数组应有足够的长度，否则不能全部装入所复制的字符串，也就是说目的字符数组的长度一定不能比源字符数组的长度短。
        3、”目的字符数组“必须写成数组名形式，而”源字符数组“可以是字符数组名，也可以是一个字符串常量，这时相当于把一个字符串赋予一个字符数组。
        在使用puts()函数和gets()函数时，每次只能输入或输出一个字符串，不能用逗号分隔符进行多个字符串的输入或输出。
*/

/*
//字符串复制
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("请输入目的字符串：\n");
    gets(str1);
    printf("输入源字符串：\n");
    gets(str2);
    
    printf("输出目的字符串：\n");
    puts(str1);
    printf("输出源字符串：\n");
    puts(str2);

    strcpy(str1, str2);  //调用strcpy()函数实现字符串复制
    printf("调用strcpy函数进行字符串复制：\n");
    printf("复制字符串后的目的字符串：\n");
    puts(str1);

    return 0;
}
*/

/*
    字符串连接：
        字符串连接就是将一个字符串连接到另一个字符串的末尾，使其组合成一个新的字符串。 在字符串处理函数中，strcat()函数具有字符串连接功能
        语法格式：
            strcat(目的字符数组名， 源字符数组名)
        功能：把源字符数组中的字符串连接到目的字符数组中字符串的后面，并删去目的字符数组中原有的串结束标志'\0'。因此，目的字符数组必须拥有足够大的长度，以免发生因不能装下连接源字符数组后的新字符串而产生的错误。

*/

/*
//字符串连接
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("输入目的字符串：\n");
    gets(str1);
    printf("输入源字符串：\n");
    gets(str2);
    
    printf("输出目的字符串：\n");
    puts(str1);
    printf("输出源字符串：\n");
    puts(str2);
    
    strcat(str1, str2);
    printf("调用strcat函数进行字符串连接：\n");
    printf("字符串连接之后的目的字符串：\n");
    puts(str1);

    return 0;
}
*/

/*
    字符串比较： 字符串比较需要使用具有在字符串间进行比较功能的函数 strcmp()函数。其语法格式如下：
        strcmp(字符数组名1，字符数组名2)
    功能：字符串比较就是将一个字符串与另一个字符串从首字母开始，按照ASCII码的顺序进行逐个比较，知道两个字符串的ASCII顺序不相等或者遇到结束标识\0时结束，并由函数返回值返回比较结果。
    返回值如下：
        1、字符串1 = 字符串2，返回值为0。
        2、字符串1 > 字符串2，返回值为一正数。
        3、字符串1 < 字符串2，返回值为一负数。
    当两个字符串进行比较时，若出现不同字符的比较结果作为整个比较的结果。
*/

/*
//字符串比较
#include<stdio.h>
#include<string.h>
int main(){
    char yhm[20] = {"lmy"};
    char mima[20] = {"123"};
    char yhm1[20], mima1[20];
    int i=0;
    while (i<3)
    {
        printf("请输入用户名：\n");
        gets(yhm1);
        printf("请输入密码：\n");
        gets(mima1);
        if(strcmp(yhm, yhm1)){
            printf("用户名输入错误！\n");
            i++;
            continue;
        }
        else if(strcmp(mima, mima1))
        {
            printf("密码输入错误！\n");
            i++;
            continue;
        }
        else
        {
            printf("欢迎使用！\n");
            break;
        }           
    }
    if(i==3)
    {
            printf("输入错误次数过多，停止登录！\n");
    }
    return 0;

    
}
*/

/*
    字符串大小转换 使用strupr()函数【将字符串中的小写字母转换为大写字母】和strlwr()函数【将字符串中的大写字母转换为小写字母】


//字符串大写小转换
#include<stdio.h>
#include<string.h>
int main(){
    char text[20], change[20];
    int num;
    int i=0;
    while (1)
    {
        printf("输入转换大小写方式(1表示大写，2表示小写，0表示退出)：\n");
        scanf("%d", &num);
        if(num == 1){
            printf("输入一个字符串：\n");
            scanf("%s", text);
            strcpy(change, text);
            strupr(change);
            printf("转换成大写字母的字符串为：\n%s\n", change);

        }
        else if(num == 2){
            printf("输入一个字符串：\n");
            scanf("%s", text);
            strcpy(change, text);
            strlwr(change);
            printf("转换成小写字母的字符串为：\n%s\n", change);

        }else if(num == 0)
        {
            break;
        }
        
    }

    return 0;
    
}
*/

//获得字符串长度
/*
    在使用字符串时，有时需要动态获得字符串的长度。虽然通过循环来判断字符串结束标志‘\0’也能获得字符串的长度，但是实现起来相对繁琐。这时，可以使用strlen()函数来计算字符串的长度。
    strlen(字符串数组)
    功能：计算字符串的实际长度（不包含字符串结束标志'\0'），函数返回值为字符串的实际长度。

*/
/*
//获得字符串长度
#include<stdio.h>
#include<string.h>
int main(){
    char c1[50], c2[50];
    int num;
    printf("输入一个字符串：\n");
    scanf("%s", c1);
    num = strlen(c1);
    printf("字符串的长度为：%d\n", num);

    printf("再输入一个字符串：\n");
    scanf("%s", c2);
    num = strlen(c2);
    printf("字符串的长度为：%d\n", num);
    
    strcat(c1, c2);
    printf("将两个字符串进行拼接：\n%s\n", c1);
    num = strlen(c1);
    printf("连接后的字符串长度为：%d\n", num);

    return 0;
}
*/

//熟练应用数组  纸上得来终觉浅，绝知此事要躬行。只有做大量的练习，才能够熟练地掌握编程的知识点和要领。下面通过两个数组的使用实例，来巩固所学的知识。
//实现字符匹配 从键盘上输入一字符串，再输入要查找的字符，在屏幕上输出字符在字符串中的位置，并将从该字符串的余下字符串内容全部输出。
//定义两个字符数组，分别为源字符数组 和 目标字符数组，然后在循环遍历源字符数组的同时，将读取的字符从目标字符数组的末尾开始向前插入
/*
#include<stdio.h>
#include<string.h>
int main(){
    char string[50];
    char *str, ch;
    
    printf("请输入字符串：\n");
    gets(string);  //输入字符串到数组str中

    printf("请输入想要进行匹配的字符：\n");
    scanf("%c", &ch);
    str = strchr(string, ch);
    if(str){
        printf("字符%c在字符串中位置是：%ld\n", ch, str-string);
        printf("输出从字符%c后的字符串为：%s\n", ch, str);
    }
    else
    {
        printf("没有找到跟字符匹配的字符串！\n");
    }

    return 0;
    
}
*/


//反转输出字符串 字符串操作在应用程序中经常会使用，如链接两个字符串、查找字符串等。实现一个实现反转字符串的功能，如 mrsoft 其反转的结果为 tfosrm  。
/*
#include<stdio.h>
int main(){
    int i;
    char String[7] = {"mrsoft"};  //定义并初始化源字符串
    char Reverse[7] = {0};  //定义并初始化目标字符串
    int size;
    size = sizeof(String);  //计算源字符串的长度
    //printf("%d\n", size);  在sizeof函数中，会输出字符串的结束字符 "\0", 所以这里输出的长度为7
    for(i=0; i<size; i++){
        Reverse[size-i-2] = String[i];  //这里其实就是首尾一样对应 size - i - 2  ==  (size) - 1  每次循环
    }

    printf("输出源字符串：%s\n", String);
    printf("输出目标字符串：%s\n", Reverse);

    return 0;
}
*/

//数组类型是构造类型的一种，数组中的每一个元素都属于同一种类型。在本章中，首先介绍了有关一维数组、二维数组、多维数组及字符数组的定义和引用。接着通过实例介绍了C语言标准库中常用的字符串处理函数的使用。
/*
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    int inputChar[10];  //定义输入整数数组
    int reverseChar[10];  //定义逆序存放数组
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &inputChar[i]);  //输入整数
        reverseChar[4-i] = inputChar[i];  //将正序整数逆序存进逆序数组中。
    }
    
    printf("array a:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", inputChar[i]);
    }
    printf("\n");

    printf("array b:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", reverseChar[i]);
    }
    printf("\n");

    return 0; 
}
*/

//相邻元素之和 从键盘任意输入10个整型数据存到数组a中，编程求出a中响铃元素之和，并将这些和存放到数组b中，按每行3个元素的形式输出。
/*
#include<stdio.h>
int main(){
    int i;
    int aNum[10];  //存放十个整型数据。
    int bNum[10];  //存放这十个整型数据的相邻元素之和。

    for ( i = 0; i < 10; i++)  //循环十次，输入整数型数据
    {
        if(i == 0){
            scanf("%d", &aNum[i]);  //输入第一个整型数据
        }
        else  //当不是输入第一个整型数据，将此时的整数与上一个输入整数求和，赋值给数组b，且当是三的倍数次赋值给整型数组bNum时，依次输出三个整型数组bNum中的数值。
        {
            scanf("%d", &aNum[i]);
            bNum[i-1] = aNum[i-1] + aNum[i];
            if(i % 3 == 0){
                printf("%d %d %d\n", bNum[i-3], bNum[i-2], bNum[i-1]);
            }
        }     
    }
    
    return 0;
}
*/

/*
//使用数组统计学生成绩 输入学生的学号及语文、数学、英语成绩，输出学生各科成绩信息及平均成绩。 
#include<stdio.h>
int main(){
    int studentId[100], chiGrades[100], mathGrades[100], engGrades[100]; //定义整型数组存放学生学号、各科成绩
    float aveGrades[100]; //定义实型数组，存放学生的各科平均成绩
    int i; //输入的学生个数

    printf("请输入你要输入成绩的学生个数：\n");
    scanf("%d", &i);
    
    printf("请输入学生ID以及各科成绩：\n");
    printf("\t学生ID\t语文\t数学\t英语\t\n");
    for (int num = 0; num < i; num++)
    {
        printf("No.%d > ", num+1);
        scanf("%d %d %d %d", &studentId[num], &chiGrades[num], &mathGrades[num], &engGrades[num]);
        aveGrades[num] = ( chiGrades[num] + mathGrades[num] + engGrades[num] ) / 3.0;  //进行浮点数运算，默认要有位数为浮点数，否则用 / 进行整除运算， 会对结果取整
    }
    
    printf("  学生学号\t语文\t数学\t英语\t平均成绩\n");
    for (int num = 0; num < i; num++){
        printf("\t%d\t%d\t%d\t%d\t%.2f\n", studentId[num], chiGrades[num], mathGrades[num], engGrades[num], aveGrades[num]);
    }
    
    return 0;
}
*/

//！！！ 函数编程基础 ！！！
/*
    在编写较大程序时，要想将实现的内容全部放到主函数中是不可取的。
    因为这样的话，不仅仅程序复杂格式不清晰，而且实现功能也不明显，非常不便于阅读。
    虽然C语言只能有一个主函数，但是却可以由一个或者多个函数组成。
    子程序的迪是由函数完成的，利用函数实现模块化设计，可以使设计变得简单直观，大大增加程序的可读性和维护性。

    目标：函数的概念、 函数的定义、 函数的各组成部分、 将函数应用于程序中，将程序分成模块。
*/

/*
    从语法方面来说，函数(function)是用于完成特定任务的一段独立的代码单元，是C语言中最重要的概念之一，所以有时也会把C语言成为函数式语言。
    从编程思想方面来说，函数是组织、整理程序设计思路并使之条理化的一种技术手段，而且是一种最主要的技术手段。这种编程思想就是所谓的————结构化程序设计思想。
    一个完整的C程序是通过函数之间互相调用实现的，因此读者要仔细学习本章内容。通过对函数模块的调用，可以实现相应的功能。
    在进行程序设计时，会将一些常用的功能模块编写成函数，放在函数库中供公共使用。有些函数是按照ANSIC的要求随C语言编译器提供的，这种函数称为库函数，如printf()函数、scanf()函数等。
    每个C程序的入口和出口都是位于main()函数之中。编写程序时，并不是将所有的内容都放在主函数main()中。为了方便规划、组织、编写和调试，一般的做法是将一个程序划分为若干个程序模块，每一个程序模块都完成一部分功能。这样不同的程序可以由不同的人来完成，从而提高软件开发的效率。
    也就是说，主函数可以调用其他函数，其他函数也可以相互调用。
    在main()函数中调用其他的函数，这些函数执行完毕后又返回到main()函数中。通常把这些被调用的函数称作下层函数。
    函数调用发生时，立即执行被调用的函数，而调用者则进入等待的状态，直到被调用函数执行完毕。函数可以有参数和返回值。

    C语言中所有函数都是平行的，即在定义函数时是相互独立的，在一个函数中不能嵌套定义另一个函数，函数间可以相互调用，但main()函数是不能被调用的。

    编写程序就和盖楼是一个道理，主函数就像工程师一样，其功能是控制每一步程序的执行，其中定义的其他函数就像盖楼中的每一道步骤，其完成自己特殊的功能。
    
    PS：在程序中，很多时候有许多重复的代码，它们的逻辑、功能完全一样，只是输入的数据不同而已。于是这个时候函数出现了。有相同的逻辑，实现某一个功能，只是参数不同，从而返回的数据不同罢了。
*/

//在主函数中调用其他函数  关于函数调用概念的具体展示
/*
#include<stdio.h>
void Move();  //声明搬运函数
void Build(); //声明建盖函数
void Paint(); //声明粉刷函数

int main(){
    Move();  //执行搬运函数
    Build(); //执行建盖函数
    Paint(); //执行粉刷函数

    return 0;  //程序结束 
}
//执行搬运功能
void Move(){
    printf("------------------------------------\n");
    printf("************执行搬运功能**************\n");
    printf("------------------------------------\n");
}
//执行建盖功能
void Build(){
    printf("------------------------------------\n");
    printf("************执行建盖功能**************\n");
    printf("------------------------------------\n");
}
//执行粉刷功能
void Paint(){
    printf("------------------------------------\n");
    printf("************执行粉刷功能**************\n");
    printf("------------------------------------\n");
}
*/

//一个源文件由一个或者多个函数组成。一个源程序文件是一个编译单位，即以源程序为单位进行编译，而不是以函数为单位进行编译。
//库函数由C系统提供，用户无须定义，在调用函数之前也不必在程序中做类型说明，只需在程序前包含有该函数原型的头文件即可在程序中直接调用。例如上面程序中药使用在控制台显示信息的printf()函数，之前应在程序开始部分包含stdio.h头文件，又如使用其他字符串操作函数strlen()、strcmp()等，也应在程序开始部分包含string.h。
//用户自定义函数，就是用户自己编写的用来实现特定功能的函数，例如上面程序中的Move()函数、Build()函数和Paint()函数都是自定义函数。
//在这个程序中，要使用printf()函数首先要包含stdio.h头文件，之后声明3个自定义的函数。之后在主函数main()中调用这3个函数，在主函数main()中调用这3个函数，在主函数main()外可以看到这3个函数的定义。
/*
    不同角度对函数进行分类：
        1、从函数定义的角度对函数分类：
            按照函数定义可将函数分为函数库和自定义函数。。
        2、从函数结果的角度对函数分类
            按照函数结果可将函数分为有返回值函数和无返回值函数两种。
            ① 有返回值函数：函数执行完需要返回一个值，该返回值也称为函数的值。
            ② 无返回值函数：函数只是执行它的任务，执行完后不返回任何值。由于函数无需返回值，因此用户在定义此类函数时，可指定它的返回为”空类型“，空类型的说明为void。
        3、从函数的数据传递角度对函数分类
            按照函数的数据传递可将函数分为有参函数和无参函数。
                ① 有参函数：也称为带参数函数，即主调函数和被调函数之间有数据的传递。
                ② 无参函数：主调函数和被调函数之间不进行参数传递。无参函数一般用来执行指定的一组操作。
    
    函数定义（function definition）：是指在代码中具体写出函数完成任务的步骤和方法。在前面章节中写的main()函数，其实就是main()函数的定义。其他函数的定义和main()函数的定义过程基本是一样的，因为在C语言中所有函数的结构都是一样的。
    在程序中编写函数时，函数的定义是让编译器知道函数的功能。函数一般包括用户自己定义的函数和系统提供的标准函数两种。如果是系统提供的标准函数，那么不需要进行定义就可以使用，如果是用户自己定义的函数，那么，那么必须遵守”先定义，后使用“的原则。

    函数定义的的形式：
        对于C语言的库函数来说，在编写程序时是可以直接调用的，如printf()输出函数。而自定义函数，则必须由用户对其进行定义，在其函数的定义中完成函数特定的功能，这样的才能被其他函数所调用。
        一个函数可以分为两个部分，即函数头和函数体，其语法格式：
            int AddTwoNumber(int iNum1, int iNum2){         //函数头部分
                //函数体部分，实现函数的功能
                int result;                                 //定义整型变量
                result = iNum1 + iNum2;                     //进行加法操作
                return result;                              //返回体操作结果，结束。

            }
        
            函数返回值的类型名 函数名(形式参数列表)  ————>函数头
            {
                声明部分
                语句部分            ——————>函数体
                return 表达式
            }
        
        所有的C程序都必须有一个main()函数。该函数已经由系统声明过了，在程序中只需要定义即可。
        main()函数的返回值为整型，并可以有两个参数。这两个参数一个是整数，一个是指向字符数组的指针。虽然在调用时有参数传递给main()函数，但是在定义main()函数时可以不带任何参数，在前面的所有实例中都可以看到main()函数没有带任何参数。但除了main()函数外，其他函数在定义和调用时，参数都必须是匹配的。
        系统中从来不会调用main()函数，系统的启动过程在开始运行程序时调用main()函数。当main()函数结束返回时，系统的结束过程将接受这个返回值。至于启动和结束的过程，程序员不必关心，编译器在编译和链接时会自动提供。
        PS：在一个函数的函数体内，可以调用已定义的函数，但是却不能再函数体内再定义另外一个函数。也就是说，函数定义是不能够嵌套定义的，包括在主函数main()的函数体内也是不允许的。

        C语言提供了极为丰富的库函数，这些库函数又可从功能角度进行以下分类：
            1、I/O函数：用于完成输入/输出功能。
            2、数学函数：用于数学计算。
            3、时间转换和操作函数：用于日期、时间的转换操作。
            4、字符屏幕和图形功能函数：用于字符屏幕管理和各种图形绘制功能。
            5、字符串函数：用于字符串操作和处理。
            6、目录路径函数：用于文件目录和路径操作、
            7、动态地址函数：用于从自由内存区中分配所需地址空间。
            8、接口函数：用于与操作系统最能层连接。
            9、内存函数：用于内存管理、读取等操作。
            10、过程控制函数：用于控制程序执行、终止等。
            11、其他函数：这些函数不能简单地归属某一类，但这些函数都有各自的功能。

    函数的声明是让编译器知道函数的名称、参数返回值类型等信息，函数的定义是让编译器知道函数的功能。PS：在声明的最后要有分号” ；“作为语句的结尾。
*/

/*
//函数的定义与声明
#include<stdio.h>
//函数的声明
void ShowNumber(int iNumber);
int main(){
    int iShowNumber;  //定义整型变量
    printf("你想要显示什么数字？\n");  //输出提示信息
    scanf("%d", &iShowNumber);  //输入整数
    ShowNumber(iShowNumber); //调用函数

    return 0;
}
//函数的定义
void ShowNumber(int iNumber){
    printf("你想要显示的数字是：\n%d\n", iNumber);  //输出整数
}
*/

//如果将函数的定义放在调用函数之前，那么就不需要进行函数的声明。此时函数的定义就包含了函数的声明。
//定义和声明的区别： 1、int a; --> 定义 2、extern int i;  -->  声明    定义：是在编辑器内创建一个对象，为这个对象分配一块内存，，并且给对象取一个名字，取得名字就是我们常说的变量名或者对象名。  声明：告诉编译器，这个名字以及分配到一块内存中了，并且这个名字现在归比声明所有，别的地方不允许再用这个名字。
//定义和声明最大的区别是：定义创建了对象，并给对象分配内存；声明没有为对象分配内存、。

/*
//输出两个数中的最大值
#include<stdio.h>
int getMax(int num1, int num2);
int main(){
    int number1, number2, res;  
    printf("请输入你想要比较的两个整数：\n");
    scanf("%d %d", &number1, &number2);

    res = getMax(number1, number2); //调用比较两个数的函数,返回较大的那一个
    printf("%d\n", res);

    return 0;
}
//返回两个数中较大的那一个
int getMax(num1, num2){
    if(num1 > num2){
        return num1;
    }
    else
    {
        return num2;
    }
    
}
*/
/*
//判断素数 编写一个判断素数的函数，实现输入一个整数，使用判断素数的函数进行判断，然后输出是否是素数的信息。
#include<stdio.h>
#include<math.h>
int sushu(int num);
int main(){
    int number, res;
    printf("请输入你要判断是否为素数的整数：\n");
    scanf("%d", &number);

    res = sushu(number); //判断是否为素数，是返回1， 否返回0
    if(res == 1){
        printf("%d是素数。\n", number);
    }
    else
    {
        printf("%d不是素数。\n", number);
    }
    
    return 0;
}
int sushu(int num){
    if(num == 2 ){
        return 1;
    }
    else if(num == 1){
        return 0;
    }
    else
    {
        int paduan = sqrt(num) + 1;
        for (int i = 2; i < paduan; i++)
        {
            if(num % i == 0){
                return 0;
            }
        }
        return 1; 
    }
}
*/

//返回语句的主要两个用途：1、返回语句能够立即从所在的函数退出，即返回到调用的程序中去。2、返回语句能够返回值。将函数值赋给调用的表达式中，当然有些函数也可以没有返回值，如返回值类型为void的函数就没有返回值。
//在C语言中，一个程序有且仅有一个主函数main()。程序的开始和结束都是在主函数main()中进行的，main()函数有时也被称为程序的入口。main()函数可以调用其他函数，但是其他函数不允许调用main()函数。

/*
//分数计算器程序 实现分数计算器程序，分别能够实现加、减、乘、除四种运算
#include<stdio.h>
int gys(int x, int y){
    //定义求最大公约数函数
    return y?gys(y,x%y):x;  //递归调用gys，利用条件语句返回最大公约数
}
int gbs(int x,int y){
    //定义求最小公倍数函数
    return x/gys(x,y)*y;
}
void yuefen(int fz, int fm){
    //定义约分函数
    int s = gys(fz, fm);
    fz /= s;
    fm /= s;
    printf("其运算结果为：%d/%d\n", fz,fm);
}
void add(int a, int b, int c, int d){
    //定义加法函数
    int u1, u2, v=gbs(b,d), fz1, fm1;
    u1 = v/b*a;
    u2 = v/d*c;
    fz1 = u1 + u2;
    yuefen(fz1, fm1);
}
void mul(int a, int b, int c, int d){
    //定义乘法函数
    int u1, u2;
    u1 = a*c;
    u2 = b*d;
    yuefen(u1, u2);
}
void sub(int a, int b, int c, int d){  //输入a、c是分子，b、d是分母
    //定义减法运算
    int u1, u2, v=gbs(b,d),fz1,fm1;
    u1 = v/b*a;
    u2 = v/d*c;
    fz1 = u1 - u2;
    fm1 = v;
    yuefen(fz1, fm1);
}
void div(int a, int b, int c, int d){
    //定义除法函数
    int u1, u2;
    u1 = a*d;
    u2 = b*c;
    yuefen(u1, u2);
}
int main(){
    char op;
    long int a,b,c,d;
    printf("请输入想要参加运算的表达式：\n");
    scanf("%ld %ld %c %ld %ld", &a, &b, &op, &c, &d);
    switch(op) //根据输入的符号选择不同函数的调用
    {
        case '+': add(a,b,c,d);break;  //调用加法函数
        case '*': mul(a,b,c,d);break;  //调用乘法函数
        case '-': add(a,b,c,d);break;  //调用减法函数
        case '/': add(a,b,c,d);break;  //调用除法函数
    }
    //这个代码是不成熟的，因为没有考虑分母是零的情况。
}
*/

/*
//计算函数值，该函数f(x)= 1、x+10 x>0 2、x+20 x<0 3、 x x=0。
#include<stdio.h>
int f(int n){
    if( n>0 ){
        n += 10;
    }
    else if( n<0 ){
        n += 20;
    }

    return n;
}
int main(){
    int n, m;
    printf("请输入数值：\n");
    scanf("%d", &n);
    m = f(n);
    printf("m=%d\n", m);

    return 0;
}
*/

//函数返回值的类型。既然函数有返回值，这个值当然应该属于某一种确定的类型，所以应当在定义函数时明确指出函数返回值的类型。
//如果函数值的类型和return 语句中表达式的值不一致，则以函数的返回值类型为准，即函数定义的返回值类型决定最终返回值的类型。数值型数据，可以自动进行类型转化。
/*
//返回值类型 与 return值类型
#include<stdio.h>
char ShowChar();  //函数声明
int main(){
    char cResult;
    cResult = ShowChar();
    printf("%c\n", cResult);

    return 0;
}
char ShowChar(){
    int iNumber;
    printf("请输入ASCII码：\n");
    scanf("%d", &iNumber);
    return iNumber;  //返回的结果是整型  与  声明的函数返回类型不同
}
*/

//通常形式参数简称为形参，实际参数简称为实参。
/*
//形式参数与实际参数的比喻实现
#include<stdio.h>
void DrinkMilk(char *cBottle);  //声明函数
int main(){
    char cPoke[] = "";  //定义字符数组变量
    printf("妈妈想给婴儿：");  //输出信息提示
    scanf("%s", &cPoke);  //输入字符串
    DrinkMilk(cPoke);  //将实际参数传递给形式参数

    return 0;
}
//喝牛奶的动作
void DrinkMilk(char *cBottle)  //cBottle为形式参数
{
    printf("婴儿喝%s\n", cBottle);  //输出提示，进行喝牛奶动作
    //某些编译器不识别中文，所以在编写程序时，尽量使用英文编写。
}
*/
//实参可以是常量、变量、表达式和参数等，但不论是什么类型的量，只要是实参，在函数进行调用时，这个类型量必须具有确定的值，以便把这些值送给形参，为了避免发生”类型不匹配“的错误，实参和形参的类型、数量、书写顺序等都必须保持一致。

/*
    将数组作为函数参数进行传递，不同于标准赋值调用的参数传递方法。
    当数组作为函数的实参时，只传递数组的地址，而不是将整个数组赋值到函数中去。！！！
    当用数组名作为实参调用函数时，指向该数组的第一个元素的指针就被传递到函数中。 ！！！
注：在C语言中没有任何下标的数组名是一个指向该数组第一个元素的指针，其中没有下标的数组名Shmily与指向第一个元素的指针 *Shmily 是相同的。
    而声明函数参数时必须要具有相同的类型，根据这一点，下面将对使用数组作为函数参数的各种情况进行详细的讲解。
*/

/*
//使用数组元素作为函数参数  求学生的平均身高
#include<stdio.h>
int main(){
    float average(float array[], int n);  //函数声明
    float height[100], aver;
    int i, n;
    printf("请输入学生的数量：\n");
    scanf("%d", &n); //输入学生数量
    printf("请输入学生们的身高：\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%f", &height[i]);  //逐个输入学生的身高
    }
    printf("\n");
    
    aver = average(height, n);  //调用average()函数求出平均身高
    printf("学生的平均身高为：%6.2f\n", aver);  //将平均身高输出

    return 0;
}
float average(float array[], int n){
    //自定义求平均身高函数
    int i;
    float aver, sum=0;
    for ( i = 0; i < n; i++)
    {
        sum +=  array[i];  //用for语句实现sum累加求和
    }

    aver = sum / n;  //总和除以人数求出平均数
    return aver;
}
*/

/*
//数组名作为函数参数  
#include<stdio.h>
void Evaluate(int iArraryNmae[10]);  //声明赋值函数
void Display(int iArraryName[10]);  //声明显示函数
int main(){
    int iArray[10];  //定义一个具有10个元素的整型数组
    Evaluate(iArray);  //调用函数进行赋值操作，将数组名作为参数
    Display(iArray);  //调用函数进行赋值操作，将数组名作为参数
    
    return 0;
}
//数组元素的显示
void Display(int iArraryName[10]){
    int i;  //定义整型变量
    for ( i = 0; i < 10; i++)
    {
        printf("会员的编号是：%d\n", iArraryName[i]);  //执行循环语句，在循环语句中执行输出操作
    }
}
//进行数组元素的赋值
void Evaluate(int iArraryName[10]){
    int i;  //定义整型变量
    for ( i = 0; i < 10; i++)
    {
        iArraryName[i] = i;  //执行循环语句，在循环语句中执行赋值操作
    }  
}
*/

//使用指针作为函数参数  PS:将函数参数声明为一个指针的方法也是C语言程序比较专业的写法
//当数组作为函数的实参时，只传递数组的地址，而不是将整个数组复制到函数中去。当用数组名作为实参调用函数时，指向该数组的第一个元素的指针就被传到函数中。

/*
//指针作为函数参数  对上一个程序进行修改，使之可以在新的情况下调用
#include<stdio.h>
void Evaluate(int *pPoint);  //声明函数，参数为可变长度数组
void Display(int *pPoint);  //声明函数，参数为可变长度数组
int main(){
    int iArray[10];  //定义一个具有10个元素的整型数组
    Evaluate(iArray);  //调用函数进行赋值操作，将数组名作为参数
    Display(iArray);  //调用函数进行赋值操作，将数组名作为参数
    
    return 0;
}
//数组元素的显示
void Display(int *pPoint) //定义函数，参数为可变长度数组
{
    int i;  //定义整型变量
    for ( i = 0; i < 10; i++)
    {
        printf("会员的编号是：%d\n", pPoint[i]);  //执行循环语句，在循环变量中执行输出操作
    }
}
//进行数组元素的赋值
void Evaluate(int *pPoint){  //定义函数，参数为可变长度数组
    int i;  //定义整型变量
    for ( i = 0; i < 10; i++)
    {
        pPoint[i] = i;  //执行循环语句，在循环语句中执行赋值操作
    }
}
//指针传递 与 数组名 传递 有什么区别呢？
*/

/*
    main()函数的参数 在运行程序时，有时需要将必要的的参数传递给主函数，主函数main()的形式参数如下：
        main(int argc, char *argv[]);
    两个特殊的内部形参 argc 和 argv 是用来接收命令行实参的，这是只有主函数main()才能具有的参数。
    ① argc参数：argc参数保存命令行的参数个数，是个整型变量，做个饭参数的值至少是1，以为你至少程序名是第一个实参。
    ② argv参数：argv参数是一个指向字符指针数组的指针，在这个数组里的每一个元素都指向命令行实参。所有命令行实参都是字符串，任何数字都必须由程序转换变成适当的格式。
*/
/*
//main()函数的参数使用
#include<stdio.h>
int main(int argc[],char *argv[]){
    printf("%s\n", argv[0]);  //输出程序的位置

    return 0;
    //为什么我运行这段代码会有错误信息？为什么会爆出这个错误？first parameter of 'main' (argument count) must be of type 'int'
} 
*/

//函数调用： 1、函数语句调用2、函数表达式调用 3、函数参数调用

/*
//函数语句调用 (把函数的调用作为一个语句就叫做函数语句调用。)通过调用函数完成显示一条信息的功能，进而观察函数语句调用的使用方式
#include<stdio.h>
void Display(){
    printf("恭喜你，未来的编程高手！\n");  //实现显示一条信息的功能
}
int main(){
    Display();  //函数语句调用
    
    return 0;
}
*/

//函数表达式调用 (函数出现在一个表达式中，这时要求函数返回一个确定的值，这个值将参加表达式的运算。)  本实例中，定义一个函数，函数的功能是进行加法计算。并在表达式中调用该函数，使得函数的返回值参加运算得到新的结果。
/*
#include<stdio.h>
int AddTwoNum(int iNum1, int iNum2);  //声明函数，函数进行加法计算
int main(){
    // int AddTwoNum(int iNum1, int iNum2);  //声明函数，函数进行加法计算  所以自定义函数只要在使用前声明，在哪里都是可以的。
    int iRresult;  //定义变量用来存储计算结果
    int iNum3 = 10;  //定义变量，赋值为10
    iRresult = iNum3 * AddTwoNum(3,5);  //在表达式中调用函数AddTwoNum()
    printf("计算结果是：%d\n", iRresult);  //将计算结果输出

    return 0;
}
int AddTwoNum(int iNum1, int iNum2){
    int iTempResult;  //定义整型变量
    iTempResult = iNum1 + iNum2;  //进行加法计算，并将结果赋值给iTempResult

    return iTempResult;
}
*/

//函数参数调用（函数调用作为一个函数的实参，将函数返回值作为实参传递到函数中进行使用，函数出现在表达式中，这时要求函数返回一个确定的值，这个值将参加表达式的运算）
/*
#include<stdio.h>
//声明函数，函数进行加法计算
int AddTwoNum(int iNum1, int iNum2);
int main(){
    int iResult;  //定义变量用来存储计算结果
    iResult = AddTwoNum(10, AddTwoNum(3,5));  //在参数中调用函数AddTwoNum()
    printf("计算结果是：%d\n", iResult);  //将计算结果输出

    return 0;
} 
int AddTwoNum(int iNum1, int iNum2){
    int iTempResult;  //定义整型变量
    iTempResult = iNum1 + iNum2;  //进行加法计算，并将结果赋值给iTempResult
    
    return iTempResult;  //返回计算结果
}
*/

//在C语言中，函数中定义函数是错误的。 但是C语言中可以进行嵌套调用函数，即可以再一个函数体内调用另外一个函数。
//函数的嵌套调用 
/* 
#include<stdio.h>
void CEO();  //声明函数
void Manager();
void AssistantManager();
void Clerk();
int main(){
    CEO();  //调用CEO()作用函数

    return 0;
}
void CEO(){
    //输出信息，表示调用CEO()函数进行相应的操作
    printf("CEO（首席执行官）的工作室命令经理\n");
    Manager();  //调用Manager()的作用函数
}
void Manager(){
    //输出信息，表示调用Manager()函数进行相应的操作
    printf("经理的工作是命令经理助理\n");
    AssistantManager();  //调用AssistantManager()的作用函数
}
void AssistantManager(){
    //输出信息，表示调用AssistantManager()函数进行相应的操作
    printf("经理助理的工作是命令职员\n");
    Clerk();  //调用Clerk()的作用函数
}
void Clerk(){
    //输出信息，表示调用Clerk()函数进行相应的操作
    printf("职员的工作室完成任务\n");
}
*/

//递归调用  又被称为自调用函数，C语言的函数都支持递归，也就是说，每个函数都可以直接或者间接的调用自己。所谓的直接调用，是指函数直接调用自身函数，所谓的间接调用，是指递归函数调用的下层函数再调用自己。
//递归之所以能实现，是因为函数的每个执行过程在栈中都有自己的形参和局部变量的副本，这些副本和该函数的其他执行过程不发生关系。
/*
//函数的递归调用  定义一个字符串数组，为其数组赋值为一系列的名称，再通过递归函数的使用，最后时限逆序显示排列的名单
#include<stdio.h>
void DisplayNames(char** cNameArray);  //声明函数
char* cNamees[] ={"Aaron", "Jim", "Charles", "Sam", "Ken", "end"};  //为字符串赋值 一个全局字符串数组
int main(){
    DisplayNames(cNamees);  //调用递归函数

    return 0;
}   
void DisplayNames(char** cNameArray){
    if(*cNameArray == "end" ){//判断结束标志
        return ;  //函数结束返回  
    }  
    else{
        DisplayNames(cNameArray+1);  //调用递归函数
        printf("%s\n", *cNameArray);  //输出字符串
    }
}
*/

//递归解决年龄问题 5>4 2岁； 4>3 2岁；  3>2  2岁； 2>1 2岁；  1  10岁； 要求输入第几个人，求出其对应年龄；
/*
#include<stdio.h>
int getAge(int num);
int main(){
    int numPeople, age;  //第几个人的年龄
    printf("请问你要知道第几个人的对应年龄：\n");
    scanf("%d", &numPeople);  //获取输入

    age = getAge(numPeople);  //传入获取第几个人年龄的参数， 将值返回给变量age
    printf("第%d的年龄是%d。\n", numPeople, age);  //输出结果

    return 0;
}
int getAge(int num){
    if(num == 1){
        return 10;
    }
    else
    {
        return 2 + getAge(num-1);
    }    
}
*/

/*
！！！
//解决分鱼问题 每人/5  -1  至少捕到了多少鱼 ==》  最后一个人，只拿到一条鱼即为最少
#include<stdio.h>
int AllFish(int n);
int main(){
    int panduan = 5;
    int res = AllFish(panduan);

    printf("%d\n", res);

    return 0;
}
int AllFish(int n){
    if(n == 1){
        static int i = 0;
        do
        {
        return (i+1);
            i ++;
        } while (i % 5 != 0);
    }
    else
    {
        int t;
        do
        {
            t = AllFish(n - 1);
        } while (t % 4 != 0);
        return (t / 4 * 5 + 1);
    }
    
}   
*/

//灵活运用函数 为了快速编写程序，编译系统都会提供一些库函数，不同的编译系统所提供的库函数可能不完全相同。其中函数名字可能相同但是实现的功能不同，也有可能实现同一功能但是函数的名字不同。
//ANSIC 标准提供的标准库函数包含了目前多数C编译系统所提供的库函数，下面就介绍了一些常用的库函数。

/*
数学函数
    abs()函数：求整数的绝对值  //在使用数学函数时，要在程序中包含头文件 math.h。
    lbs()函数：求长整数的绝对值。
    fabs()函数：返回浮点数的绝对值

三角函数：
    sin()函数：正弦函数。 double sin(double x);
    cos()函数：余弦函数。 double cos(double x);
    tan()函数：正切函数。 double tan(double x);

字符和字符串函数：
    isalpha()函数：检测字母(检测是否是字母而不是其他特殊字符)，如果参数(ch)是字母表中的字母(大写或小写)，则返回非0。//要包含头文件ctype.h  int isalpha( int ch );
    isdigit()函数：检测数字，如果参数是数字则函数返回非0值，否则返回0. int isdigit( int chh );
    isalnum()函数：检测字母或数字，如果参数时字母表中的一个字母或一个数字，则函数返回非0值，否则返回0。 int isalnum( int ch );

*/

/*
//数学库函数的使用
#include<stdio.h>
#include<math.h>
int main(){
    int iAbsoluteNumber;  //定义整数
    int iNumber = -12;  //定义整数，其赋值为-12
    long lResult;  //定义长整数
    long lNumber = -1234567890L;  //定义长整数，为其赋值为-1234567890
    double fFloatResult;  //定义浮点型
    double fNumber = -123.1;  //定义浮点数，为其赋值为-123.1

    iAbsoluteNumber = abs(iNumber);  //将iNumber的绝对值赋给iAbsoluteNumber变量
    lResult = labs(lNumber);  //将lNumber的绝对值赋给lResult变量
    fFloatResult = fabs(fNumber);  //将fNumber的绝对值赋给fFloatResult变量

    //输出原来的数字，然后将得到的绝对值输出
    printf("初始的值是：%d，它的绝对值为：%d\n", iNumber, iAbsoluteNumber);
    printf("初始的值是：%ld，它的绝对值为：%ld\n", lNumber, lResult);
    printf("初始的值是：%lf，它的绝对值为：%lf\n", fNumber, fFloatResult);

    return 0;
}
*/

/*
//使用三角函数
#include<stdio.h>
#include<math.h>
int main(){
    double fResultSin;  //用来保存正弦值
    double fResultCos;  //用来保存余弦值
    double fResultTan;  //用来保存正切值

    double fXsin;
    double fXcos;
    double fXtan;

    printf("您想要求出哪个函数的正弦值：");   //求出正弦值的过程：  赋值 -->  函数计算 --> 打印
    scanf("%lf", &fXsin);
    fResultSin = sin(fXsin);
    printf("%lf的正弦值为：%lf\n", fXsin, fResultSin);

    printf("您想要求出哪个数的余弦值：");  //求余弦值， 与求正弦值同理  ==>  对于这三个函数，可以整理为一个函数！！！
    scanf("%lf", &fXcos);
    fResultCos = cos(fXcos);
    printf("%lf的余弦值为：%lf\n", fXcos, fResultCos);

    printf("您想要求出哪个数的正切值：");  //求正切值， 与求正弦值同理
    scanf("%lf", &fXtan);
    fResultTan = cos(fXtan);
    printf("%lf的正切值为：%lf\n", fXtan, fResultTan);

    return 0;
}
*/

/*
//使用字符函数判断输入的字符 通过向控制台输入字符，利用if判断语句和字符函数判断输入的是哪一种类型的字符，然后根据字符的不同类型输出提示信息
#include<stdio.h>
#include<ctype.h>
void SwitchShow(char c);
int main(){
    char cCharPut;  //定义字符变量，用来接收输入的字符
    char cCharTemp;  //定义字符变量，用来接收回车
    printf("第一次输入字符：");  //消息提示
    scanf("%c", &cCharPut);  //输入字符
    SwitchShow(cCharPut);  //调用函数进行判断
    cCharTemp = getchar();  //接收回车
    
    printf("进行第二次输入字符：");  //消息提示
    scanf("%c", &cCharPut);  //输入字符
    SwitchShow(cCharPut);  //调用函数判断输入的字符
    cCharTemp = getchar();  //接收回车   输入字符时，每次输入完毕之后要按回车键进行确认，但是这样的话回车键就会变成下一次要输入的字符，所以在此调用getchar()将回车字符进行提取
    
    printf("进行第三次输入字符：");  //消息提示
    scanf("%c", &cCharPut);  //输入字符
    SwitchShow(cCharPut);  //调用函数判断输入的字符

    return 0; //程序结束
}
void SwitchShow(char cChar){
    if(isalpha(cChar)){
        //判断是否是字母
        printf("您输入的是字符表里的字母：%c\n", cChar);
    }
    if(isdigit(cChar)){
        //判断是否是数字
        printf("您输入的是阿拉伯数字：%c\n", cChar);
    }
    if(isalnum(cChar)){
        //判断是否是字母或数字
        printf("您输入的是包含字母和数字：%c\n", cChar);
    }
    else
    {
        //当字符既不是字母也不是数字时
        printf("您输入的既不是字母也不是数字：%c\n", cChar);
    }
    
}
*/

/*
    总结：
        C语言中有关函数的内容，内容包括函数的定义、函数的返回语句、函数参数、函数调用、函数应用。
*/

/*
//实战模拟
//1、小数分离 利用数学函数以下功能：从键盘输入一个小数，将其分解为整数部分和小数部分并将其显示在屏幕上。
#include<stdio.h>
#include<math.h>
int main(){
    float number;
    double f,i;
    printf("input the number: ");
    scanf("%f", &number);  //输入要分解的小数
    f = modf(number, &i);  //调用modf()函数进行分离， 小数作为返回值，  整数部分存放到由i所的变量中
    printf("%f=%f+%f\n", number, i, f);  //将分离后的结果按指定结果

    return 0;
}
*/
/*
//2、求任意数的n次幂  利用数学函数实现以下功能：分别从键盘输入底数及次幂，求出该次幂开始的连续5个结果，要求每次次幂加1。
#include<stdio.h>
#include<math.h>
int main(){
    float base, power;
    printf("please input the base: ");  //输出提示信息
    scanf("%f", &base);  //输入底数
    printf("please input the power: ");  //输出提示信息
    scanf("%f", &power);  //输入次幂

    for (int i = 0; i <= 5; i++)
    {
        printf("%.1f^%.1f is %.3f\n", base, power, pow(base,power));
        power+=1;
    }

    return 0;
    
}
*/

/*
//固定格式输出当前时间 编程实现将当前时间用以下形式输出： 星期  月  日  小时：分：秒 年
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    //调用time()函数获取当前时间信息，再调用localtime()函数分解时间，最后使用asctime()函数将时间以指定格式输出
    time_t Time;  //定义Time为time_t类型
    struct tm *t;  //定义指针 t 为tm结构类型
    Time = time(NULL);  //将time函数返回值存到Time中
    t = localtime(&Time);  //调用localtime()函数
    printf("Local time is: %s", asctime(t));  //调用asctime函数，以固定格式输出当前时间

    return 0;
}
*/


//！！！第十一章  指针！！！
//指针是C语言中广泛使用的一种数据类型，也是C语言中最为重要的组成部分之一。指针 --> 1、提高程序的编译效率和执行速度 2、可以通过指针实现动态的存储分配  3、使程序更加灵活，表示各种数据结构，编写高质量的程序
//1、指针概念 2、指针与数组之间的关系 3、指向指针的指针  4、掌握如何使用指针变量作函数参数  5、了解如何使用指针数组做main()函数的参数

/*
1 概述  
    使用指针可以访问变量、数组、字符串，甚至连我们之前学习过的函数也可以访问。熟练的掌握了指针的应用，就可以使程序变得简洁、紧凑和高效。
    地址与指针： 地址就是内存区中对每个字节号的编号，指针可以看做是内存的一个地址，多数情况下，这个地址是内存中另一个变量的位置。   
    PS：定义一个变量。在进行编译时就会给这个变量在内存中分配一个地址，通过访问这个地址可以找到这个变量，这个变量的地址就称为该变量的指针。
    注释：在C语言中，存取变量值的方法有两种。1、按变量地址存取变量值的方式称为”直接访问“方式；2、将变量地址存放带另一个变量中，先找到存放变量地址的另一个变量。铜鼓哦另一个变量找到变量的地址，这种方法称为”直接访问“。

    变量的地址是变量和指针二者之间连接的纽带，如果一个变量包含了另一个变量的地址，那么第一个变量就可以说成是指向第二个变量。
    所谓”指向“就是通过地址来实现的，在程序中用”*“符号表示”指向“。
    因为指针变量是指向一个变量的地址，所以将一个变量的地址赋给这个指针变量后，这个指针变量就”指向“了该变量。
        例如，将变量 i 的地址存放到指针变量p中，p 就指向i，其关系==》  p:&i  -->(*p)  -->   i: 5
    在程序代码中是通过变量名来对内存单元进行存取操作，但是代码经过编辑后已经将变量名转换为该变量在内存中的存放地址，对变量值的存取都是通过地址进行的。（在低级语言的汇编语言中，都是直接通过地址来访问内存单元，而在高级语言中使用变量名访问内存单元，但C语言作为高级语言却提供了通过地址来访问内存单元的方法。）

    由于通过地址能够访问指定的内存存储单元，可以说地址”指向“该内存单元。地址可以形象地称之为指针，意思是通过指针能找到内存单元。
    一个变量的地址称为该变量的指针。如果有一个变量专门用来存放另一个变量的地址，它就是指针变量。
    在C语言中，有专门用来存放内存单元地址的变量类型，就是指针类型。  ==》  定义一个指针变量、为一个指针变量赋值、如何引用指针变量
    1、指针变量的一般形式：若一个变量专门用来存放另一个变量的地址，则称它为”指针变量“。如果一个变量包含有指针（指针等同于一个变量的地址），则必须对它作说明。
    定义指针变量的一般形式如下：
        类型说明 *变量名
    * 表示这是一个指针变量，变量名即为定义的指针变量名，类型说明表示本指针变量所指向的变量的数据类型。
    2、指针变量的赋值：给指针变量赋值只能赋予地址，而不能赋予任何其他数据，否则将引起错误。C语言中提供了地址运算符 ”&“ 来表示变量的地址： &变量名；
        a、定义指针变量的同时就进行辅赋值： int a;  int *p = &a;
        b、先定义指针变量，之后再赋值：  int a;  int *p;  p = &a;  //注：如果在定义完指针变量后再赋值不要加 ”*“
    3、指针变量的引用：引用指针变量是对变量进行间接访问的一种形式。对指针遍历的引用形式如下： *指针变量  其意义是引用指针变量所指向的值。
    4、”&“ 和 ”*“ 运算符：
        运算符 & 是一个返回操作数地址的单目运算符，叫做取地址运算符 -->  p = &i; 就是将变量i的内存地址赋给p，这个地址是该变量在计算机内部的存储位置。
        运算符 * 是单目运算符，叫做指针运算符，作用是返回指定内存地址内的变量值，例如：  q = *p;  就是将变量 i 的值赋给变量q。
    5、”&*“ 和 ”*&“ 的区别：& 和 * 的运算符优先级别相同，按自右而左的方向结合。

*/

/*
//从键盘中输入两个数分别代表苹果和香蕉的价格，利用指针的方法加你个这两个数输出
#include<stdio.h>
int main(){
    int a,b;
    int *p1, *p2;  //声明两个指针变量
    printf("请输入苹果和橡胶的价格：\n");  
    scanf("%d %d", &a, &b);  //输入两个数
    p1 = &a;
    p2 = &b;  //将地址赋给指针变量

    printf("苹果的价格为：%d元/一斤\n", *p1);
    printf("香蕉的价格为：%d元/一斤\n", *p2);

    return 0;
}
*/

/*
//利用指针变量实现数据输入、输出
#include<stdio.h>
int main(){
    int *p, q;
    p = &q;
    printf("请输入香蕉价格：\n");
    scanf("%d", p);  //输入一个整型数据
    printf("香蕉的价格是：%d元/斤\n", q); 

    return 0;
}
*/

/*
//&* 的应用
#include<stdio.h>
int main(){
    long i;
    long *p;
    printf("请输入一个数值：\n");
    scanf("%ld", &i);
    p = &i;

    printf("输出&*p结果为：%ld\n", &*p);  //输出变量i的地址
    printf("输出&i结果为：%ld\n", &i);  //输出变量i的地址

    return 0;
}
*/

/*
// *& 应用
#include<stdio.h>
int main(){
    long i;
    long *p;
    printf("请输入一个数值：\n");
    scanf("%ld", &i);
    p = &i;
    
    printf("输出*&i的结果为：%ld\n", *&i);  //输出变量i的值
    printf("输出i的结果为：%ld\n", i);  //输出变量i的值
    printf("输出*&i的结果为：%ld\n", *p);  //使用指针形式输出i的值;

    return 0;
}
*/

//指针的自加自减运算：不同于普通变量的自加自减运算，也就是说它并不是简单的加1减1。

/*
//整型变量地址输出
#include<stdio.h>
int main(){
    int i;
    int *p;
    p = &i;  //将变量i的地址赋给指针变量 p
    printf("请输入一个数值：\n");
    scanf("%d", p);

    printf("输出p的结果为：%ld\n", p);
    p++;  //地址+1，这里的1并不代表一个字节
    printf("输出p++的结果为：%ld\n", p);  //在mac Air上，加上了4

    return 0;
}
*/
/*
//整型变量地址输出
#include<stdio.h>
int main(){
    short i;
    short *p;
    p = &i;
    printf("请输入一个数值：\n");
    scanf("%hd", &i);

    printf("输出指针变量p的结果：%ld\n", p);
    p++;
    printf("输出指针变量p++的结果：%ld\n", p);  //在mac Air上，加上了2 

    return 0;
}
*/

//第一个加上了4个字节的原因，因为基本整型变量i在内存中占4个字节，指针p是指向变量i的地址的，这里p++不是简单地在地址上加1，而是指向下一个存放基本整型数的地址。
//而第二个加上2个字节的原因，因为i被定义为了短整型，所以p++后p的值增加了2（2个字节）。
//!!! 指针都按照它所指向的数据类型的直接长度进行增或减。

/*
//使用指针实现整数排序  输入三个整数，将这三个整数按照由大到小的顺序输出，显示在屏幕上。
#include<stdio.h>
void swAmp(int *a, int *b);  //实现两个整数互换值
void exChange(int *a, int *b, int *c);  //实现两个整数比较大小，若a<=b, 则a、b互相交换值
int main(){
    int num1, num2, num3;
    int *p1=&num1, *p2=&num2, *p3=&num3; 
    scanf("%d %d %d", p1, p2, p3);

    exChange(p1, p2, p3);
    printf("%d %d %d\n", *p1, *p2, *p3);

    return 0;
}
void exChange(int *a, int *b, int *c){
    if(*a < *b){
        swAmp(a, b);
    }
    if(*a < *c){
        swAmp(a, c);
    }
    if(*b < *c){
        swAmp(b, c);
    }
}
void swAmp(int *a, int *b){
    int temp; //声明变量用于存储数据
    temp = *a;
    *a = *b;
    *b = temp;
}
//使用指针编写这个程序给我的最大感受就是，不再需要考虑全局或者局部变量的问题，对变量的值的修改直接作用于内存中。
*/

/*
//指向结构体变量的指针  通过结构体指针变量实现在窗体上显示学生信息。
#include<stdio.h>
struct student{
    int num;  //学生学号
    char name[20];  //学生姓名
    char sex;  //学生性别
    int age;  //学生年龄
    float score;  //学生成绩
};
int main(){
    struct student student1 = {1001, "李明洋", 'M', 20, 92.5};  //定义结构体变量
    struct student *p;  //定义指针变量指向结构体类型
    p = &student1;  //使用指针指向结构体变量
    printf("Number：%d\n", p->num);  //输出学生学号
    printf("Name：%s\n", p->name);  //输出学生姓名
    printf("Sex：%c\n", p->sex);  //输出学生性别
    printf("Age：%d\n", p->age);  //输出学年龄
    printf("Score：%f\n", p->score);  //输出学生成绩

    return 0;
}
//一个结构体变量的指针就是该变量所占据的内存段的起始地址。用一个指针变量指向一个结构体变量，此时该指针变量的值是结构体变量的起始地址。
*/

//数组与指针  系统需要提供一定数量连续的内存来存储数组中的各元素，内存都有地址，指针变量就是存放地址的变量，如果把数组的地址赋给指针变量，就可以通过指针变量来引用数组。
//一维数组与指针  当定义一个一维数组时，系统会在内存中为该数组分配一个存储空间，！！！其数组的名字就是数组在内存的首地址。

/*
//输出数组中的元素
#include<stdio.h>
int main(){
    int *p, *q, a[5], b[5], i;
    p = &a[0];
    q = b;  // &a[0] == a;
    printf("请输入数组a中的元素：\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("请输入数组b中的元素：\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("数组a中的元素为：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", *(p+i));
    }
    printf("\n");
    printf("数组b的元素为：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", *(q+i));
    }
    printf("\n");
    
    return 0;    
}

//a+n 表示数组元素的地址， *(a+n) 表示数组元素
*/

/*
//修改上述代码
#include<stdio.h>
int main(){
    int *p, *q, a[5], b[5], i;
    p = &a[0];
    q = b;  // &a[0] == a;
    printf("请输入数组a中的元素：\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("请输入数组b中的元素：\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("数组a中的元素为：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", *(a+i));
    }
    printf("\n");
    printf("数组b的元素为：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", *(b+i));
    }
    printf("\n");
    
    return 0;    
}

//表示指针移动可以使用 ++ 和  -- 这两个运算符
*/

/*
#include<stdio.h>
int main(){
    int *p, *q, a[5], b[5], i;
    p = &a[0];
    q = b;  // &a[0] == a;
    printf("请输入数组a中的元素：\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", p++);
    }
    printf("请输入数组b中的元素：\n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", q++);
    }
    p = a; //将指针变量p和指针变量q重新指向数组a和数组b在内存中的起始位置。
    q = b;
    printf("数组a中的元素为：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", *p++);
    }
    printf("\n");
    printf("数组b的元素为：\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%5d", *q++);
    }
    printf("\n");
    
    return 0;    
}
*/

/*
//二维数组与指针 1、&a[0][0]即可以看做数组0行0列的首地址，同样还可以看作是二维数组的首地址。&a[m][n]就是第m行n列元素的地址。 2、a[0]+n，表示第0行第n个元素的地址。
#include<stdio.h>
int main(){
    int a[3][5], i, j;
    printf("请输入15个数值：\n");
    for ( i = 0; i < 3; i++)  //控制二维数组的行数
    {
        for ( j = 0; j < 5; j++)  //控制二维数组列数
        {
            scanf("%d", a[i] + j);  //给二维数组元素赋初值
        }
    }
    printf("数组中的排列为：\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%5d", *(a[i]+j));  //输出数组中元素
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//修改
#include<stdio.h>
int main(){
    int a[3][5], i, j;
    int *p = a[0];
    printf("请输入15个数值：\n");
    for ( i = 0; i < 3; i++)  //控制二维数组的行数
    {
        for ( j = 0; j < 5; j++)  //控制二维数组列数
        {
            scanf("%d", p++);  //给二维数组元素赋初值
        }
    }
    p = a[0];
    printf("数组中的排列为：\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%5d", *p++);  //输出数组中元素
        }
        printf("\n");
    }

    return 0;
}
*/

/*
//&a[0]是第0行的首地址，当然&a[n]就是第n行的首地址
//将一个3行5列的二维数组的第三行元素输出
#include<stdio.h>
int main(){
    int a[3][5], i, j, (*p)[5];
    p = &a[0];
    printf("请输入15个正整数：\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d", (*(p+i)+j));  //为二维数组中的元素赋值
        }
    }
    p = &a[2];  //  *p为第一个元素的地址
    printf("第三行中的元素为：\n");  
    for ( j = 0; j < 5; j++)
    {
        printf("%5d", *((*p)+j));  //输出二维数组中的元素
    }
    printf("\n");
    
    return 0;
}
*/

// a + n 表示第n行的首地址  *(*(a+n)+m)表示第n行第m列元素  *(a[n]+m)  ==>  利用指针引用二维数组关键要记住 *(a+i) 与 a[i] 是等价的

//字符串与指针 访问一个字符串可以通过两种方式， 第一种方式是前面讲过的使用字符数组来存放一个字符串，从而实现对字符串的操作，另一种方式就是下面介绍的使用字符指针指向一个字符串，此时不定义数组！！！

/*
//字符型指针应用
#include<stdio.h>
int main(){ 
    char *string = "\n见之而不知，虽识不妄：\n知之而不行，随敦必困。\n";  //这里并不是把这些字符存放到string中，只是把这个字符串中第一个字符的地址赋给指针变量string。
    printf("%s\n", string);  //输出字符串
    return 0;
}
*/

/*
//声明两个字符数组，将str1的字符复制到str2中
#include<stdio.h>
int main(){
    char str1[] = "合抱之木，生于毫末。", str2[30], *p1, *p2;
    p1 = str1;
    p2 = str2;
    //puts(str2);
    while (*p1 != '\0')
    {
        *p2 = *p1;
        p1++;  //指针移动
        p2++;
    }
    *p2 = '\0';  //在字符串的末尾加结束符
    printf("现在第二个字符串的内容为：\n");
    puts(str2);

    return 0;
}
*/

//字符串数组  字符串数组有别于字符数组，字符数组是一个一维数组，而字符串数组是以字符串作为数组元素的数组，其实可以看做是二维字符数组。
/*
    一个简单的字符串数组
    char country[5][20] = {
        "China",
        "Japan",
        "Russia",
        "Germany",
        "Switzerland"
    }
    通过观察上面定义的字符串数组会发现，像China等字符串长度仅为5，加上字符串结束符也仅为6，而在内存中却要给它们分配一个20字节的空间，这样会造成资源浪费。
    为了解决和这个问题，可以使用指针数组，每个指针指向所需要的字符变量。这种方法虽然需要在数组中保存字符指针，同样也占用空间，但是要远少于字符串数组需要的空间。
    指针数组： 一个数组，其元素均为指针类型数据，即称为指针数组，也就是说指针数组中的每一个元素都相当于一个指针变量。一维指针数组的定义如下：
        类型名 数组名[数组长度]
    */

/*
//输出12个月份
#include<stdio.h>
int main(){
    int i;
    char *month[]={
           "January(一月)",
           "February(二月)",
           "March(三月)",
           "April(四月)",
           "May(五月)",
           "June(六月)",
           "July(七月)",
           "August(八月)",
           "September(九月)",
           "October(十月)",
           "November(十一月)",
           "December(十二月)"
    };  //给指针数组中的元素赋初值
    for ( i = 0; i < 12; i++)
    {
        printf("%s\n", month[i]); //输出指针数组中的各个元素
    }

    return 0;
}
*/

/*
//使用指针输出数组元素 输入10个数值，可以看到输出的数组元素值
#include<stdio.h>
int main(){
    int numAll[10], *p;
    p = numAll;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", p);
        p++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numAll[i]);
    }
    
    return 0;
}
*/

/*
//使用指针查找数列中最大值和最小值
#include<stdio.h>
void max_min(int a[], int n, int *max, int *min);
int main(){
    int num[100], maxNum, minNum;  
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }
    max_min(num, 10, &maxNum, &minNum);
    printf("\n数列中最大值为：%d\n", maxNum);
    printf("数列中最小值为：%d\n", minNum);

    return 0;
}
void max_min(int a[], int n, int *max, int *min){
    int *p;
    *max  = *min = *a;
    for ( p = a+1; p < a+n; p++)
    {
        if(*p > *max){
            *max = *p;
        }
        else if(*p < *min){
            *min = *p;
        }
    }
    
}
*/

//指向指针的指针   一个指针变量可以指向整型变量、实型变量、字符型变量，当然也可以指向指针类型变量。当指针变量用于指向指针类型变量时，则称之为指针的指针变量。 定义如下： 类型标识符 **指针变量名;
//其含义为定义一个指针变量p，它指向另一个指针变量，该指针变量又指向一个基本整型变量。  上述定义相当于： int *(*p);

/*
//使用指向指针的指针输出12个月份
#include<stdio.h>
int main(){
    int i;
    char **p;
    char *month[]={
           "January(一月)",
           "February(二月)",
           "March(三月)",
           "April(四月)",
           "May(五月)",
           "June(六月)",
           "July(七月)",
           "August(八月)",
           "September(九月)",
           "October(十月)",
           "November(十一月)",
           "December(十二月)"
    };  //给指针数组中的元素赋初值
    for ( i = 0; i < 12; i++)
    {   
        p = month + i;
        printf("%s\n", *p); //输出指针数组中的各个元素
    }

    return 0;
}
*/

/*
//利用指向指针的指针输出一维数组中是偶数的元素，并统计偶数的个数
#include<stdio.h>
int main(){
    int a[15], *p1, **p2, i, n=0;
    printf("请输入15个数值：\n");
    for ( i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);  //给数组各个元素赋值
    }
    p1 = a;  //将数组a的首地址赋给p1
    p2 = &p1; //将指针p1的地址赋给p2
    printf("数组中的偶数为：\n");
    
    for ( i = 0; i < 15; i++)
    {
        if(*(*p2+i) % 2 == 0){
            printf("%5d", *(*p2+i));  //输出数组中的元素
            n++;
        }
    }
    printf("\n");
    printf("数组中偶数的个数为：%d\n", n);
    
    return 0;
}
//p2 一直存放着数组a[15]的首地址，不随p1的改变而改变
*/

/*
//使用指针的指针输出字符串  首先使用指针数组创建一个字符串数组，然后定义指向指针的指针，使其指向字符串数组，并使用其将数组中的字符串输出。
#include<stdio.h>
int main(){
    char *name[] = {"李明洋", "杨景", "百年好合"};
    char **word = name;
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", *(word+i));
    }
    
    return 0;
}
*/

/*
//使用指向指针的指针对字符串排序
#include<stdio.h>
#include<string.h>
void sort(char *strings[], int n){
    //自定义函数sort()，用以实现对字符串的排序
    char *temp;  //声明字符型指针变量
    int i, j;  //声明整型变量
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if( strcmp(strings[i], strings[j]) > 0){
                //比较两个字符
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;
            }
        } 
    }
    

}
int main(){
    int n = 3;
    int i;
    char *name[] = {"杨景", "李明洋", "百年好合"};
    char **word = name;
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", name[i]);
    }
    sort(word, n);  //调用排序自定义过程
    printf("排序后的数组：\n");
    for ( i = 0; i < n; i++)
    {
        //循环输出排序后的数组元素
        printf("%s\n", name[i]);
    }
    
    return 0;
}
*/

//函数参数的指针变量： 指针型变量也可以作为函数参数。

/*
//调用自定义函数交换两变量值
#include<stdio.h>
void swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    int x,y;
    int *p_x, *p_y;
    printf("请输入两个数：\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    p_x = &x;
    p_y = &y;
    swap(p_x, p_y);
    printf("两个数互换的结果为：\n");
    printf("x=%d\n", x);
    printf("y=%d\n", y);

    return 0;
}
*/

//在函数调用过程中，主调函数与被调用函数之间有一个数值传递过程。函数调用中发生的数据传递是单向的，只能把实参的值传递给形参，在函数调用过程中，形参的值发生改变，实参的值不会发生变化，所以上面这段代码不能实现x和y值的互换。
//通过指针传递参数可以减少值传递带来的开销，也可以使函数调用不产生值传递。

/*
//嵌套的函数调用
#include<stdio.h>
void swap(int *p1, int *p2){
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void exchange(int *pt1, int *pt2, int *pt3)//三个数由大到小排序
{
    if (*pt1 < *pt2)
    {
        swap(pt1, pt2);  //调用swap函数
    }
    if(*pt1 < *pt3){
        swap(pt1, pt3);
    }
    if(*pt2 < *pt3){
        swap(pt2, pt3);
    }
}
int main(){
    int a,b,c, *q1, *q2, *q3;
    puts("请输入三个您想要比较大小的整数：");
    scanf("%d %d %d", &a, &b, &c);
    q1 = &a;
    q2 = &b;
    q3 = &c;
    exchange(q1, q2, q3);
    printf("将三个数由大到小的顺序输出：");
    printf("\n%d %d %d\n", a,b,c);
}
*/

//C语言中实参变量和形参变量之间的数据传递是单项的“值传递”方式。指针变量作函数参数也是如此，调用函数不可能改变实参指针变量的值，但可以改变实参指针变量所指变量的值。

//介绍如何使用指向数组的指针变量作函数参数

/*
//1、形式参数和实际参数均为指针变量  任意输入15个数据，现将这15个数据中是奇数的数据输出，再求这15个数据中所有奇数之和。
#include<stdio.h>
void SUM(int *p, int n){
    //自定义函数SUM()查找数组中的奇数
    int i, sum = 0;
    printf("数组中的奇数为：\n");
    for ( i = 0; i < n; i++)
    {
        if (*(p+i) % 2 != 0)  //判断数组中的元素是否为奇数
        {
            printf("%5d", *(p+i));
            sum = sum + *(p+i);
        }
    }
    printf("\n");
    printf("奇数的和为：%d\n", sum);
}

int main(){
    int *pointer, a[15], i;
    pointer = a;  //指针指向数组的首地址
    printf("请输入15个整数值：\n");
    for ( i = 0; i < 15; i++)
    {
        scanf("%d", &a[i]);
    }
    SUM(pointer, 15);  //调用SUM()函数

    return 0;
}
*/

//数组名就是这个数组的首地址，所以可以将数组名作为实参传递给形式参数
//使用指针实现冒泡排序 冒泡排序的基本思想：如果要对n个数进行冒泡排序，则要进行n-1趟比较，在第一趟比较中药进行n-1次两两比较，在第j趟要进行n-j趟比较。
/*
#include<stdio.h>
void order(int *p, int n){
    int i,t,j;
    for ( i = 0; i < n; i++)
    {
        for( j=0;j<n-1-i;j++){
            if( *(p+j) > *(p+j+1) )  //判断两个相邻元素的大小
            {
                t = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = t;  //借助中间变量t进行值互换 
            }
        }
    }
    printf("排序后的数组：");
    for ( i = 0; i < n; i++)
    {
        if (i%5 == 0)
        {
            printf("\n"); //以每行五个元素的形式输出
        }
        printf("%5d", *(p+i));  //输出数组中排序后的元素
    }
    printf("\n");
    
}
int main(){
    int a[50], i, n;
    printf("请输入元素元素的个数：\n");
    scanf("%d", &n);
    printf("请输入各个元素：\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", a+i);  //给数组元素赋值
    }
    
    order(a, n);  //调用order()函数，对数组进行排序

    return 0;
    
}
*/


//当形式参数为数组时，实参也可以是指针变量 -->  将上述冒泡排序的例子进行修改
/*
#include<stdio.h>
void order(int a[], int n){
    int i,t,j;
    for ( i = 0; i < n; i++)
    {
        for( j=0;j<n-1-i;j++){
            if( *(a+j) > *(a+j+1) )  //判断两个相邻元素的大小
            {
                t = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = t;  //借助中间变量t进行值互换 
            }
        }
    }
    printf("排序后的数组：");
    for ( i = 0; i < n; i++)
    {
        if (i%5 == 0)
        {
            printf("\n"); //以每行五个元素的形式输出
        }
        printf("%5d", *(a+i));  //输出数组中排序后的元素
    }
    printf("\n");
    
}
int main(){
    int a[50], i, n;
    int *p;
    p = a;
    printf("请输入元素元素的个数：\n");
    scanf("%d", &n);
    printf("请输入各个元素：\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", p+i);  //给数组元素赋值
    }
    
    order(p, n);  //调用order()函数，对数组进行排序

    return 0;
    
}
*/

//用指向指针的指针作为函数参数  编程实现对英文的12个月份按字母顺序进行排序
/*
#include<stdio.h>
#include<string.h>
void sort(char *strings[], int n) //自定义排序函数
{
    char *temp;
    int i,j;
    for(i=0; i<n;i++){
        for( j=i+1; j<n; j++){
            if( strcmp(strings[i], strings[j]) > 0){ //比较两个字符串的大小{
                temp = strings[i];
                strings[i] = strings[j];
                strings[j] = temp;  //如果前面字符串比后面的大，则互换
            }
        }
    }
}
int main(){
    int n = 12;
    int i;
    char **p;
    //！！！指针数组指针数组可以说成是”指针的数组”，首先这个变量是一个数组。其次，”指针”修饰这个数组，意思是说这个数组的所有元素都是指针类型。
    char *month[]={ 
           "January(一月)",
           "February(二月)",
           "March(三月)",
           "April(四月)",
           "May(五月)",
           "June(六月)",
           "July(七月)",
           "August(八月)",
           "September(九月)",
           "October(十月)",
           "November(十一月)",
           "December(十二月)"
    };  //给指针数组中的元素赋初值
    p = month;
    sort(p, n);
    printf("排序后的12月份如下：\n");
    for(i=0; i<n; i++){
        printf("%s\n", month[i]);
    }
}
*/

//找出数组每行中最大的数，并将这3个数相加求和
/*
#include<stdio.h>
void max(int (*a)[4], int m) //自定义max函数，求二维数组中每行最大元素
{
    int value, i, j, sum = 0;
    for(i=0; i<m; i++){
        value = *(*(a+i));  //将每行中的首个元素赋给value
        for(j=1; j<4; j++){
            if( *(*(a+i)+j) > value ){
                //判断其他元素怒是否大于value的值
                value = *(*(a+i)+j);  //把比value大的数重新赋给value
            }
        }
        printf("第%d行：最大数是：%d\n", i, value);
        sum += value;
    }
    printf("\n");
    printf("每行最大数相加之和是：%d\n", sum);
}
int main(){
    int a[3][4], i, j;
    int (*p)[4];
    p = &a[0];
    printf("请输入一个3行4列的二维数组：\n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
            scanf("%d", &a[i][j]);  //给数组中的元素赋值
        }
    }
    max(p,3);
}
*/

//使用返回指针的函数查找最大值  实现在窗体上输入10个整数后，再次在窗体上输出这些整数中的最大值。
/*
#include<stdio.h>
void maxNum(int *p, int n, int *max){
    int i;
    *max = *p;
    for(i=1; i<n; i++){
        if( *max < *(p+i) ){
            *max = *(p+i);
        }
    }

}
int main(){
    int a[10], size = 10, i;
    int max = 0, *all = &max;
    printf("请输入十个整数：\n");
    for(i=0; i<size; i++){
        scanf("%d", a+i);
    }
    maxNum(a, size, all);

    printf("这十个数中的最大值为：%d\n", max);
}
*/

//寻找相同元素的指针  比较两个有序数组的元素，输出两个数组中第一个相同的元素值

/* 
    返回指针值的函数 ：  指针变量也可以指向一个函数。一个函数在编译时被分配给一个入口地址，这个函数入口地址就称为函数的指针。可以用一个指针变量指向函数，然后通过该指针变量调用此函数。
    一个函数可以返回一个整数值、字符值、实型值等，也可以返回指针型的数据，即地址。其概念与以前类似，只是返回的值的类型是指针类型而已。返回指针型的函数简称为指针函数。
    定义指针函数的一般形式为：
        类型名 *函数名(参数列表)
        int *fun(int x, int y)
    fun是函数名，调用它以后得到一个指向指针型数据的指针。x和y是函数fun()的形式参数。这个函数名前有一个 ” * “，表示此函数是指针型函数，类型说明int表示返回的指针执行一个整型变量。
*/

//求长方形的周长
/*
#include<stdio.h>
int per(int a, int b);
int main(){
    int iWidth, iLength, iResult;
    printf("请输入长方形的长：\n");
    scanf("%d", &iLength);
    printf("请输入长方形的宽：\n");
    scanf("%d", &iWidth);
    
    iResult = per(iWidth, iLength);
    
    printf("长方形的周长是：%d\n", iResult);
    
    return 0;
}
int per(int a, int b){
    return (a+b)*2;
}
*/

//修改为返回值是指针的函数
/*
#include<stdio.h>
int *per(int a, int b);
int Perimeter;
int main(){
    int iWidth, iLength;
    int *iResult;
    printf("请输入长方形的长：\n");
    scanf("%d", &iLength);
    printf("请输入长方形的宽：\n");
    scanf("%d", &iWidth);
    
    iResult = per(iWidth, iLength);
    
    printf("长方形的周长是：%d\n", *iResult);
    
    return 0;
}
int *per(int a, int b){
    int *p;
    p = &Perimeter;
    *p = (a+b)*2;
    return p;
}
//程序本身并不需要写为上述指针形式，因为对这种问题像上面这样编写出的程序并不简便，这里这样写只是为了讲解的目的。
*/

/*
    指针数组做main()函数的参数
    
    在前面讲过的程序中，都会出现main()函数，main()函数称之为主函数，是所有程序运行的入口。main()函数是由系统调用的，当处于操作命令状态下时，输入main所在的文件名，系统就调用main()函数。在前面课程的学习中，对main()函数始终作为主调函数处理，即允许main调用其他函数并传递参数。
    main()函数的第一行一般形式如下：
        main()
    从上面会发现main()函数是没有参数的，那么到底main()函数能否有参数呢？实际上main()函数可以是无参函数也可以是有参的函数。对于有参的形式来说，就需要想其传递参数。下面先看一下main()函数带参的形式。
        main(int argc, char *argv[])
    从函数参数的形式上看，包含一个整型和一个指针数组。当一个C出的源程序经过编译、链接后，会生成扩展名为.exe的可执行文件，这是可以在操作系统下直接运行的文件，对于main()函数来说其实际参数和命令是一起给出的。
    也就是在一个命令行中包括命令名和需要传给main()函数的参数。命令行的一般形式如下：
    命令名 参数1 参数2 ... 参数n
    例如：
        ./a.out hi yeah
        file1 happy bright glad
    其中 file1 为文件名，也就是一个由file.c经编译、连接后生成的可执行文件，其后跟3个参数。以上命令行与main()函数的形式参数关系为：
        它的参数 argc 记录了命令行中命令与参数的个数(file1， happ，bright，glad)，共4个，指针数组的大小由参数的值决定，即为char *argc[4]。
    即：利用指针数组做main()函数的形参，可以向程序传送命令行参数。

    注释：参数字符串的长度是不定的，并且参数字符串的长度不需要统一，且参数的数目也任意的，并不规定具体个数。 

*/

//输出main()函数参数内容
/*
#include<stdio.h>
int main(int argc, char *argv[]){
    //main()函数为带参函数
    printf("the list of parameter:\n");
    printf("命令名：\n");
    printf("%s\n", *argv);
    printf("参数个数：\n");
    printf("%d\n", argc);

    return 0;
}
*/

//第十一章  指针  小结
/*
    指针是C语言中最难掌握和理解的内容，但是灵活地运用指针能够提高程序的执行效率
    给程序开发带来更多便利。
    当然，如果使用不当，也会带来灾难性的后果。
    ！！！因此，希望读者能够很好地理解本章内容，为今后的程序开发打下良好的基础！！！
*/

//第十二章 常用数据结构
/*
	构造类型数据是由基本类型按照一定规则组成。



*/
