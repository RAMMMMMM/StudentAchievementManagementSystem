#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h> 
using namespace std;
int main(){
	string o;
	system("mkdir C:\\ProgramData\\StudentAchievementManagementSystem");
	system("title 学生成绩管理系统");
	system("cls");
	cout<<"您尚未注册，请输入用户名：";
	cin>>o;
	ofstream fout; 
	fout.open("C:\\ProgramData\\StudentAchievementManagementSystem\\~Control.usr");
	if(!fout){
		MessageBox(NULL,"系统错误！\r\n请以管理员身份重新运行程序！","学生成绩管理系统",MB_ICONERROR|MB_SYSTEMMODAL|MB_SETFOREGROUND); 
		exit(0);
	}
	fout<<o<<endl;
	fout.close();
	cout<<"请输入密码：";
	cin>>o;
	//加密算法：ASCII码加123
	for(long long i=0;i<=o.size();i++)
		o[i]=o[i]+123;
	fout.open("C:\\ProgramData\\StudentAchievementManagementSystem\\~Control.passwd");
	if(!fout){
		MessageBox(NULL,"系统错误！\r\n请以管理员身份重新运行程序！","学生成绩管理系统",MB_ICONERROR|MB_SYSTEMMODAL|MB_SETFOREGROUND); 
		exit(0);
	}
	fout<<o<<endl;
	fout.close();
	system("cls");
	MessageBox(NULL,"注册成功！","学生成绩管理系统",MB_ICONINFORMATION|MB_SYSTEMMODAL|MB_SETFOREGROUND); 
	return 0;
}
