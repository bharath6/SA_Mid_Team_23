// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MOBILEBANKINGAPPLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MOBILEBANKINGAPPLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MOBILEBANKINGAPPLIB_EXPORTS
#define MOBILEBANKINGAPPLIB_API __declspec(dllexport)
#else
#define MOBILEBANKINGAPPLIB_API __declspec(dllimport)
#endif

// This class is exported from the dll


extern MOBILEBANKINGAPPLIB_API int nMobilebankingapplib;

MOBILEBANKINGAPPLIB_API int fnMobilebankingapplib(void);

namespace Mobilebankingapplib {
	class MOBILEBANKINGAPPLIB_API CMobilebankingapplib {
	public:
		static void Openmobileaccount(void);

	};
}
