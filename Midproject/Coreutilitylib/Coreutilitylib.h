// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the COREUTILITYLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// COREUTILITYLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef COREUTILITYLIB_EXPORTS
#define COREUTILITYLIB_API __declspec(dllexport)
#else
#define COREUTILITYLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll



extern COREUTILITYLIB_API int nCoreutilitylib;

COREUTILITYLIB_API int fnCoreutilitylib(void);

namespace Coreutilitylib {
	class COREUTILITYLIB_API Ccoreutilitylib {
	public:
		static void generatenewaccountno(void);
		static void generateaccountfortrading(void);

	};
}
