# load("@build_bazel_rules_apple//apple:apple.bzl",
#     "apple_dynamic_framework_import",
# )

# apple_dynamic_framework_import(
#     name = "MobileVLCKit",
#     framework_imports = glob([
#         "frameworks/MobileVLCKit.xcframework/**",
#     ]),
#     visibility = ["//visibility:public"],
# )

load("@build_bazel_rules_apple//apple:apple.bzl", "apple_dynamic_xcframework_import")


apple_dynamic_xcframework_import(
    name = "MobileVLCKit",
    xcframework_imports = glob(["MobileVLCKit-binary/MobileVLCKit.xcframework/**"]),
    visibility = ["//visibility:public"]
)
