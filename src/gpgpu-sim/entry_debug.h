
//
// Created by gpgpu-sim on 4/25/17.
//

#ifndef SRC_ENTRY_DEBUG_H
#define SRC_ENTRY_DEBUG_H

#include <stdio.h>

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"
#define ENTRY EntryRaiiObject obj ## __LINE__ (__FUNCTION__, __LINE__);

struct EntryRaiiObject {
    EntryRaiiObject(const char *f, int line) : f_(f) { printf("%s##>>> %s (%d)%s\n", KGRN, f_, line, KNRM); }
    ~EntryRaiiObject() { printf("%s##<<< %s%s\n", KGRN, f_, KNRM); }
    const char *f_;
};
#endif //SRC_ENTRY_DEBUG_H
