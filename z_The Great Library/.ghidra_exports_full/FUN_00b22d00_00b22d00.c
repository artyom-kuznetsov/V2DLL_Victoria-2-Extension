// PHYSFS_utf8ToUcs2 @ 00b22d00 body=[[00b22d00, 00b22f60]]


void PHYSFS_utf8ToUcs2(byte *param_1,undefined2 *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
                    /* 0x722d00  72  PHYSFS_utf8ToUcs2 */
  iVar2 = param_4 + -1 + (uint)(1 < param_3);
  while (((param_3 = param_3 - 2, iVar2 != 0 || (1 < param_3)) &&
         (uVar1 = (uint)*param_1, uVar1 != 0))) {
    if (uVar1 < 0x80) {
      param_1 = param_1 + 1;
LAB_00b22d70:
      if (uVar1 == 0) break;
      if ((uVar1 == 0xffffffff) || (0xffff < uVar1)) goto LAB_00b22d80;
    }
    else {
      if (uVar1 - 0x80 < 0x40) {
        param_1 = param_1 + 1;
      }
      else if (uVar1 < 0xe0) {
        if ((param_1[1] & 0xc0) == 0x80) {
          uVar1 = (uVar1 - 0xc0) * 0x40 | param_1[1] - 0x80;
          param_1 = param_1 + 2;
          bVar3 = uVar1 - 0x80 < 0x77f;
          bVar4 = uVar1 - 0x80 == 0x77f;
LAB_00b22d6e:
          if (bVar3 || bVar4) goto LAB_00b22d70;
        }
      }
      else if (uVar1 < 0xf0) {
        if (((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) {
          uVar1 = ((uVar1 - 0xe0) * 0x40 | param_1[1] - 0x80) << 6 | param_1[2] - 0x80;
          param_1 = param_1 + 3;
          if (uVar1 < 0xdc01) {
            if ((uVar1 < 0xdbff) && (uVar1 != 0xd800)) {
              if (uVar1 < 0xdb7f) goto LAB_00b22e55;
              if (0xdb80 < uVar1) {
                bVar3 = uVar1 - 0x800 < 0xf7fd;
                bVar4 = uVar1 - 0x800 == 0xf7fd;
                goto LAB_00b22d6e;
              }
            }
          }
          else if ((uVar1 != 0xdf80) && (uVar1 != 0xdfff)) {
LAB_00b22e55:
            bVar3 = uVar1 - 0x800 < 0xf7fd;
            bVar4 = uVar1 - 0x800 == 0xf7fd;
            goto LAB_00b22d6e;
          }
        }
      }
      else if (uVar1 < 0xf8) {
        if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
           ((param_1[3] & 0xc0) == 0x80)) {
          uVar1 = (((uVar1 - 0xf0) * 0x40 | param_1[1] - 0x80) << 6 | param_1[2] - 0x80) << 6 |
                  param_1[3] - 0x80;
          param_1 = param_1 + 4;
          bVar3 = uVar1 - 0x10000 < 0xfffff;
          bVar4 = uVar1 - 0x10000 == 0xfffff;
          goto LAB_00b22d6e;
        }
      }
      else if (uVar1 < 0xfc) {
        if (((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
            ((param_1[3] & 0xc0) == 0x80)) && ((param_1[4] & 0xc0) == 0x80)) {
          param_1 = param_1 + 5;
        }
      }
      else if ((((param_1[1] & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) &&
              (((param_1[3] & 0xc0) == 0x80 &&
               (((param_1[4] & 0xc0) == 0x80 && ((param_1[5] & 0xc0) == 0x80)))))) {
        param_1 = param_1 + 6;
      }
LAB_00b22d80:
      uVar1 = 0x3f;
    }
    *param_2 = (short)uVar1;
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1 + (uint)(1 < param_3);
  }
  *param_2 = 0;
  return;
}

