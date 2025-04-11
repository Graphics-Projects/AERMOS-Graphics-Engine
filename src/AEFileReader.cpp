#include <AERMOSS/Util/AEFileReader.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
     std::string AEReadFile(const char* fillename){
          std::ifstream in(fillename, std::ios::binary);
	     if (in)
	     {
	     	std::string contents;
	     	in.seekg(0, std::ios::end);
	     	contents.resize(in.tellg());
	     	in.seekg(0, std::ios::beg);
	     	in.read(&contents[0], contents.size());
	     	in.close();
	     	return(contents);
	     }
	     throw(errno);
     }
AE_NAMESPACE_END()