#ifndef FRAMEBUFFERS_H
#define FRAMEBUFFERS_H

#include <QOpenGLFunctions_3_3_Core>

class FrameBuffers:
    public QOpenGLFunctions_3_3_Core
{
public:
  enum FRAMEBUFFER_TEXTURE_TYPE {
      FRAMEBUFFER_TEXTURE_TYPE_POSITION,
      FRAMEBUFFER_TEXTURE_TYPE_NORMAL,
      FRAMEBUFFER_TEXTURE_TYPE_TRIANGLE_COORDINATES,
      FRAMEBUFFER_TEXTURE_TYPE_TEXTURE_COORDINATES,
      FRAMEBUFFER_TEXTURE_TYPE_MATERIAL_AMBIENT,
      FRAMEBUFFER_TEXTURE_TYPE_MATERIAL_DIFFUSE,
      FRAMEBUFFER_TEXTURE_TYPE_MATERIAL_SPECULAR,
      FRAMEBUFFER_NUM_TEXTURES
  };
  FrameBuffers();
  ~FrameBuffers();
  bool init(unsigned int width, unsigned int height);
  void bindForWriting();
  void bindForReading();
  void setReadBuffer(FRAMEBUFFER_TEXTURE_TYPE textureType);

  GLuint fbo;
  GLuint textures[FRAMEBUFFER_NUM_TEXTURES];
  GLuint depthTexture;

private:
};

#endif // FRAMEBUFFERS_H
