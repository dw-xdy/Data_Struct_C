#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*这个文件主要是进行指针的学习, 毕竟指针真的是一个很重要很重要的一个概念*/

/*然后创建这一个项目的原因是：我想用C语言将比较基础的数据结构进行实现(实现一遍)
  这样能很好的锻炼我的C语言的能力和语法知识, 以后对于学习操作系统会有很大的帮助.*/

/*所以这第一个文件算是一个开启学习数据结构与算法的准备文件和操作吧.*/


//int main() {
//	int a;
//	int* p;
//	a = 10;
//	p = &a; //p中存放的是a的地址.
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	printf("%p\n", &a);
//}

//int main() {
//	int a;
//	int* p;
//	a = 10;
//	p = &a;
//	printf("a = %d\n", a);  // 打印的值是：10;
//	*p = 12;                // 通过解引用操作符对“p”中存储的地址找到对应的值进行修改.
//	printf("a = %d\n", a);  // 最后打印的值是：12;
//}

//int main() {
//	int a;
//	int* p;
//	a = 10;
//	p = &a;
//	printf("p的地址是：%p\n", p);
//	printf("p的值是：%d\n", *p);
//
//	int b = 20;
//	*p = b;                   // 这段操作表示实现了将“a”的值修改为20, 但是“p”存储的地址还是“a”.
//	printf("p的地址是：%p\n", p);
//	printf("p的值是：%d\n", *p);
//}

//int main() {
//	int a = 10;
//	int* p = &a;
//
//	printf("p中存储的地址为：%p\n", p);
//	printf("一个整型变量占据的字节大小为：%zu\n", sizeof(int));
//	printf("(p + 1)中存储的地址为：%p\n", p + 1);
//
//
//	printf("p中存储的地址所指向的值为：%d\n", *p);
//	printf("(p + 1)中存储的地址所指向的值为：%d\n\n\n", *(p + 1));
//
//	double b = 32.32;
//	double* pb = &b;
//
//	printf("pb中存储的地址为：%p\n", pb);
//	printf("一个双精度浮点型变量占据的字节大小为：%zu\n", sizeof(double));
//	printf("(pb + 1)中存储的地址为：%p\n", pb + 1);
//
//
//	printf("pb中存储的地址所指向的值为：%lf\n", *pb);
//	printf("(pb + 1)中存储的地址所指向的值为：%lf\n", *(pb + 1));
//	return 0;
//}


//int main() {     // 四个字节分别对应的地址：  203      202      201      200                  
//	int a = 1025; // 1025的二进制表示方式：00000000 00000000 00000100 00000001
//	int* p = &a;
//
//	printf("int类型的占据空间大小为：%zu\n", sizeof(int));
//	printf("p中存放的的内存地址为：%p, p指向的值为：%d\n", p, *p);
//	printf("(p + 1)中存放的的内存地址为：%p, (p + 1)指向的值为：%d\n", p + 1, *(p + 1));
//
//	char* p0;     
//	p0 = (char*)p;    // 这里使用了强制类型转换：所以“p0”中存储的是“200”, 所以最后的输出(p0指向的值为)是“1”.
//
//	printf("char类型的占据空间为：%zu\n", sizeof(char));
//	printf("p0中存放的的内存地址为：%p, p0指向的值为：%d\n", p0, *p0);
//	printf("(p0 + 1)中存放的的内存地址为：%p, (p0 + 1)指向的值为：%d\n", p0 + 1, *(p0 + 1));
//
//	return 0;
//}

//int main() {     // 四个字节分别对应的地址：  203      202      201      200                  
//	int a = 1025; // 1025的二进制表示方式：00000000 00000000 00000100 00000001
//	int* p = &a;
//
//	printf("int类型的占据空间大小为：%zu\n", sizeof(int));
//	printf("p中存放的的内存地址为：%p, p指向的值为：%d\n", p, *p);
//	printf("(p + 1)中存放的的内存地址为：%p, (p + 1)指向的值为：%d\n", p + 1, *(p + 1));
//
//	void* p0;  // 
//	p0 = p;    // 空指针是不需要进行强制类型转换的.
//	printf("p0的值为：%p\n", p0);
//}


//int main() {
//	int x = 5;
//	int* p;
//	p = &x;
//	*p = 6;
//
//	int** q = &p;
//
//	int*** r = &q;
//
//	printf("%d", *p);
//	printf("%d", *q);
//	printf("%d", *(*q));
//	printf("%d", *(*r));
//	printf("%d", *(*(*r)));
//	return 0;
//}

//int main() {
//	int x = 5;
//	int* p = &x;
//	*p = 6;
//	int** q = &p;
//	int*** r = &q;
//
//	printf("%d\n", *p);
//	printf("%p\n", *q);
//	printf("%d\n", **q);
//	printf("%p\n", **r);
//	printf("%d\n", ***r);
//	***r = 10;
//	printf("x = %d\n", x);
//	**q = *p + 2;
//	printf("x = %d\n", x);
//}


// 分别确定这两个函数中的“a”的地址, 最后发现是不同的地址.
//void Incrment(int a) {
//	a = a + 1;
//	printf("Incrmen函数中“a”的地址为：%p\n", &a);
//}
//
//int main() {
//	int a;
//	a = 10;
//	Incrment(a);
//	printf("main函数中“a”的地址为：%p\n", &a);
//	return 0;
//}


// 按值传递
//void Incrment(int a) {
//	a = a + 1;
//	printf("a = %d\n", a);
//}
//
//int main() {
//	int a;
//	a = 10;
//	Incrment(a);
//	printf("a = %d\n", a);
//	return 0;
//}

// 按引用传递.
//void Incrment(int* p) {
//	*p = (*p) + 1;
//}
//
//int main() {
//	int a = 10;
//	Incrment(&a);
//	printf("a = %d", a);
//}


// 证明“p”和“a”不是同一个变量. (其实也不怎么用证明, 一开始就用不同函数中的“a”进行证明了.)
//void Incrment(int* p) {
//	p = NULL;
//}
//
//int main() {
//	int a = 10;
//	Incrment(&a);
//	printf("a = %d", a);
//}












// 6. 指针与数组

//int main() {
//	int A[5];
//	A[0] = 2;
//	A[1] = 4;
//	A[2] = 5;
//	A[3] = 8;
//	A[4] = 1;
//
//	int* p = &A[0];
//	int* q = A;
//	printf("A[0]的地址为：%p\n", p);        // A的地址和A[0]的地址是一样的, 所以数组的首元素地址又被称为数组的“基地址”
//	printf("A[0]的值为：%d\n", *p);
//	printf("A[1]的地址为：%p\n", p + 1);    // 从这段代码中可以发现数组中表示第“i”位置的地址或者值
//	printf("A[1]的值为：%d\n", *(p + 1));   // 表示地址：1. &A[i] 或者 A + i;
//	printf("A的地址为：%p\n", q);           // 表示值：1. A[i] 或者 *(A + i);
//	printf("A[1]的地址为：%p\n", q + 1);
//	printf("A[1]的值为：%d\n", *(q + 1));
//  return 0;
//}

//int main() {
//	int arr[] = { 2, 4, 5, 8, 1 };
//	int i;
//	int* p = arr;
//	p++;
////  arr++;
//	for (int i = 0; i < 5; i++) {
//		printf("arr[%d]对应的地址为：%p\n", i, arr + i);
//		printf("arr[%d]对应的地址为：%p\n", i, &arr[i]);
//		printf("arr[%d]对应的值为：%d\n", i, *(arr + i));
//		printf("arr[%d]对应的值为：%d\n", i, arr[i]);
//	}
//	return 0;
//}



















// 7. 数组作为函数参数
//int sumOfArr(int arr[], int size) {
//	int sum = 0;
//	for (int i = 0; i < size; i++) {
//		//sum += arr[i];
//		sum += *(arr + i);
//	}
//
//	return sum;
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sumOfArr(arr, size));
//
//	return 0;
//}



// 注意：这里有一个需要关注的地方：在64位的操作系统下, 一个指针的大小是8个字节, 但是在86位的操作系统下, 一个指针是4个字节.
// 所以要是最后的结果是“3”, 那就应该是操作系统的原因, 修改为64位的操作系统就行.
//int sumOfArr(int arr[]) {
//	int sum = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);   
//	printf("sumOfArr函数中的 arr大小 = %d, arr[0]大小 = %d\n", sizeof(arr), sizeof(arr[0]));
//	for (int i = 0; i < size; i++) {
//		//sum += arr[i];
//		sum += *(arr + i);
//	}
//
//	return sum;
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("main函数中的 arr大小 = %d, arr[0]大小 = %d\n", sizeof(arr), sizeof(arr[0]));
//	int total = sumOfArr(arr);
//	printf("%d", total);
//	return 0;
//}

//void Double(int* arr, int size) {
//	for (int i = 0; i < size; i++) {
//		arr[i] = 2 * arr[i];
//	}
//}
//
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//
//	Double(arr, size);
//	for (int i = 0; i < size; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}













// 8. 指针与字符数组(上)

//int main() {
//	char C[5];
//	C[0] = 'J';
//	C[1] = 'O';
//	C[2] = 'H';
//	C[3] = 'N';
//	C[4] = '\0';
//	printf("%s", C);
//
//	return 0;
//}

//int main() {
//	char C[] = "John";
//	printf("C的字节数为：%zu\n", sizeof(C));
//	int len = strlen(C);
//	printf("C的长度为：%d", len);
//	return 0;
//}


// 数组和指针相似的地方.
//int main() {
//	char c1[] = "hello";
//	char* c2;
//	c2 = c1;     // 将c2指针指向了c1对应的地址. 接下来也就能直接用c2进行操作.
//
//	c2[0] = 'y';
//	*(c2) = 'a';  // 效果是一样的.
//
//	printf("%s", c1);
//	return 0;
//}

// 数组和指针不同的地方.
//int main() {
//	char c1[] = "hello";
//	char* c2;
//	c1 = c2;               // 这样做是不对的, 数组不能指向一个指针. 也不能进行“+, -”, 都是不对的, 
//  c1 = c1 + 1;           // 这样做是不对的, 会发生编译错误.
//	printf("%s", c1);      // 这样就要求我们很清楚的知道什么时候我们使用的是指针, 什么时候使用的是数组.
//	return 0;
//}

//void print(char* c) {
//	int i = 0;
//	while (c[i] != '\0') {
//		printf("%c", *(c + i));
//		i++;
//	}
//	printf("\n");
//}
//
//
//int main() {
//	char c[10] = "Hello";
//	print(c);
//	return 0;
//}
//
//void print(char* c) {
//	int i = 0;
//	while (*c != '\0') {
//		printf("%c", *c);
//		c++;
//	}
//	printf("\n");
//}
//
//
//int main() {
//	char c[10] = "Hello";
//	print(c);
//	return 0;
//}













// 9. 指针与字符数组(下)

//int main() {
//	char* c = "uaiegrbae";  // 这个会被存储在“常量区”, 所以不能直接进行修改
//	//	char c[10] = "Hello";   // 这样的可以进行修改.
//
//	printf("%s", c);
//	return 0;
//}













// 10. 指针与二维数组

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	printf("%p\n", (p + 1));
//	printf("%p\n", (arr + 1));
// 	return 0;
//}

//int main() {
//	// 需要定义一个指向一维数组的指针(其中的一维数组包括三个整型数).
//	// b 返回的是一个指向一维数组(其中包含3个整型元素)的指针, 所以不能拿 int类型 接收.
//	// 指针的类型是很重要的!!!!!!!!!!!!!!!!!!!!!
//	int b[2][3];
//
////  int* p = b;        // 这样做其实是不对的, 这是编译器帮你优化了, 指向的是“b[0][0]”.
//	int (*p)[3] = b;   // 这是一个指向一维数组的指针.
//
//
////	 可以这样理解：
////	 b 是 b[0], b[1] 数组的数组名,
////	 b[0] 又同时是 b[0][0], b[0][1], b[0][2] 数组的数组名
////	 b[1] 又同时是 b[1][0], b[1][1], b[1][2] 数组的数组名
//
//	printf("%p\n", b);         // b(b[]的基地址) 指向的是“b[0]”, 所以输出地址是：400;
//	printf("%p\n", &b[0]);     // b[0] 对应的地址就是自己的初始地址, 所以输出地址是：400;
//	printf("%p\n", *b);        // *b 表示的是将输出“b[0]”中存储的东西, “b[0]”是“b[0][]”数组的基地址, 所以直接输出“b[0][0]”的地址, 所以输出地址是：400;
//	printf("%p\n", b[0]);      // “b[0]”表示的是“b[0]”是“b[0][]”数组的基地址, 所以直接输出“b[0][0]”的地址, 所以输出地址是：400;
//	printf("%p\n", &b[0][0]);  // &b[0][0] 表示取出b[0][0]对应的地址, 所以输出地址是：400;
//
//	printf("%p\n", (b + 1));
//	printf("%p\n", *(b + 1));
//	printf("%p\n", b[1]);
//	printf("%p\n", &b[1]);
//	printf("%p\n", &b[1][0]);
//
//
//	//b[i][j] == *(b[i] + j)
//	//	    == *(*(b + i) + j);
//
//	return 0;
//}

















// 11. 指针与多维数组
//int main() {
//	int arr[3][2][2];
//
//	int (*p)[2][2] = arr;
//
//	//arr[i][j][k] == *(arr[i][j] + k)
//	//	         == *(*(arr[i] + j) + k);
//	//             == *(*(*(arr + i) + j) + k);
//
//	
//	return 0;
//}



//void func(int (*arr)[2][2]) {
//	printf("hello, world");
//}
//
//int main() {
//	int C[3][2][2] = { {{2, 5}, {7, 9}},
//					   {{3, 4}, {6, 1}},
//		               {{0, 8},{11, 13}}};
//
//	int A[2][3] = { {2, 4, 6}, {5, 7, 8} };
//
//	//func(A);
//	func(C);
//		         
//	//printf("%p %p %p %p", C, *C, C[0], &C[0][0]);
//	return 0;
//}













// 11. 指针与动态内存 - 栈 vs 堆

//int main() {
//	int a;
//
//	int* p = (int*)malloc(sizeof(int));
//	*p = 10;        // 使用堆中内存的唯一方式：就是通过引用.
//	return 0;
//}

//int main() {
//	int* arr;
//	arr = (int*)malloc(4 * sizeof(int));
//
//	for (int i = 0; i < 4; i++) {
//		scanf("%d", &arr[i]);
//	}
//
//
//	for (int i = 0; i < 4; i++) {
//		printf("%d ", arr[i]);
//	}
//	free(arr);
//	return 0;
//}




//int main() {
//    int n;
//    int* arr;
//
//    // 输入数组的大小
//    printf("请输入数组的大小: ");
//    scanf("%d", &n);
//
//    // 动态分配内存
//    arr = (int*)malloc(n * sizeof(int));
//
//    // 检查内存是否分配成功
//    if (arr == NULL) {
//        printf("内存分配失败\n");
//        return 1;
//    }
//
//    // 输入数组元素
//    printf("请输入 %d 个整数:\n", n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // 打印数组元素
//    printf("你输入的数组是: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // 释放内存
//    free(arr);
//
//    return 0;
//}














// 13. 指针和动态内存 - malloc calloc realloc free

//// 使用“malloc函数”进行动态内存管理
//int main() {
//	int n;
//	
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// 使用“calloc函数”进行动态内存管理 (其实也没有什么区别, 就是有两个参数).
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)calloc(n, sizeof(int));
//
//	//for (int i = 0; i < n; i++) {
//	//	arr[i] = i + 1;                 // 若是这个不进行初始化, 就会直接进行赋值为“0”. malloc函数不会, 会直接显示垃圾值.
//	//}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//// 使用“free函数”进行动态内存管理
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)calloc(n, sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;               
//	}
//
//	free(arr);
//	arr[2] = 100;
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);       //这里会发现, 虽然使用了“free函数”, 但是其实还是可以访问的, 只是访问的值没有什么意义.
//	}                                // 所以一定要只是使用“已经分配之后”的内存, 不然就像是在“黑暗中射击”什么也不知道.
//	return 0;
//}

//// 使用“realloc函数”进行动态内存管理. (增大的情况)
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)calloc(n, sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	int* arr1 = (int*)realloc(arr, 2 * n * sizeof(int));
//	printf("\n原来的内存空间：%p 后来的内存空间：%p\n", arr, arr1);
//
//	for (int i = 0; i < 2 * n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}


////使用“realloc函数”进行动态内存管理. (减小的情况)
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//	printf("\n");
//
//	int* arr1 = (int*)realloc(arr, (n / 2) * sizeof(int));
//    // 然而，realloc 的行为可能会导致一些意外的结果，特别是在减少内存大小的情况下。
//	// 具体来说，realloc 可能会将原始内存块的内容复制到新的内存块中，但只复制新大小范围内的内容。
//	// 如果新的内存块大小小于原始内存块大小，realloc 不会自动截断超出新大小的部分，而是保留这些数据。
//	printf("\n原来的内存空间：%p 后来的内存空间：%p\n", arr, arr1);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}



//int main() {
//	int n;
//
//	scanf("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	printf("\n");
//
//	int* arr1 = (int*)realloc(arr, (n / 2) * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	return 0;
//}


//////使用“realloc函数”进行动态内存管理. (用“realloc函数”实现“malloc函数”).
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//	printf("\n");
//
//	int* arr1 = (int*)realloc(NULL, n * sizeof(int));     //用“realloc函数”实现“malloc函数”, 创建空间.
//	printf("\n原来的内存空间：%p 后来的内存空间：%p\n", arr, arr1);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}
//
//
//////使用“realloc函数”进行动态内存管理. (用“realloc函数”实现“free函数”).
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)malloc(n * sizeof(int));
//
//	for (int i = 0; i < n; i++) {
//		arr[i] = i + 1;
//	}
//	printf("\n");
//
//	int* arr1 = (int*)realloc(arr, 0);     //用“realloc函数”实现“free函数”, 释放空间.
//	printf("\n原来的内存空间：%p 后来的内存空间：%p\n", arr, arr1);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}



















//// 14. 指针与动态内存 - 内存泄露

//int cash = 100;
//void play(int bet) {
//	//char C[3] = { 'J', 'Q', 'K' };
//	char* C = (char*)malloc(3 * sizeof(char));
//	C[0] = 'J';
//	C[1] = 'Q';
//	C[2] = 'K';
//	printf("洗牌中..............\n");
//	srand(time(NULL));
//
//	for (int i = 0; i < 5; i++) {
//		int x = rand() % 3;
//		int y = rand() % 3;
//		int temp = C[x];
//		C[x] = C[y];
//		C[y] = temp;
//	}
//	int playersGuess;
//	printf("请输入1, 2, 3");
//	scanf("%d", &playersGuess);
//	if (C[playersGuess] == 'Q') {
//		cash += 3 * bet;
//		printf("你赢了, 你现在拥有的现金为：%d", cash);
//	} else {
//		cash -= bet;
//		printf("你输了, 你现在拥有的现金为：%d", cash);
//	}
//	free(C);
//}
//
//int main() {
//	int bet;
//	printf("欢迎来到猜数字游戏\n");
//	printf("你现在拥有的现金为：%d\n", cash);
//
//	while (cash > 0) {
//		printf("你现在想要赌多少钱? $");
//		scanf("%d", &bet);
//		if (bet == 0 || bet > cash) {
//			break;
//		}
//		play(bet);
//	}
//
//	return 0;
//}




















// 15. 函数返回指针

// 修正之前的代码
//void printfHelloWorld() {
//	printf("hello, world\n");
//}
//
//int* Add(int* a, int* b) {
//	//printf("Add函数中a的地址为：%p\n", &a);
//	//printf("main函数中a的地址为：%p\n", a);
//	//printf("Add函数中a指向的值为：%d\n", *a);
//	int c = (*a) + (*b);
//	return &c;
//}
//
// 
//int main() {
//	int a = 2;
//	int b = 4;
//	//printf("main函数中a的地址为：%p\n", &a);
//	int* ptr = Add(&a, &b);
//	printfHelloWorld();
//
//	printf("sum = %d", *ptr);
//
//	return 0;
//}
//
//
//
//
// 
// 
//// 修正之后的代码
//void printfHelloWorld() {
//	printf("hello, world\n");
//}

//int* Add(int* a, int* b) {
//	//printf("Add函数中a的地址为：%p\n", &a);
//	//printf("main函数中a的地址为：%p\n", a);
//	//printf("Add函数中a指向的值为：%d\n", *a);
//	int* c = (int*)malloc(sizeof(int));
//	*c = (*a) + (*b);
//	return c;
//}
//
//
//
//int main() {
//	int a = 2;
//	int b = 4;
//	//printf("main函数中a的地址为：%p\n", &a);
//	int* ptr = Add(&a, &b);
//	printfHelloWorld();
//
//	printf("sum = %d", *ptr);
//
//	return 0;
//}






















// 16. 函数指针

// 函数指针的书写方式
//int Add(int a, int b) {
//	return a + b;
//}
//
//int main() {
//	int (*p)(int, int);
//	p = Add      // 这段代码和下面一行是一样的, 只使用函数名字也会返回函数的地址.
//	p = &Add;    // 现在“p”就指向了“Add函数”.
//
//	return 0;
//}

//// 函数指针的调用函数的方式
//int Add(int a, int b) {
//	return a + b;
//}
//
//int main() {
//	int c;
//	int (*p)(int, int);
//	p = &Add;    // 现在“p”就指向了“Add函数”.
////  c = (*p)(2, 3);
//	c = p(2, 3);
//	printf("%d", c);
//
//	return 0;
//}


////代码实例
//
//void PrintHello(char* name) {
//	printf("Hello %s", name);
//}
//
//int main() {
//	void (*ptr)(char*) = PrintHello;
//
//	ptr("tom");
//	return 0;
//}