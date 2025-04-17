# 🌿 AERMOSS Graphics Engine

**AERMOSS** is a modern, modular C++ graphics engine designed for real-time rendering, game development, and simulation environments. Built using modern OpenGL, it combines a clean architecture, high-performance rendering, and editor capabilities — offering flexibility and power for both solo developers and advanced teams.

---

## ✨ Features

- 🔧 **Modular Architecture**  
  Clean separation between core engine systems like rendering, physics, audio, and UI.

- 🚀 **Modern OpenGL Rendering**  
  Built from scratch with support for shaders, PBR, framebuffers, and post-processing.

- 🧱 **Entity Component System (ECS)**  
  Lightweight and fast ECS using [entt](https://github.com/skypjack/entt).

- 🎨 **UI & Editor Tools**  
  Integrated [ImGui](https://github.com/ocornut/imgui) and [ImGuizmo](https://github.com/CedricGuillemet/ImGuizmo) for in-editor tools and debug panels.

- 🗂️ **Resource Management**  
  Efficient asset loading for models, textures, and fonts using Assimp, stb, and FreeType.

- 🎧 **Audio System**  
  Powerful sound system powered by OpenAL for 2D/3D spatial audio.

- 🧲 **Physics Engine**  
  Basic collision detection and physics simulation with custom colliders and rigidbodies.

- 📐 **Math & Utility Libraries**  
  Custom math library with logging, timing, and utility helpers.

---


---

## 🛠️ Getting Started

### ✅ Prerequisites

- **C++17** or higher
- **CMake 3.15+**
- **Git**
- **OpenGL 4.5+ compatible GPU and drivers**

### 📦 Clone the Repository

```bash
git clone --recursive https://github.com/Graphics-Projects/AERMOSS.git
cd AERMOSS

