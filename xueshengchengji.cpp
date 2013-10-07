
//#include "stdafx.h"
#include <iostream>
using namespace std;
struct Student{
    char name[20];
	int chengji;
	char xuanke[20];
};
Student student[100];
int modelcount=100;

void list();
void addstudent();
void deletestudent();
void addgrade();
int find(char* name);
void input(struct Student &student);

int main()
{
	int action;
	do{
	     cout<<"    菜单    "<<endl;
		 cout<<"(1)学生名单"<<endl;
		 cout<<"(2)添加学生"<<endl;
		 cout<<"(3)删除学生"<<endl;
		 cout<<"(4)录入成绩"<<endl;
		 cout<<"(5)退出程序"<<endl;
		 cin>>action;
		 switch(action){
		 case 1:
			    list();
				break;
         case 2:
			    addstudent();
				break;
         case 3:
			    deletestudent();
				break;
		 case 4:
			    addgrade();
				break;
		 case 5:
			   return 0;
		 default:
			   cout<<"您输入了错误的信息"<<endl;
			   //system(pause); 

		 }
	}while(1);
	}


	void list(){
	cout<<"姓名"<<"成绩"<<"选课"<<endl;
	for(int i=0;i<modelcount;i++){
		cout<<student[i].name<<"\t";
		cout<<student[i].chengji<<endl;
		cout<<student[i].xuanke<<endl;
	};
	}
	void addstudent(){
		struct Student aa;
		input(aa);
		int i=find(aa.name);
		if(i==modelcount){
		    strcpy(student[i].name  ,  aa.name);
			student[i].chengji=aa.chengji;
			//student[i].xuanke=aa.xuanke;
			strcpy(student[i].xuanke  ,  aa.xuanke);
			modelcount++;
		}  else{
		         //student[i].name+=student.name;
		}
	}

	void deletestudent(){
	    struct Student student;
		input(student);
		int i=find(student.name);
		if(i==modelcount){
			cout<<"查无此人"<<endl;
		} else{
			   //student[i].name-=student;
		}
	}
	
	void addgrade(){
	    struct Student aa;
	    input (aa);
	    int i=find(aa.name);
	    student[i].chengji=aa.chengji;
	}


	void input(struct Student &student){
		cout<<"姓名";
		cin>>student.name;
		cout<<"成绩";
		cin >>student.chengji;
		cout<<"选课";
		cin>>student.xuanke;
	}

	int find(char* name){
		int i;
		for(i=0;i<modelcount;i++){
			if(strcmp(student[i].name,name)==0){
			break;
			}
		}
	 return i;
	}
