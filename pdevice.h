#ifndef PDEVICE_H
#define PDEVICE_H

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include "instance.h"
#include "utilObjects.h"
#include "globals.h"

#include <optional>
#include <set>
#include <string>

bool checkDeviceExtensionSupport(VkPhysicalDevice device);
bool isDeviceSuitable(VkPhysicalDevice device, VkSurfaceKHR surface);
void pickPhysicalDevice(VkPhysicalDevice &pdevice, VkSurfaceKHR &surface);
void createSurface(VkSurfaceKHR &surface, GLFWwindow* window);

#endif