#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	const char* savePath = "/home/pppppp/sssss";
         
    if(remove(savePath) == 0)
	{
	    cout<<"删除成功"<<endl;        
    }
    else
    {
        cout<<"删除失败"<<endl;        
		perror("remove");
	}

	cout << savePath << endl;
	return 0;	
}
