// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MONEYTRANSFERAPPLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MONEYTRANSFERAPPLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MONEYTRANSFERAPPLIB_EXPORTS
#define MONEYTRANSFERAPPLIB_API __declspec(dllexport)
#else
#define MONEYTRANSFERAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll


extern MONEYTRANSFERAPPLIB_API int nMoneytransferapplib;

MONEYTRANSFERAPPLIB_API int fnMoneytransferapplib(void);

namespace Moneytransferapplib {
	class MONEYTRANSFERAPPLIB_API CMoneytransferapplib {
	public:
		static void moneytransfer(void);

	};
}
