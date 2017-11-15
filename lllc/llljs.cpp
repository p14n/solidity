#include <iostream>
#include <emscripten.h>
#include <liblll/Compiler.h>

using namespace std;
 
extern "C" {
 const char* EMSCRIPTEN_KEEPALIVE doParseLLL(string const& _src){
  	return dev::eth::parseLLL(_src).c_str();
 } 
}

int main() {
	string str="Passing a string";
    string rtstr = doParseLLL(str);
	cout<<rtstr<<endl;
	return 0;
}