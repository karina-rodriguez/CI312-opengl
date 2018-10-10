#ifndef CONTROLS_HPP
#define CONTROLS_HPP

void computeMatricesFromInputs(GLFWwindow* window, int width, int height);
glm::vec3 getPosition();
glm::mat4 getViewMatrix();
glm::mat4 getProjectionMatrix();

#endif
