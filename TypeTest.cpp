// TypeTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include "TestFile.h"
#include "TypeDetect.h"
#include "TypeRecord.h"

using namespace std;

int main()
{
    TestFile ObjFile;

    ObjFile.InitFile();
    cout << ObjFile.ThisFile() << endl;

    TypeRecord ObjRecord;
    ObjRecord.InitRecordFile(ObjFile.ThisFile());

    TypeDetect ObjTypeIn;

    ifstream TestTypeObj(ObjFile.ThisFile(), ios::in);
    while (TestTypeObj)
    {
        TestTypeObj.getline(ObjFile.GetLineData(), MAX_LINE_DATA);
        string Line(ObjFile.GetLineData());
        cout << Line.length() << " " << Line.data() << endl;
        ObjTypeIn.GetTypeIn();
        ObjTypeIn.ShowLine();
        ObjRecord.WriteRecordFile(ObjTypeIn.ThisTypeData().data(), ObjTypeIn.ThisTypeData().length());
    }
}
