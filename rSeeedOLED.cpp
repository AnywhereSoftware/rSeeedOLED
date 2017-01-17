#include "B4RDefines.h"
namespace B4R {
	void B4RSeeedOLED::Initialize() {
		SeeedOled.init();
	}
	void B4RSeeedOLED::SetTextXY(Byte Row, Byte Column) {
		SeeedOled.setTextXY(Row, Column);
	}
	void B4RSeeedOLED::ClearDisplay() {
		SeeedOled.clearDisplay();
	}
	void B4RSeeedOLED::SetBrightness (Byte Brightness) {
		SeeedOled.setBrightness(Brightness);
	}
	void B4RSeeedOLED::PutString(B4RString* Str) {
		SeeedOled.putString(Str->data);
	}
	void B4RSeeedOLED::SetNormalDisplay() {
		SeeedOled.setNormalDisplay();
	}
	void B4RSeeedOLED::SetInverseDisplay() {
		SeeedOled.setInverseDisplay();
	}
	void B4RSeeedOLED::SetPageMode() {
		SeeedOled.setPageMode();
	}
}