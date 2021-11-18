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
//#include "platform/CCFileUtils.h"
//#include "base/ccUtils.h"

//#include "3d/CCObjLoader.h"
#define TINYOBJ_SSCANF_BUFFER_SIZE  (4096)

using namespace std;

void racecond(const char *query, int access_flags) {
   
	access(query, access_flags);
	
}

int main(){

    long int  i;
    char buffer[60];
    FILE *fp;
    char * fn = "/tmp/XYZ";
    racecond(fn,1);
    for (i=0; i < 1000; i++){
        int a = i^2;
    }

    fp = fopen(fn, "a+");
    
    fwrite("\n", sizeof(char), 1, fp);
    
    fwrite(buffer, sizeof(char), strlen(buffer), fp);
    
    fclose(fp);
}
 