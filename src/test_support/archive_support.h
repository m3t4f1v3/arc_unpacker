#ifndef TEST_SUPPORT_ARCHIVE_SUPPORT_H
#define TEST_SUPPORT_ARCHIVE_SUPPORT_H
#include <vector>
#include "formats/archive.h"
#include "output_files.h"

OutputFiles *unpack_to_memory(
    const char *input_path,
    Archive *archive,
    int argc,
    const char **argv);

void compare_files(
    const std::vector<VirtualFile*> &expected_files,
    const std::vector<VirtualFile*> &actual_files);

#endif
