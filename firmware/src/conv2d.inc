void conv2di(int w0, int dx, int kh, int kw, int ni, int no,
	     unsigned char *buf, unsigned short pos, unsigned short st, unsigned short sz, float *W, float *B, float *out) {
  for (int i = 0; i < w0; i += dx) {
    float *wp = W;
    for (int o = 0; o < no; o++) {
      unsigned short off = pos + i*ni;
      float acc = B[o];
      for (int j = 0; j < kh; j++) {
	unsigned char *row = buf + off;
	for (int k = 0; k < kw; k++) {
	  for (int l = 0; l < ni; l++) {
	    acc += *(wp++) * ((float) *(row++)/256.0f);
	  }
	}
	off += st;
	if (off >= sz) off -= sz;
      }
      *out++ = (acc > 0) ? acc : 0;
    }
  }
}

void conv2df(int w0, int dx, int kh, int kw, int ni, int no,
	     float *buf, unsigned short pos, unsigned short st, unsigned short sz, float *W, float *B, float *out) {
  for (int i = 0; i < w0; i += dx) {
    float *wp = W;
    for (int o = 0; o < no; o++) {
      unsigned short off = pos + i*ni;
      float acc = B[o];
      for (int j = 0; j < kh; j++) {
	float *row = buf + off;
	for (int k = 0; k < kw; k++) {
	  for (int l = 0; l < ni; l++) {
	    acc += *(wp++) * *(row++);
	  }
	}
	off += st;
	if (off >= sz) off -= sz;
      }
      *out++ = (acc > 0) ? acc : 0;
    }
  }
}
