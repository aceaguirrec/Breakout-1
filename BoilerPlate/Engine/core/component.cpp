#include "component.hpp"

namespace engine
{
	namespace core
	{
		component::component(const std::string& name){
			mName = name;
		}

		component::~component(){
			mOwner = nullptr;
		}

		void component::update(double deltaTime){
			i_update::update(deltaTime);
		}
	}
}