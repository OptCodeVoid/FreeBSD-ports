--- third_party/blink/renderer/core/frame/web_frame_test.cc.orig	2022-07-22 17:30:31 UTC
+++ third_party/blink/renderer/core/frame/web_frame_test.cc
@@ -6331,7 +6331,7 @@ TEST_F(WebFrameTest, DISABLED_PositionForPointTest) {
   MoveCaretStaysHorizontallyAlignedWhenMoved
 #endif
 // TODO(crbug.com/1317375): Build these tests on all platforms.
-#if !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS)
+#if !BUILDFLAG(IS_MAC) && !BUILDFLAG(IS_LINUX) && !BUILDFLAG(IS_CHROMEOS) && !BUILDFLAG(IS_BSD)
 TEST_F(WebFrameTest, MAYBE_SelectRangeStaysHorizontallyAlignedWhenMoved) {
   RegisterMockedHttpURLLoad("move_caret.html");
 
@@ -6710,7 +6710,7 @@ TEST_F(CompositedSelectionBoundsTest, SVGBasic) {
 TEST_F(CompositedSelectionBoundsTest, SVGTextWithFragments) {
   RunTest("composited_selection_bounds_svg_text_with_fragments.html");
 }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
 #if !BUILDFLAG(IS_ANDROID)
 TEST_F(CompositedSelectionBoundsTest, Input) {
   web_view_helper_.GetWebView()->GetSettings()->SetDefaultFontSize(16);
