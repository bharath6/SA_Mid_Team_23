// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the WELCOMEPAGEUI_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// WELCOMEPAGEUI_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef WELCOMEPAGEUI_EXPORTS
#define WELCOMEPAGEUI_API __declspec(dllexport)
#else
#define WELCOMEPAGEUI_API __declspec(dllimport)
#endif

// This class is exported from the dll


extern WELCOMEPAGEUI_API int nWelcomepageUI;

WELCOMEPAGEUI_API int fnWelcomepageUI(void);

namespace welcomepageUIlibrary {
	class WELCOMEPAGEUI_API CWelcomepageUI {
	public:
		static void homepage(void);
		static void showdetails(void);
		static void createaccount(void);
		static void mobilebanking(void);

	};
}
