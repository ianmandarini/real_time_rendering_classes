#version 460 core

// light-vertex-shader

layout( location = 0 ) in vec3 inPos;
layout( location = 1 ) in vec2 inUV;

out vec2 TexCoords;

void main()
{ 
  gl_Position = vec4(inPos, 1.0);
  TexCoords = inUV;
}
