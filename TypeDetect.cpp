
#include <iostream>
#include "TypeDetect.h"

void TypeDetect::ResetTypeDataBuf()
{
	memset(TypeInData, 0x00, sizeof(TypeInData));
}

void TypeDetect::GetTypeIn()
{
	ResetTypeDataBuf();
	cin >> TypeInData;
}

void TypeDetect::ShowLine()
{
	string TypeData(TypeInData);
	cout << TypeData.length() << " " << TypeData.data() << endl;
}

string TypeDetect::ThisTypeData()
{
	string ts(TypeInData);
	return ts;
}
