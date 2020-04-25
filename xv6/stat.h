#define T_DIR  1   // Directory
#define T_FILE 2   // File
#define T_DEV  3   // Device
struct iostats {
  uint read_bytes;    // Number of bytes read since the file was opened
  uint write_bytes;   // Number of bytes written since the file was opened
};
struct stat {
  short type;  // Type of file
  int dev;     // File system's disk device
  uint ino;    // Inode number
  short nlink; // Number of links to file
  uint size;   // Size of file in bytes
};


