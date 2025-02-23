#include "21kHz.hpp"


Plugin *pluginInstance;


void init(Plugin *p) {
	pluginInstance = p;
	
	// Add all Models defined throughout the pluginInstance
    p->addModel(modelPalmLoop);
	p->addModel(modelD_Inf);
    p->addModel(modelTachyonEntangler);

	// Any other pluginInstance initialization may go here.
	// As an alternative, consider lazy-loading assets and lookup tables when your module is created to reduce startup times of Rack.
}
