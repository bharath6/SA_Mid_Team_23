// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the BENIFICIERYAPPLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// BENIFICIERYAPPLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef BENIFICIERYAPPLIB_EXPORTS
#define BENIFICIERYAPPLIB_API __declspec(dllexport)
#else
#define BENIFICIERYAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll


extern BENIFICIERYAPPLIB_API int nBenificieryapplib;

BENIFICIERYAPPLIB_API int fnBenificieryapplib(void);

namespace Benificieryapplib {
	class BENIFICIERYAPPLIB_API CBenificieryapplib {
	public:
		static void Benficieryadd(void);

	};
}
