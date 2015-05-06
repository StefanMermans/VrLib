#pragma once

#include "ContainerComponent.h"

namespace vrlib
{
	namespace json { class Value;  }
	namespace gui
	{
		namespace components
		{
			class Panel : public ContainerComponent
			{
			public:
				Panel();
				Panel(const std::string &jsonFileName);

				virtual void draw(const glm::mat4 &parentMatrix) override;
				void Panel::loadJson(const json::Value &config);


			};
		}
	}
}