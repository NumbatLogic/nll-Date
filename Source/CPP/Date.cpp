#include "Date.hpp"
#include <time.h>

namespace NumbatLogic
{
	Date* Date::CreateFromUnixDate(unsigned int nDate)
	{
		time_t nTimeTDate = nDate;
		struct tm* pTmDate = gmtime(&nTimeTDate);

		Date* pDate = new Date();
		pDate->m_nYear = pTmDate->tm_year + 1900;
		pDate->m_nMonth = pTmDate->tm_mon + 1;
		pDate->m_nDay = pTmDate->tm_mday;

		return pDate;
	}
}