#ifndef NS_SPRITE_RENDERER
#define NS_SPRITE_RENDERER

#include <cglm/types.h>
#include "constants.h"

#define SPRITE_SHADER_FRAG_PATH ".." PATH_SEP "resources" PATH_SEP "shaders" PATH_SEP "sprite_f.glsl"
#define SPRITE_SHADER_VERTEX_PATH ".." PATH_SEP "resources" PATH_SEP "shaders" PATH_SEP "sprite_v.glsl"

#define SPRITE_SHADER_NAME "sprite"

void initSpriteRenderer(void);
void drawSprite(const char* texture, const vec2 position, const vec2 size, const vec4 color, const float rotate_degrees);
#endif