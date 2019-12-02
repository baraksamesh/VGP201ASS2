
#include "igl/opengl/glfw/renderer.h"
#include "tutorial/sandBox/inputManager.h"

int main(int argc, char *argv[])
{
  Display *disp = new Display(1000, 800, "Wellcome");
  Renderer renderer;
  igl::opengl::glfw::BetterViewer viewer;
  //viewer.load_mesh_from_file("D:/school/animation/EngineForAnimationCourse/tutorial/data/sphere.obj");
  //viewer.load_mesh_from_file("D:/school/animation/EngineForAnimationCourse/tutorial/data/cube.obj");
  //viewer.load_mesh_from_file("D:/school/animation/EngineForAnimationCourse/tutorial/data/bunny.off");
  viewer.load();
  Init(*disp);
  viewer.initData();
  renderer.init(&viewer);
  disp->SetRenderer(&renderer);
  disp->launch_rendering(true);
  
  
  delete disp;
}
