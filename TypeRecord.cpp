
#include <ctime>
#include <iomanip>
#include <iostream>
#include <fstream>
#include "TypeRecord.h"

void TypeRecord::InitRecordFile(char* typefile)
{
    std::time_t t = std::time(0);
    char* loc = strrchr(typefile, '.');
    if (NULL == loc)
    {
        cout << "文件格式错误！！！" << endl;
        return;
    }
    int filenlen = loc - typefile;
    memcpy(RecordFile, typefile, filenlen);
    snprintf(RecordFile + filenlen, MAX_FILENAME_LEN, "_%lld.rd", t);
}

void TypeRecord::WriteRecordFile(const char* typedata, size_t len)
{
    ofstream RdFile(RecordFile, ios::app);
    RdFile.write(typedata, len);
    RdFile << "\n";
    RdFile.close();
}
