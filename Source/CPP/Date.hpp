#pragma once

namespace NumbatLogic
{
	class Date
	{
		public: int m_nYear;
		public: int m_nMonth;
		public: int m_nDay;

		public: static Date* CreateFromUnixDate(unsigned int nDate);
	};
}