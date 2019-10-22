//#include <stdio.h>
// #include<stdlib.h>
// #include<inttypes.h> //支持可移植类型

 /*
 	1、定义程序的目标
	2、设计程序
	3、编写代码
	4、编译
	5、运行程序
	6、测试和调试程序
	7、维护和修改程序
 */

/*
int main(void){
    puts("~~~~今天的日期~~~");
    system("cal");
    return 0;
}
*/

/*
unsigned int Gcd(unsigned int M, unsigned int N){
	unsigned int Rem;

	while(N > 0){
		Rem = M % N;
		M = N;
		N = Rem;
	} 
	return M;
}

int main(){
	int number[100000];
	int k = 0;

	for (int i = 0; i < 100000; i++)
	{
		k++;
		scanf("%d", &number[i]);
	}


	return 0;
}
 */

//day 1   2019.9.23
/*
** 这个程序从标准输入中读取输入行并在标准输出中打印这些输入行，
** 每个输入行的后面一行是该行内容的一部分。
**
** 输入的第一行是一串标号，串的最后以一个负数结尾。
** 这些列标号成对出现，说明需要打印的输入行的列的范围。
** 例如， 0 3 10 12 -1 表示第0列到第三列，第10列到第12列的内容将被打印。
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COLS 20 //所能处理的最大列号
#define MAX_INPUT 1000 //每个输入行的最大长度

int read_column_numbers(int columns[], int max);
void rearrange( char *output, char const *input, int n_columns, int const columns[] );

int main(void){
	int n_columns;  //进行处理的列标号
	int columns[MAX_COLS];  //需要处理的列数
	char input[MAX_INPUT]; //容纳输入行的数组
	char output[MAX_INPUT]; //容纳输出行的数组

	//读取该串列标号

	n_columns = read_column_numbers(columns, MAX_COLS);

	//读取、处理和打印剩余的输入行。

	while (gets( input ) != NULL )
	{
		printf("Original input：%s\n", input);
		rearrange( output, input, n_columns, columns );
		printf("Rearranged line：%s\n", output);
	}
	
	return EXIT_SUCCESS;
}

//读取列标号，如果超出规定范围则不予理会。
int read_column_numbers( int columns[], int max){
	int num = 0;
	int ch;

	//取得列标号，如果所读取得到数小于0则停止。
	while(num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0) num += 1;

	//确认已读取的标号为偶数个，因为它们是以对的形式出现的。
	if (num % 2 != 0){
		puts("Last column number is not paired.");
		exit(EXIT_FAILURE);
	}

	//丢弃该行中包含最后一个数字的那部分内容
	while ( (ch = getchar()) != EOF && ch != '\n')
		; 
	return num;
}

//处理输入行，将指定列的字符连接在一起，输出行以NULL结尾
void rearrange( char *output, char const *input, int n_columns, int const columns[]){
	int col; //columns数组的下标
	int output_col; //输出列计数器
	int len; //输入行的长度

	len = strlen( input );
	output_col = 0;

	//处理每对列标号
	for( col = 0; col < n_columns; col += 2){
		int nchars = columns[col + 1] - columns[col] + 1;

		//如果输入行结束或输出行数组已满，就结束任务。
		if ( columns[col] >= len || output_col == MAX_INPUT - 1) break;

		//如果输出行数据空间不够，只复制可以容纳的数据。
		if ( output_col + nchars > MAX_INPUT -1 )
		{
			nchars = MAX_INPUT - output_col - 1;
		}

		//复制相关的数据
		strncpy( output + output_col, input + columns[col], nchars);
		output_col += nchars;
		
	}

	output[output_col] = '\0';
}
*/

//第一章 测验

/*
//1.hello world！
#include <stdio.h>
int main(){
	printf("Hello, world!\n");

	return 0;
}
*/

/*
//2.从标准输入读取几行输入，并打印到标准输出上

//method 1
#include <stdio.h>
int main(){
	char word;  //获取每一行字符，每一行字符的末尾是以\n结尾的，以此来区分不同行
	int for_switch=1; //定义一行
	int count=1;   //行号

	while ( (word = getchar()) != EOF )  //当输入为EOF时，跳出循环
	{
		if( for_switch == 1){       //区分不同行，通过printf函数进行回车
			printf("%d ", count);
			count++;
			for_switch++;
		}
		if( word == '\n'){
			for_switch = 1;
		}
		putchar(word);   //这里，循环打印出每一行
	}

	return 0;
	
}


#include <stdio.h>
#define LINE 50
#define MAX 100
int main(){
	char arr[LINE][MAX];  //定义一个二维数组
	for (int i = 0; i < LINE; i++)  //输入字符串到每一行数组中
	{
		gets(arr[i]);
		if( arr[i][0] == '\0'){
			break;  //遇到空行跳出循环
		}
	}

	for (int i = 0; arr[i][0]; i++)  ////此处的条件也可以为arr[i][0]!='\0'
	{
		printf("%d ", i+1);  //打印行号
		puts(arr[i]);
	}
	
	return 0;
}
*/

/*
//3. 从标准输入读取一些字符，并把它们写到标准输出上。同时计算checksum值，并写在字符后。checksum ： 校验和。
#include <stdio.h>

int main(){
	char word[500];  //获取每一个字符输入
	signed char checksum = -1; //校验和，最后通过十进制输出
	int i = 0;
	word[i] = getchar();

	while( word[i] != '\n')
	{	
		checksum += word[i];
		i++;
		word[i] = getchar();
	}
	
	checksum += '\n';
	printf("%d\n", checksum);

	return 0;

}
*/

//4. 编写一个程序，一行行地读取输入行，直至到达文件尾。算出每行输入行的长度，然后把最长的那行打印出来。假定所有输入行均不超过1000个字符




//day two 2019.9.24

/*
1、词法规则
	1.字符 2.注释 3.自由形式的源代码 4.标识符 5.程序的形式：标准没有明确规定，但一个C程序的源文件应该包含一组相关的函数，这才是较为合理的组织形式。这种做法还有一个额外的优点，就是它使实现抽象数据类型成为可能。
2、程序风格 像C这种自由形式的语言很容易产生邋遢的程序，
	不良的风格和不良的文档是软件产生和维护代价高昂的两个重要原因。良好的编程风格能够大大提高程序的可读性。良好的编程风格的直接结果就是程序更容易正确运行，间接结果是它们更容易维护，这将节省大笔资金成本。
3、总结
	一个C程序的源代码保存在一个或多个源文件中，但一个函数只能完整的出现在同一个源文件中，把相关的函数放在同一个文件内是一种好策略。每个源文件都分别编译，产生对应的目标文件。然后，目标文件被链接在一起，形成可执行程序。编译和最终运行程序的机器有可能相同，也可能不同。
	程序必须被载入到内存中才能执行。在宿主式环境中，这个任务由操作系统完成。在自由式环境中，程序常常永久存储于ROM中。经过初始化的静态变量在程序执行前能获得它们的值。你的程序执行的起点是main函数。绝大多数环境使用堆栈来存储局部变量和其他数据。
*/


//1. 一个程序，由3个函数组成，每个函数分别保存在一个单独的源文件中。函数increment接受一个整型参数，它的返回值是该参数的值加 1 。
//increment函数应该位于文件increment.c中。第2个函数称为negate，它也接受一个整型参数，它的返回值是该参数的负值( 例如该参数是25，函数返回-25；如果参数是-612，函数返回612 )。
//最后一个函数是main，保存于文件main.c中，它分别用参数10，0，-10调用另外两个参数，并打印出结果。


/*
//2. 从标准输入读取C源代码，并验证所有花括号都正确地成对出现。注意：不必担心注释内部、字符串常量内部和字符常量形式的花括号。 
#include <stdio.h>
int main()
{
    int ch;
    int count = 0;
    while ((ch = getchar()) != EOF)//循环输入，EOF结束
    {
        if (ch == '{')
        {
            count++;
        }
        //当遇到{时，计数器+1
        if (ch == '}' && count == 0)
        {
            printf("不匹配\n");
            return 0;
        }
        //当遇到}但计数器为0了，输出不匹配，即为}在{前边
        if (ch == '}' && count != 0)
        {
            count--;
        }
        //当遇到}且计数器不为0时，计数器-1
    }

    if (count == 0)
    {
        printf("匹配!\n");
    }
    else
    {
        printf("不匹配!\n");
    }

    return 0;
}
*/

//3. 十六进制转十进制  十进制转十六进制  输出。


//part III 数据
//程序对数据进行操作。 本章将对数据进行描述，描述它的各种类型，描述它的特点以及如何声明它。
//变量的三个属性—— 作用域、链接属性 和 存储类型。这三个属性决定了一个变量的”可视性“( 也就是它可以在什么地方使用 ) 和 ”生命周期“（它的值将保持多久）

//整型、浮点型、指针、聚合类型（如数组和结构体等），所有其他的类型都是从这4种基本类型的某种组合派生而来的。
















