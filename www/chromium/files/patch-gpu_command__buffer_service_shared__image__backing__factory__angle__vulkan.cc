--- gpu/command_buffer/service/shared_image_backing_factory_angle_vulkan.cc.orig	2022-07-22 17:30:31 UTC
+++ gpu/command_buffer/service/shared_image_backing_factory_angle_vulkan.cc
@@ -703,7 +703,7 @@ bool SharedImageBackingFactoryAngleVulkan::CanUseAngle
   // TODO(penghuang): verify the scanout is the right usage for video playback.
   // crbug.com/1280798
   constexpr auto kSupportedUsages =
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
       SHARED_IMAGE_USAGE_SCANOUT |
 #endif
       SHARED_IMAGE_USAGE_GLES2 | SHARED_IMAGE_USAGE_GLES2_FRAMEBUFFER_HINT |
