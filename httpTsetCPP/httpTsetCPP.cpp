// httpTsetCPP.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "WininetHttp.h"

using namespace std;
int main()
{
	CWininetHttp req;

	string data = req.RequestJsonInfo("api.tubiaojia.cn/areaall");
	cout << data.c_str() << endl;

	system("pause");
    return 0;
}

