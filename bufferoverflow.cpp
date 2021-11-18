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

void setError(void *result, const char *s, ssize_t len) {
   
	memcpy (result, s, len);
	
}

int main(){
    char result[5];
    setError(result, "hello there this is more than 5", 32);
}


