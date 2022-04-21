#ifndef _TYPE_RECORD_H_
#define _TYPE_RECORD_H_

#include "TypeTest.h"

using namespace std;

class TypeRecord
{
public:
	void InitRecordFile(char* typefile);
	void WriteRecordFile(const char* typedata, size_t len);

private:
	char RecordFile[MAX_FILENAME_LEN] = { 0 };
protected:
};

#endif
