// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CREATETRADINGAPPLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CREATETRADINGAPPLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CREATETRADINGAPPLIB_EXPORTS
#define CREATETRADINGAPPLIB_API __declspec(dllexport)
#else
#define CREATETRADINGAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll


extern CREATETRADINGAPPLIB_API int nCreatetradingapplib;

CREATETRADINGAPPLIB_API int fnCreatetradingapplib(void);

namespace Createtradingapplib {
	class CREATETRADINGAPPLIB_API CCreatetradingapplib {
	public:
		static void createtradingacc(void);

	};
}

