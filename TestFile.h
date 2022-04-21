#ifndef _TEST_FILE_H_
#define _TEST_FILE_H_

#include <iostream>
#include <fstream>
#include "TypeTest.h"

using namespace std;

class TestFile
{
public:
    void GetFile();
    void ClacFileSize();
    void CacheFileData();
    char *ThisFile();
    void OutFileName();
    void InitFile();
    char* GetLineData();
    void GetNextLine(ifstream *File);

protected:
private:
    char FileName[MAX_FILENAME_LEN] = {0};
    size_t size;
    char* FileBuff;
    char LineData[MAX_LINE_DATA] = {0};
};

#endif // !_TEST_FILE_H_

