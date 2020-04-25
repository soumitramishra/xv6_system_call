# xv6_system_call
Adding a system call "getiostats" to xv6 : A unix like operating System </br>

Given a file descriptor, getiostats gets the total number of bytes read and written on that file descriptor since it was opened.</br>
Counts for file descriptors should be reset on “exec”. This information is returned in the user-supplied iostats structure. Returns 0 on success, or -1 on failure (e.g. bad file descriptor).
