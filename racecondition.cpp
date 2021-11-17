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
#include <unistd.h>
#include <sys/stat.h>
#include <stdio.h>
#include <errno.h>
//#include "platform/CCFileUtils.h"
//#include "base/ccUtils.h"

//#include "3d/CCObjLoader.h"
#define TINYOBJ_SSCANF_BUFFER_SIZE  (4096)

using namespace std;

bool raceCondition(){
    char fullpath[256] = {0};
    ssize_t length = readlink("/proc/self/exe", fullpath, sizeof(fullpath)-1);

    if (length <= 0) {
        return false;
    }
 }
