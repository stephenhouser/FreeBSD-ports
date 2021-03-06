--- src/kkconv.cpp.orig	2002-06-15 14:05:09 UTC
+++ src/kkconv.cpp
@@ -18,10 +18,12 @@
 #  include <alloca.h>
 # endif
 #endif
+#include <stdlib.h>
+#include <string.h>
 
 // キャラクタコード32から、
 //このソースはEUCで書かれている。
-static char *ascii_wide_tab[]={
+static const char *ascii_wide_tab[]={
     0,"！","”","＃","＄","％","＆","’",
     "（","）","＊","＋","，","−","．","／",
     "０","１","２","３","４","５","６","７",
@@ -325,9 +327,9 @@ KKContext *createKKContext(XimIC *ic)
     return c;
 }
 
-char **getKKIcon()
+const char **getKKIcon()
 {
-    char **c;
+    const char **c;
     c = NULL;
     if (current_conv) {
         c = current_conv->getIcon ();
@@ -338,7 +340,7 @@ char **getKKIcon()
 // tool barの仮名漢字変換のボタンが押された。
 void onPushIcon()
 {
-    char **c=0;
+    const char **c=0;
     if (current_conv) {
 	c = current_conv->getIcon ();
 	if (c) {
