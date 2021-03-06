// CGHWZbuffer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "GLHandle.h"

using namespace std;

int main(int argc, char* argv[])
{
	string filename = "bunny-quad.obj";
	// cube-
	// bunny-
	// aircraft-
	if (2 == argc && NULL != argv[1]) {
		filename = string(argv[1]);
		cout << filename << endl;
	}
	cout << filename << endl;

	Model model(filename);

	ISLZBuffer slzBuffer;
	slzBuffer.SetWidthHeight(1000, 1000);
	model.ResetModelSize(1000, 1000);
	slzBuffer.Scan(model);

	GLHandleInit(&model, &slzBuffer);
	GLHandleRun();

	return 0;
}