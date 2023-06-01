//#define GLEW_STATIC
//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//int main(void)
//{
//    GLFWwindow* window;
//
//    /* Initialize the library */
//    if (!glfwInit())
//        return -1;
//
//    /* Create a windowed mode window and its OpenGL context */
//    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
//    if (!window)
//    {
//        glfwTerminate();
//        return -1;
//    }
//
//    /* Make the window's context current */
//    glfwMakeContextCurrent(window);
//
//    /* Initialize GLEW */
//    if (glewInit() != GLEW_OK)
//    {
//        glfwTerminate();
//        return -1;
//    }
//
//    /* Set up the viewport */
//    int width, height;
//    glfwGetFramebufferSize(window, &width, &height);
//    glViewport(0, 0, width, height);
//
//    /* Set clear color to black */
//    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//
//    /* Loop until the user closes the window */
//    while (!glfwWindowShouldClose(window))
//    {
//        /* Render here */
//        glClear(GL_COLOR_BUFFER_BIT);
//
//        /* Set the color to red */
//        glColor3f(1.0f, 0.0f, 0.0f);
//
//        /* Begin drawing triangles */
//        glBegin(GL_TRIANGLES);
//
//        /* Specify the vertices of the triangle */
//        glVertex2f(-0.5f, -0.5f);
//        glVertex2f(0.0f, 0.5f);
//        glVertex2f(0.5f, -0.5f);
//
//        /* End drawing triangles */
//        glEnd();
//
//        /* Swap front and back buffers */
//        glfwSwapBuffers(window);
//
//        /* Poll for and process events */
//        glfwPollEvents();
//    }
//
//    glfwTerminate();
//    return 0;
//}
