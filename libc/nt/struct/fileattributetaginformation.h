#ifndef COSMOPOLITAN_LIBC_NT_STRUCT_FILEATTRIBUTETAGINFORMATION_H_
#define COSMOPOLITAN_LIBC_NT_STRUCT_FILEATTRIBUTETAGINFORMATION_H_

struct NtFileAttributeTagInformation {
  uint32_t FileAttributes;
  uint32_t ReparseTag;
};

#endif /* COSMOPOLITAN_LIBC_NT_STRUCT_FILEATTRIBUTETAGINFORMATION_H_ */
