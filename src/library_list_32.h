#ifndef GO
#error Nope
#endif

GO("libpthread.so.0", libpthread)
GO("librt.so.1", librt)
#ifdef ANDROID
GO("libc.so", libc)
GO("libm.so", libm)
GO("libdl.so", libdl)
#else
GO("libc.so.6", libc)
GO("libm.so.6", libm)
GO("libdl.so.2", libdl)
#endif
GO("libresolv.so.2", libresolv)
GO("libresolv.so", libresolv)

GO("ld-linux.so.2", ldlinux)

GO("libGL.so", libgl)
GO("libGL.so.1", libgl)
GO("libGLX_nvidia.so.0", libgl)
GO("libGLU.so.1", libglu)
GO("libSDL-1.2.so.0", sdl1)
GO("libSDL2-2.0.so.0", sdl2)
GO("libSDL2_image-2.0.so.0", sdl2image)
GO("libSDL2_image.so", sdl2image)
GO("libasound.so.2", libasound)
GO("libasound.so", libasound)
GO("libfreetype.so.6", freetype)
GO("libfontconfig.so.1", fontconfig)

GO("libX11.so", libx11)
GO("libXext.so", libxext)
GO("libXfixes.so", libxfixes)
GO("libXrender.so", libxrender)
GO("libXcursor.so", libxcursor)
GO("libXcomposite.so", libxcomposite)
GO("libXi.so", libxi)
GO("libXrandr.so", libxrandr)
GO("libxrandr.so", libxrandr)
GO("libXss.so", libxss)
GO("libXxf86vm.so", libxxf86vm)
GO("libXinerama.so", xinerama)

GO("libX11.so.6", libx11)
GO("libXext.so.6", libxext)
GO("libXfixes.so.3", libxfixes)
GO("libXrender.so.1", libxrender)
GO("libXcomposite.so.1", libxcomposite)
GO("libXcursor.so.1", libxcursor)
GO("libXi.so.6", libxi)
GO("libXrandr.so.2", libxrandr)
GO("libxrandr.so.2", libxrandr)
GO("libXss.so.1", libxss)
GO("libXxf86vm.so.1", libxxf86vm)
GO("libXinerama.so.1", xinerama)

GO("libopenal.so.1", openal)
GO("libopenal.so.0", openal)
GO("libopenal.so", openal)
GO("openal.so", openal)

GO("libexpat.so.1", expat)
GO("libexpat.so", expat)

GO("libudev.so.0", udev0)
GO("libudev.so.1", udev1)
GO("libudev.so", udev1)
GO("libuuid.so.1", libuuid)

GO("crashhandler.so", crashhandler)
GO("libtcmalloc_minimal.so.0", tcmallocminimal)
GO("libtcmalloc_minimal.so.4", tcmallocminimal)
