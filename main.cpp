#include<iostream>
#include<algorithm>
#include<cstdlib>
using namespace std;
double data[1000],median,sum,average,variance;
int n; 
int main(); 
double f(double input){
	return input*input;
}
int vic(){
	cout<<"n>";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"x"<<i+1<<">";
		cin>>data[i];
		sum+=data[i];
	}
+-	average=sum/n;
	for(int i=0;i<n;i++){
		variance+=f(data[i]-average);	
	}
	variance/=n;
	cout<<"======================="<<endl;
	cout<<"average="<<average<<endl;
	cout<<"variance="<<variance<<endl;
	cout<<"======================="<<endl;
	//system("pause");
	return main();
}y>";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"x"<<i+1<<">";
		cin>>data[i];
		sum+=data[i];
	}
	average=sum/n;
	//for(int i=0;i<n;i++){
	//	variance+=f(data[i]-average);	
	//}
	variance/=n;
	cout<<"======================="<<endl;
	cout<<"average="<<average<<endl;
	//cout<<"variance="<<variance<<endl;
	cout<<"======================="<<endl;
	return main();
	//system("pause");
}
int help(){
	cout<<"===========help==========="<<endl;
	cout<<"h:帮助"<<endl;
//	cout<<"q:退出"<<endl;
//	cout<<"0:清屏"<<endl;
	cout<<"1:平均数"<<endl;
	cout<<"2:方差"<<endl;
	cout<<"3:中位数"<<endl; 
	cout<<"=========================="<<endl; 
	return main();
}
int mdn(){
	cout<<"n>";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<"x"<<i+1<<">";
		cin>>data[i];
	}、
	、 
	sort(data,data+n);
	if(n%2==0){
		median=(data[n/2]+data[n/2+1])/2;
	}
	else{
		median=data[n/2+1];
	}
	cout<<"======================="<<endl;
	cout<<"median="<<median<<endl;
	cout<<"======================="<<endl;
	//system("pause");
	return main();
}
signed main(){
	cout<<"Type h for help"<<endl;
	for(;;){
		cout<<"mode>";
		char mode;
		cin>>mode;
		switch(mode){
			case 'h':help();
//			case 'q':return 0;
//			case '0':clear();
			case '1':avg();
			case '2':vic();
			case '3':mdn();
			default:help();
		}	
	}
	
}
