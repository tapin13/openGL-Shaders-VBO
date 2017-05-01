/* 
 * File:   shader_utils.h
 * Author: tapin13
 *
 * Created on April 30, 2017, 11:29 PM
 */

#ifndef _SHADER_UTILS_H
#define _SHADER_UTILS_H

#include <GL/glew.h>

char *file_read(const char *filename);
void print_log(GLuint object);
GLuint create_shader(const char* filename, GLenum type);

#endif /* _SHADER_UTILS_H */

