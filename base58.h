#ifndef  BASE58_H
#define  BASE58_H
// Copyright 2013 Steven Pearson
// Use of this source code is governed by a BSD-style
// license that can be found in the LICENSE file.
#include <stdint.h>

namespace base58{
  void encode(uint8_t *data,int dataLen,char *out,int outlen);
  int decode(const char *data,uint8_t *out,int outlen);
}

#endif
