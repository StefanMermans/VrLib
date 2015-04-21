#pragma once

#include <functional>

namespace vrlib
{
	namespace gui
	{
		namespace components
		{
			class CheckBox : public Component
			{
			public:
				CheckBox(bool initialValue, const std::function<void()> &callback = nullptr);

				bool value;
			};
		}
	}
}