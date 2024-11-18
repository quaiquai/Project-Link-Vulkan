#ifndef LDEVICE_H
#define LDEVICE_H

#include <set>
#include "utilObjects.h"
#include "globals.h"

void createLogicalDevice(VkPhysicalDevice &pdevice, VkDevice &device, VkSurfaceKHR &surface, VkQueue &graphicsQueue, VkQueue &presentQueue);
#endif