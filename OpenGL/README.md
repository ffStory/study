OpenGL网址
https://learnopengl-cn.github.io/
https://learnopengl.com/


1 源码构建GLFW
https://www.glfw.org/download.html

参考https://blog.csdn.net/lm409/article/details/78420044
glfw_dir=GLFW跟目录

cd glfw_dir
mkdir build
cd build
cmake ../
make
make install // 这一步是可选的，添加头文件到/usr/local/include  添加库文件到 /usr/local/lib

我们需要的是glfw_dir/include里的文件 和 glfw_dir/build/src/libglfw3.a 文件
需要配置xcode工程
Header Search Path: glfw_dir/include
Library Search Path: glfw_dir/build/src

2 配置GLAD
https://glad.dav1d.de/

glad_dir = GLAD文件根目录
需要配置xcode工程
Header Search Path: glad_dir/include

另外 glad_dir/src/glad.c 文件需要拖到xcode工程里

至此环境配好

