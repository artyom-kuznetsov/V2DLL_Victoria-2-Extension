// PHYSFS_utf8ToUcs4 @ 00b22a80 body=[[00b22a80, 00b22cfd]]


void PHYSFS_utf8ToUcs4(byte *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  
                    /* 0x722a80  73  PHYSFS_utf8ToUcs4 */
  bVar2 = 3 < param_3;
  param_3 = param_3 - 4;
  param_4 = param_4 + -1 + (uint)bVar2;
  if ((param_4 == 0) && (param_3 < 4)) {
    *param_2 = 0;
    return;
  }
  do {
    uVar1 = (uint)*param_1;
    if (uVar1 == 0) {
      *param_2 = 0;
      return;
    }
    if (uVar1 < 0x80) {
      param_1 = param_1 + 1;
LAB_00b22af0:
      if (uVar1 == 0) {
        *param_2 = 0;
        return;
      }
      if (uVar1 == 0xffffffff) goto LAB_00b22afd;
    }
    else {
      if (uVar1 - 0x80 < 0x40) {
        param_1 = param_1 + 1;
      }
      else if (uVar1 < 0xe0) {
        if ((param_1[1] & 0xc0) == 0x80) {
          uVar1 = (uVar1 - 0xc0) * 0x40 | param_1[1] - 0x80;
          param_1 = param_1 + 2;
          bVar2 = uVar1 - 0x80 < 0x77f;
          bVar3 = uVar1 - 0x80 == 0x77f;
LAB_00b22aee:
          if (bVar2 || bVar3) goto LAB_00b22af0;
        }
      }
      else if (uVar1 < 0xf0) {
        if (((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) {
          uVar1 = ((uVar1 - 0xe0) * 0x40 | param_1[1] - 0x80) << 6 | param_1[2] - 0x80;
          param_1 = param_1 + 3;
          if (uVar1 < 0xdc01) {
            if ((uVar1 < 0xdbff) && (uVar1 != 0xd800)) {
              if (uVar1 < 0xdb7f) goto LAB_00b22bcb;
              if (0xdb80 < uVar1) {
                bVar2 = uVar1 - 0x800 < 0xf7fd;
                bVar3 = uVar1 - 0x800 == 0xf7fd;
                goto LAB_00b22aee;
              }
            }
          }
          else if ((uVar1 != 0xdf80) && (uVar1 != 0xdfff)) {
LAB_00b22bcb:
            bVar2 = uVar1 - 0x800 < 0xf7fd;
            bVar3 = uVar1 - 0x800 == 0xf7fd;
            goto LAB_00b22aee;
          }
        }
      }
      else if (uVar1 < 0xf8) {
        if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
           ((param_1[3] & 0xc0) == 0x80)) {
          uVar1 = (((uVar1 - 0xf0) * 0x40 | param_1[1] - 0x80) << 6 | param_1[2] - 0x80) << 6 |
                  param_1[3] - 0x80;
          param_1 = param_1 + 4;
          bVar2 = uVar1 - 0x10000 < 0xfffff;
          bVar3 = uVar1 - 0x10000 == 0xfffff;
          goto LAB_00b22aee;
        }
      }
      else if (uVar1 < 0xfc) {
        if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
           (((param_1[3] & 0xc0) == 0x80 && ((param_1[4] & 0xc0) == 0x80)))) {
          param_1 = param_1 + 5;
        }
      }
      else if (((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
               ((param_1[3] & 0xc0) == 0x80)) &&
              (((param_1[4] & 0xc0) == 0x80 && ((param_1[5] & 0xc0) == 0x80)))) {
        param_1 = param_1 + 6;
      }
LAB_00b22afd:
      uVar1 = 0x3f;
    }
    *param_2 = uVar1;
    param_2 = param_2 + 1;
    bVar2 = 3 < param_3;
    param_3 = param_3 - 4;
    param_4 = param_4 + -1 + (uint)bVar2;
    if ((param_4 == 0) && (param_3 < 4)) {
      *param_2 = 0;
      return;
    }
  } while( true );
}

