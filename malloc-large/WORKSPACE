local_repository(
  # Name of the TCMalloc repository. This name is defined within your
  # WORKSPACE file, in its `workspace()` metadata
  name = "com_google_tcmalloc",

  # NOTE: Bazel paths must be absolute paths. E.g., you can't use ~/Source
  path = "/home/sulav/tcmalloc",
)

load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

# Abseil HTTP Archive to specific commit
#
# Consult https://github.com/abseil/abseil-cpp/commits/master for the latest
# commit. But DO NOT use master.zip for that purpose. (Sha256 values are not
# stable across master versions.) Click on that specific commit.
#
# Click "Browse Files" on the commit and click on "Clone or Download Code."
#
# Right click on "Download ZIP" to copy the HTTP Archive URL, which you will
# use within the http_archive "urls" field.
#
# Note that you will need to generate a sha256 value for Bazel's http_archive
# to ensure this code is secure. On Linux you can do so with a downloaded .zip
# file using the sha256sum command line:
#
# $ sha256sum github_zip_file.zip
# Abseil
http_archive(
    name = "com_google_absl",
    urls = ["https://github.com/abseil/abseil-cpp/archive/38db52adb2eabc0969195b33b30763e0a1285ef9.zip"],
    strip_prefix = "abseil-cpp-38db52adb2eabc0969195b33b30763e0a1285ef9",
    sha256 = "64d326dbce25dd05d43482f7029fe91c0412ea0af54b7c3b04b185d076b073cb",
)
