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
#define INT_MAX 2147483647
#define INT_MIN -2147483648

using namespace std;

void integerOver(string value) {
   
	int fontSize;
    fontSize = atoi(value.c_str());
    if(fontSize <= INT_MAX && fontSize >= INT_MIN){
        	printf("%d\n", fontSize);
    }else{
        printf("out of bounds for integer");
    }
}

int main(){
    string value = "-214748364900";
    integerOver(value);
}