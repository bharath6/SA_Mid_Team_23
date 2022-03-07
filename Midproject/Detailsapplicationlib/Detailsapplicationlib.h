// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the DETAILSAPPLICATIONLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// DETAILSAPPLICATIONLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef DETAILSAPPLICATIONLIB_EXPORTS
#define DETAILSAPPLICATIONLIB_API __declspec(dllexport)
#else
#define DETAILSAPPLICATIONLIB_API __declspec(dllimport)
#endif



extern DETAILSAPPLICATIONLIB_API int nDetailsapplicationlib;

DETAILSAPPLICATIONLIB_API int fnDetailsapplicationlib(void);

namespace DetailsApplicationlibrary {
	class DETAILSAPPLICATIONLIB_API CDetailsapplication {
	public:
		static void details(void);

	};
}