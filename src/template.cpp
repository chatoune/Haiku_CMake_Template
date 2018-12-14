

#include "template.h"

#include <dynamic.h>
#include "static.h"


namespace {
	const char* kAppSignature = "application/x-vnd.template";
}

template_haiku::template_haiku()
	:BApplication(kAppSignature)
{



}

int main() {
	
	std::cout << "Static function returns ";
	if(static_func() == true) {
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}

	std::cout << "Dynamic function return ";
	if(dynamic_func() == true) {
		std::cout << "true" << std::endl;
	} else {
		std::cout << "false" << std::endl;
	}

	template_haiku* my_app = new template_haiku();

	my_app->Run();

	delete my_app;
}
