#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*����ļ���Ҫ�ǽ���ָ���ѧϰ, �Ͼ�ָ�������һ������Ҫ����Ҫ��һ������*/

/*Ȼ�󴴽���һ����Ŀ��ԭ���ǣ�������C���Խ��Ƚϻ��������ݽṹ����ʵ��(ʵ��һ��)
  �����ܺܺõĶ����ҵ�C���Ե��������﷨֪ʶ, �Ժ����ѧϰ����ϵͳ���кܴ�İ���.*/

/*�������һ���ļ�����һ������ѧϰ���ݽṹ���㷨��׼���ļ��Ͳ�����.*/


//int main() {
//	int a;
//	int* p;
//	a = 10;
//	p = &a; //p�д�ŵ���a�ĵ�ַ.
//	printf("%p\n", p);
//	printf("%d\n", *p);
//	printf("%p\n", &a);
//}

//int main() {
//	int a;
//	int* p;
//	a = 10;
//	p = &a;
//	printf("a = %d\n", a);  // ��ӡ��ֵ�ǣ�10;
//	*p = 12;                // ͨ�������ò������ԡ�p���д洢�ĵ�ַ�ҵ���Ӧ��ֵ�����޸�.
//	printf("a = %d\n", a);  // ����ӡ��ֵ�ǣ�12;
//}

//int main() {
//	int a;
//	int* p;
//	a = 10;
//	p = &a;
//	printf("p�ĵ�ַ�ǣ�%p\n", p);
//	printf("p��ֵ�ǣ�%d\n", *p);
//
//	int b = 20;
//	*p = b;                   // ��β�����ʾʵ���˽���a����ֵ�޸�Ϊ20, ���ǡ�p���洢�ĵ�ַ���ǡ�a��.
//	printf("p�ĵ�ַ�ǣ�%p\n", p);
//	printf("p��ֵ�ǣ�%d\n", *p);
//}

//int main() {
//	int a = 10;
//	int* p = &a;
//
//	printf("p�д洢�ĵ�ַΪ��%p\n", p);
//	printf("һ�����ͱ���ռ�ݵ��ֽڴ�СΪ��%zu\n", sizeof(int));
//	printf("(p + 1)�д洢�ĵ�ַΪ��%p\n", p + 1);
//
//
//	printf("p�д洢�ĵ�ַ��ָ���ֵΪ��%d\n", *p);
//	printf("(p + 1)�д洢�ĵ�ַ��ָ���ֵΪ��%d\n\n\n", *(p + 1));
//
//	double b = 32.32;
//	double* pb = &b;
//
//	printf("pb�д洢�ĵ�ַΪ��%p\n", pb);
//	printf("һ��˫���ȸ����ͱ���ռ�ݵ��ֽڴ�СΪ��%zu\n", sizeof(double));
//	printf("(pb + 1)�д洢�ĵ�ַΪ��%p\n", pb + 1);
//
//
//	printf("pb�д洢�ĵ�ַ��ָ���ֵΪ��%lf\n", *pb);
//	printf("(pb + 1)�д洢�ĵ�ַ��ָ���ֵΪ��%lf\n", *(pb + 1));
//	return 0;
//}


//int main() {     // �ĸ��ֽڷֱ��Ӧ�ĵ�ַ��  203      202      201      200                  
//	int a = 1025; // 1025�Ķ����Ʊ�ʾ��ʽ��00000000 00000000 00000100 00000001
//	int* p = &a;
//
//	printf("int���͵�ռ�ݿռ��СΪ��%zu\n", sizeof(int));
//	printf("p�д�ŵĵ��ڴ��ַΪ��%p, pָ���ֵΪ��%d\n", p, *p);
//	printf("(p + 1)�д�ŵĵ��ڴ��ַΪ��%p, (p + 1)ָ���ֵΪ��%d\n", p + 1, *(p + 1));
//
//	char* p0;     
//	p0 = (char*)p;    // ����ʹ����ǿ������ת�������ԡ�p0���д洢���ǡ�200��, �����������(p0ָ���ֵΪ)�ǡ�1��.
//
//	printf("char���͵�ռ�ݿռ�Ϊ��%zu\n", sizeof(char));
//	printf("p0�д�ŵĵ��ڴ��ַΪ��%p, p0ָ���ֵΪ��%d\n", p0, *p0);
//	printf("(p0 + 1)�д�ŵĵ��ڴ��ַΪ��%p, (p0 + 1)ָ���ֵΪ��%d\n", p0 + 1, *(p0 + 1));
//
//	return 0;
//}

//int main() {     // �ĸ��ֽڷֱ��Ӧ�ĵ�ַ��  203      202      201      200                  
//	int a = 1025; // 1025�Ķ����Ʊ�ʾ��ʽ��00000000 00000000 00000100 00000001
//	int* p = &a;
//
//	printf("int���͵�ռ�ݿռ��СΪ��%zu\n", sizeof(int));
//	printf("p�д�ŵĵ��ڴ��ַΪ��%p, pָ���ֵΪ��%d\n", p, *p);
//	printf("(p + 1)�д�ŵĵ��ڴ��ַΪ��%p, (p + 1)ָ���ֵΪ��%d\n", p + 1, *(p + 1));
//
//	void* p0;  // 
//	p0 = p;    // ��ָ���ǲ���Ҫ����ǿ������ת����.
//	printf("p0��ֵΪ��%p\n", p0);
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


// �ֱ�ȷ�������������еġ�a���ĵ�ַ, ������ǲ�ͬ�ĵ�ַ.
//void Incrment(int a) {
//	a = a + 1;
//	printf("Incrmen�����С�a���ĵ�ַΪ��%p\n", &a);
//}
//
//int main() {
//	int a;
//	a = 10;
//	Incrment(a);
//	printf("main�����С�a���ĵ�ַΪ��%p\n", &a);
//	return 0;
//}


// ��ֵ����
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

// �����ô���.
//void Incrment(int* p) {
//	*p = (*p) + 1;
//}
//
//int main() {
//	int a = 10;
//	Incrment(&a);
//	printf("a = %d", a);
//}


// ֤����p���͡�a������ͬһ������. (��ʵҲ����ô��֤��, һ��ʼ���ò�ͬ�����еġ�a������֤����.)
//void Incrment(int* p) {
//	p = NULL;
//}
//
//int main() {
//	int a = 10;
//	Incrment(&a);
//	printf("a = %d", a);
//}












// 6. ָ��������

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
//	printf("A[0]�ĵ�ַΪ��%p\n", p);        // A�ĵ�ַ��A[0]�ĵ�ַ��һ����, �����������Ԫ�ص�ַ�ֱ���Ϊ����ġ�����ַ��
//	printf("A[0]��ֵΪ��%d\n", *p);
//	printf("A[1]�ĵ�ַΪ��%p\n", p + 1);    // ����δ����п��Է��������б�ʾ�ڡ�i��λ�õĵ�ַ����ֵ
//	printf("A[1]��ֵΪ��%d\n", *(p + 1));   // ��ʾ��ַ��1. &A[i] ���� A + i;
//	printf("A�ĵ�ַΪ��%p\n", q);           // ��ʾֵ��1. A[i] ���� *(A + i);
//	printf("A[1]�ĵ�ַΪ��%p\n", q + 1);
//	printf("A[1]��ֵΪ��%d\n", *(q + 1));
//  return 0;
//}

//int main() {
//	int arr[] = { 2, 4, 5, 8, 1 };
//	int i;
//	int* p = arr;
//	p++;
////  arr++;
//	for (int i = 0; i < 5; i++) {
//		printf("arr[%d]��Ӧ�ĵ�ַΪ��%p\n", i, arr + i);
//		printf("arr[%d]��Ӧ�ĵ�ַΪ��%p\n", i, &arr[i]);
//		printf("arr[%d]��Ӧ��ֵΪ��%d\n", i, *(arr + i));
//		printf("arr[%d]��Ӧ��ֵΪ��%d\n", i, arr[i]);
//	}
//	return 0;
//}



















// 7. ������Ϊ��������
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



// ע�⣺������һ����Ҫ��ע�ĵط�����64λ�Ĳ���ϵͳ��, һ��ָ��Ĵ�С��8���ֽ�, ������86λ�Ĳ���ϵͳ��, һ��ָ����4���ֽ�.
// ����Ҫ�����Ľ���ǡ�3��, �Ǿ�Ӧ���ǲ���ϵͳ��ԭ��, �޸�Ϊ64λ�Ĳ���ϵͳ����.
//int sumOfArr(int arr[]) {
//	int sum = 0;
//	int size = sizeof(arr) / sizeof(arr[0]);   
//	printf("sumOfArr�����е� arr��С = %d, arr[0]��С = %d\n", sizeof(arr), sizeof(arr[0]));
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
//	printf("main�����е� arr��С = %d, arr[0]��С = %d\n", sizeof(arr), sizeof(arr[0]));
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













// 8. ָ�����ַ�����(��)

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
//	printf("C���ֽ���Ϊ��%zu\n", sizeof(C));
//	int len = strlen(C);
//	printf("C�ĳ���Ϊ��%d", len);
//	return 0;
//}


// �����ָ�����Ƶĵط�.
//int main() {
//	char c1[] = "hello";
//	char* c2;
//	c2 = c1;     // ��c2ָ��ָ����c1��Ӧ�ĵ�ַ. ������Ҳ����ֱ����c2���в���.
//
//	c2[0] = 'y';
//	*(c2) = 'a';  // Ч����һ����.
//
//	printf("%s", c1);
//	return 0;
//}

// �����ָ�벻ͬ�ĵط�.
//int main() {
//	char c1[] = "hello";
//	char* c2;
//	c1 = c2;               // �������ǲ��Ե�, ���鲻��ָ��һ��ָ��. Ҳ���ܽ��С�+, -��, ���ǲ��Ե�, 
//  c1 = c1 + 1;           // �������ǲ��Ե�, �ᷢ���������.
//	printf("%s", c1);      // ������Ҫ�����Ǻ������֪��ʲôʱ������ʹ�õ���ָ��, ʲôʱ��ʹ�õ�������.
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













// 9. ָ�����ַ�����(��)

//int main() {
//	char* c = "uaiegrbae";  // ����ᱻ�洢�ڡ���������, ���Բ���ֱ�ӽ����޸�
//	//	char c[10] = "Hello";   // �����Ŀ��Խ����޸�.
//
//	printf("%s", c);
//	return 0;
//}













// 10. ָ�����ά����

//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	int* p = arr;
//	printf("%p\n", (p + 1));
//	printf("%p\n", (arr + 1));
// 	return 0;
//}

//int main() {
//	// ��Ҫ����һ��ָ��һά�����ָ��(���е�һά�����������������).
//	// b ���ص���һ��ָ��һά����(���а���3������Ԫ��)��ָ��, ���Բ����� int���� ����.
//	// ָ��������Ǻ���Ҫ��!!!!!!!!!!!!!!!!!!!!!
//	int b[2][3];
//
////  int* p = b;        // ��������ʵ�ǲ��Ե�, ���Ǳ����������Ż���, ָ����ǡ�b[0][0]��.
//	int (*p)[3] = b;   // ����һ��ָ��һά�����ָ��.
//
//
////	 ����������⣺
////	 b �� b[0], b[1] �����������,
////	 b[0] ��ͬʱ�� b[0][0], b[0][1], b[0][2] �����������
////	 b[1] ��ͬʱ�� b[1][0], b[1][1], b[1][2] �����������
//
//	printf("%p\n", b);         // b(b[]�Ļ���ַ) ָ����ǡ�b[0]��, ���������ַ�ǣ�400;
//	printf("%p\n", &b[0]);     // b[0] ��Ӧ�ĵ�ַ�����Լ��ĳ�ʼ��ַ, ���������ַ�ǣ�400;
//	printf("%p\n", *b);        // *b ��ʾ���ǽ������b[0]���д洢�Ķ���, ��b[0]���ǡ�b[0][]������Ļ���ַ, ����ֱ�������b[0][0]���ĵ�ַ, ���������ַ�ǣ�400;
//	printf("%p\n", b[0]);      // ��b[0]����ʾ���ǡ�b[0]���ǡ�b[0][]������Ļ���ַ, ����ֱ�������b[0][0]���ĵ�ַ, ���������ַ�ǣ�400;
//	printf("%p\n", &b[0][0]);  // &b[0][0] ��ʾȡ��b[0][0]��Ӧ�ĵ�ַ, ���������ַ�ǣ�400;
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

















// 11. ָ�����ά����
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













// 11. ָ���붯̬�ڴ� - ջ vs ��

//int main() {
//	int a;
//
//	int* p = (int*)malloc(sizeof(int));
//	*p = 10;        // ʹ�ö����ڴ��Ψһ��ʽ������ͨ������.
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
//    // ��������Ĵ�С
//    printf("����������Ĵ�С: ");
//    scanf("%d", &n);
//
//    // ��̬�����ڴ�
//    arr = (int*)malloc(n * sizeof(int));
//
//    // ����ڴ��Ƿ����ɹ�
//    if (arr == NULL) {
//        printf("�ڴ����ʧ��\n");
//        return 1;
//    }
//
//    // ��������Ԫ��
//    printf("������ %d ������:\n", n);
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // ��ӡ����Ԫ��
//    printf("�������������: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//
//    // �ͷ��ڴ�
//    free(arr);
//
//    return 0;
//}














// 13. ָ��Ͷ�̬�ڴ� - malloc calloc realloc free

//// ʹ�á�malloc���������ж�̬�ڴ����
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

// ʹ�á�calloc���������ж�̬�ڴ���� (��ʵҲû��ʲô����, ��������������).
//int main() {
//	int n;
//
//	scanf("%d", &n);
//
//	int* arr = (int*)calloc(n, sizeof(int));
//
//	//for (int i = 0; i < n; i++) {
//	//	arr[i] = i + 1;                 // ������������г�ʼ��, �ͻ�ֱ�ӽ��и�ֵΪ��0��. malloc��������, ��ֱ����ʾ����ֵ.
//	//}
//
//	for (int i = 0; i < n; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//// ʹ�á�free���������ж�̬�ڴ����
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
//		printf("%d ", arr[i]);       //����ᷢ��, ��Ȼʹ���ˡ�free������, ������ʵ���ǿ��Է��ʵ�, ֻ�Ƿ��ʵ�ֵû��ʲô����.
//	}                                // ����һ��Ҫֻ��ʹ�á��Ѿ�����֮�󡱵��ڴ�, ��Ȼ�������ڡ��ڰ��������ʲôҲ��֪��.
//	return 0;
//}

//// ʹ�á�realloc���������ж�̬�ڴ����. (��������)
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
//	printf("\nԭ�����ڴ�ռ䣺%p �������ڴ�ռ䣺%p\n", arr, arr1);
//
//	for (int i = 0; i < 2 * n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}


////ʹ�á�realloc���������ж�̬�ڴ����. (��С�����)
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
//    // Ȼ����realloc ����Ϊ���ܻᵼ��һЩ����Ľ�����ر����ڼ����ڴ��С������¡�
//	// ������˵��realloc ���ܻὫԭʼ�ڴ������ݸ��Ƶ��µ��ڴ���У���ֻ�����´�С��Χ�ڵ����ݡ�
//	// ����µ��ڴ���СС��ԭʼ�ڴ���С��realloc �����Զ��ضϳ����´�С�Ĳ��֣����Ǳ�����Щ���ݡ�
//	printf("\nԭ�����ڴ�ռ䣺%p �������ڴ�ռ䣺%p\n", arr, arr1);
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


//////ʹ�á�realloc���������ж�̬�ڴ����. (�á�realloc������ʵ�֡�malloc������).
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
//	int* arr1 = (int*)realloc(NULL, n * sizeof(int));     //�á�realloc������ʵ�֡�malloc������, �����ռ�.
//	printf("\nԭ�����ڴ�ռ䣺%p �������ڴ�ռ䣺%p\n", arr, arr1);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}
//
//
//////ʹ�á�realloc���������ж�̬�ڴ����. (�á�realloc������ʵ�֡�free������).
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
//	int* arr1 = (int*)realloc(arr, 0);     //�á�realloc������ʵ�֡�free������, �ͷſռ�.
//	printf("\nԭ�����ڴ�ռ䣺%p �������ڴ�ռ䣺%p\n", arr, arr1);
//
//	for (int i = 0; i < n; i++) {
//		printf("%d\n", arr1[i]);
//	}
//	return 0;
//}



















//// 14. ָ���붯̬�ڴ� - �ڴ�й¶

//int cash = 100;
//void play(int bet) {
//	//char C[3] = { 'J', 'Q', 'K' };
//	char* C = (char*)malloc(3 * sizeof(char));
//	C[0] = 'J';
//	C[1] = 'Q';
//	C[2] = 'K';
//	printf("ϴ����..............\n");
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
//	printf("������1, 2, 3");
//	scanf("%d", &playersGuess);
//	if (C[playersGuess] == 'Q') {
//		cash += 3 * bet;
//		printf("��Ӯ��, ������ӵ�е��ֽ�Ϊ��%d", cash);
//	} else {
//		cash -= bet;
//		printf("������, ������ӵ�е��ֽ�Ϊ��%d", cash);
//	}
//	free(C);
//}
//
//int main() {
//	int bet;
//	printf("��ӭ������������Ϸ\n");
//	printf("������ӵ�е��ֽ�Ϊ��%d\n", cash);
//
//	while (cash > 0) {
//		printf("��������Ҫ�Ķ���Ǯ? $");
//		scanf("%d", &bet);
//		if (bet == 0 || bet > cash) {
//			break;
//		}
//		play(bet);
//	}
//
//	return 0;
//}




















// 15. ��������ָ��

// ����֮ǰ�Ĵ���
//void printfHelloWorld() {
//	printf("hello, world\n");
//}
//
//int* Add(int* a, int* b) {
//	//printf("Add������a�ĵ�ַΪ��%p\n", &a);
//	//printf("main������a�ĵ�ַΪ��%p\n", a);
//	//printf("Add������aָ���ֵΪ��%d\n", *a);
//	int c = (*a) + (*b);
//	return &c;
//}
//
// 
//int main() {
//	int a = 2;
//	int b = 4;
//	//printf("main������a�ĵ�ַΪ��%p\n", &a);
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
//// ����֮��Ĵ���
//void printfHelloWorld() {
//	printf("hello, world\n");
//}

//int* Add(int* a, int* b) {
//	//printf("Add������a�ĵ�ַΪ��%p\n", &a);
//	//printf("main������a�ĵ�ַΪ��%p\n", a);
//	//printf("Add������aָ���ֵΪ��%d\n", *a);
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
//	//printf("main������a�ĵ�ַΪ��%p\n", &a);
//	int* ptr = Add(&a, &b);
//	printfHelloWorld();
//
//	printf("sum = %d", *ptr);
//
//	return 0;
//}






















// 16. ����ָ��

// ����ָ�����д��ʽ
//int Add(int a, int b) {
//	return a + b;
//}
//
//int main() {
//	int (*p)(int, int);
//	p = Add      // ��δ��������һ����һ����, ֻʹ�ú�������Ҳ�᷵�غ����ĵ�ַ.
//	p = &Add;    // ���ڡ�p����ָ���ˡ�Add������.
//
//	return 0;
//}

//// ����ָ��ĵ��ú����ķ�ʽ
//int Add(int a, int b) {
//	return a + b;
//}
//
//int main() {
//	int c;
//	int (*p)(int, int);
//	p = &Add;    // ���ڡ�p����ָ���ˡ�Add������.
////  c = (*p)(2, 3);
//	c = p(2, 3);
//	printf("%d", c);
//
//	return 0;
//}


////����ʵ��
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