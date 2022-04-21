
#include "TestFile.h"
#include <string>

void TestFile::GetFile()
{
    cout << "����������ļ���������ֱ����ק���ô��ڣ��ļ��������пո񣩣�" << endl;
    cin >> FileName;
}

void TestFile::OutFileName()
{
    cout << FileName << endl;
}

void TestFile::ClacFileSize()
{
    ifstream TestFileObj(FileName, ios::in);
    if (TestFileObj.is_open())
    {
        TestFileObj.seekg(0, TestFileObj.end);
        size = TestFileObj.tellg();
    }
    TestFileObj.close();
}

void TestFile::CacheFileData()
{
    ifstream TestFileObj(FileName, ios::in);
    while (TestFileObj)
    {
        char LineData[MAX_LINE_DATA] = { 0 };
        TestFileObj.getline(LineData, sizeof(LineData));
        cout << LineData;
    }
    TestFileObj.close();
}

char *TestFile::ThisFile()
{
    string file(FileName);
    if (file.empty())
    {
        return NULL;
    }
    return FileName;
}

char* TestFile::GetLineData()
{
    return LineData;
}

void TestFile::GetNextLine(ifstream *File)
{
    File->getline(LineData, MAX_LINE_DATA);
    string Line(LineData);
    cout << Line.length();
    cout << Line.data();
}

void TestFile::InitFile()
{
    GetFile();
    OutFileName();
}
