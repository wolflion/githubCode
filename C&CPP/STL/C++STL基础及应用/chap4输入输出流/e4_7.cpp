/*
 * 20160426
 * e4_7.cpp 写文本文件：把学生成绩信息保存至文件
 */

 #include<iostream>
 #include<fstream>
 using namespace std;

struct STUDENT
{
	char strName[20];
	int nGrade;
};

 int main()
 {
 	ofstream out;
 	out.open("d:\\a.txt"); // 打开或创建a.txt文本文件
 	STUDENT st1 = {"张三",90};
 	STUDENT st2 = {"李四",80};

 	out << st1.strName << "\t" << st1.nGrade << endl;
 	out << st2.strName << "\t" << st2.nGrade << endl;

 	out.close();
 	system("pause");
 	return 0;
 }