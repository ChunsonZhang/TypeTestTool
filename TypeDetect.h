
#include <string>
#include "TypeTest.h"

using namespace std;

class TypeDetect
{
public:
	void ShowLine();
	void ResetTypeDataBuf();
	void GetTypeIn();
	string ThisTypeData();

private:
	char TypeInData[MAX_LINE_DATA] = {0};
protected:
};
