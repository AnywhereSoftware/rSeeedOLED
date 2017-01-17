#pragma once
#include "B4RDefines.h"
#include "SeeedOLED.h"
//~version: 1.00
namespace B4R {
	//~shortname: SeeedOLED
	class B4RSeeedOLED {
		public:
			void Initialize();
			void SetTextXY(Byte Row, Byte Column);
			void ClearDisplay();
			void SetBrightness (Byte Brightness);
			void PutString(B4RString* Str);
			void SetNormalDisplay();
			void SetInverseDisplay();
			void SetPageMode();
			
	};
	
}