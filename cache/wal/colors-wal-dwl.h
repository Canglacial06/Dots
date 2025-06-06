/* Taken from https://github.com/djpohly/dwl/issues/466 */
#define COLOR(hex)    { ((hex >> 24) & 0xFF) / 255.0f, \
                        ((hex >> 16) & 0xFF) / 255.0f, \
                        ((hex >> 8) & 0xFF) / 255.0f, \
                        (hex & 0xFF) / 255.0f }

static const float rootcolor[]             = COLOR(0x0b0404ff);
static uint32_t colors[][3]                = {
	/*               fg          bg          border    */
	[SchemeNorm] = { 0xc2c0c0ff, 0x0b0404ff, 0x665454ff },
	[SchemeSel]  = { 0xc2c0c0ff, 0x7185B9ff, 0x94778Dff },
	[SchemeUrg]  = { 0xc2c0c0ff, 0x94778Dff, 0x7185B9ff },
};
