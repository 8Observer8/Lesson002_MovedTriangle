#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>
#include <QOpenGLShaderProgram>

class Triangle
{
public:
    Triangle( QOpenGLShaderProgram *program,
              int vertexAttr, int colorAttr );

    void draw();

    void setX0( float x );
    void setY0( float y );

    float x0() const;
    float y0() const;

private:
    void initVertices();
    void initColors();

    std::vector<float> m_vertices;
    std::vector<float> m_colors;

    QOpenGLShaderProgram *m_program;
    int m_vertexAttr;
    int m_colorAttr;

    float m_x0;
    float m_y0;
    float m_size;
};

#endif // TRIANGLE_H
