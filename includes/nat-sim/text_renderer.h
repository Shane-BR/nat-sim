#ifndef NS_TEXT_RENDERER
#define NS_TEXT_RENDERER

#include <cglm/types.h>
#include "constants.h"

#define FONT_DESCRIPTION_PATH ".." PATH_SEP "resources" PATH_SEP "fonts" PATH_SEP "dos437.fnt"
#define FONT_TEXTURE_PATH ".." PATH_SEP "resources" PATH_SEP "fonts" PATH_SEP "dos437.png"
#define TEXT_SHADER_FRAG_PATH ".." PATH_SEP "resources" PATH_SEP "shaders" PATH_SEP "text_f.glsl"
#define TEXT_SHADER_VERTEX_PATH ".." PATH_SEP "resources" PATH_SEP "shaders" PATH_SEP "text_v.glsl"

#define TEXT_SHADER_NAME "text"
#define FONT_TEXTURE_NAME "font"

void loadFont();
void renderText(const char* text, const vec2 position);

#endif