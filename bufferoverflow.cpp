#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
//#include "platform/CCFileUtils.h"
//#include "base/ccUtils.h"

//#include "3d/CCObjLoader.h"
#define TINYOBJ_SSCANF_BUFFER_SIZE  (4096)

using namespace std;

int test(){
    char value1[512] = "abcdefg ...";
    char value2[512] = "abcdefgg ...";
    setError(value1, value2);
}

void setError(const char *value1, const char *value2) {
   
	char message[256];
	int length;
	strcpy(message, value1);
	length = (int) strlen(value1);
	if (value2) strncat(message + length, value2, 255 - length);
	
}
