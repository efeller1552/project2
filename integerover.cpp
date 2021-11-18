#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <cstddef>

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

void integerOver(string value) {
   
	int fontSize;
    fontSize = atoi(value.c_str());
	
}

int main(){
    string value = "2147483649";
    integerOver(value);
}