// PHYSFS_utf8FromUcs4 @ 00b22f70 body=[[00b22f70, 00b23103]]


void PHYSFS_utf8FromUcs4(uint *param_1,byte *param_2,int param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
                    /* 0x722f70  71  PHYSFS_utf8FromUcs4 */
  if (param_3 != 0 || param_4 != 0) {
    uVar3 = param_3 - 1;
    iVar4 = param_4 + -1 + (uint)(param_3 != 0);
    if (uVar3 != 0 || iVar4 != 0) {
      do {
        uVar1 = *param_1;
        param_1 = param_1 + 1;
        if ((uVar1 == 0) || (uVar3 == 0 && iVar4 == 0)) break;
        if ((uVar1 < 0x110000) && ((uVar1 != 0xfffe && (uVar1 != 0xffff)))) {
          if (uVar1 < 0xdc01) {
            if (((0xdbfe < uVar1) || (uVar1 == 0xd800)) || ((0xdb7e < uVar1 && (uVar1 < 0xdb81)))) {
LAB_00b23024:
              *param_2 = 0x3f;
              param_2 = param_2 + 1;
              bVar5 = uVar3 != 0;
              uVar3 = uVar3 - 1;
              goto LAB_00b230ee;
            }
          }
          else if ((uVar1 == 0xdf80) || (uVar1 == 0xdfff)) goto LAB_00b23024;
          bVar2 = (byte)uVar1;
          if (uVar1 < 0x80) {
            *param_2 = bVar2;
            param_2 = param_2 + 1;
            bVar5 = uVar3 != 0;
            uVar3 = uVar3 - 1;
            goto LAB_00b230ee;
          }
          if (uVar1 < 0x800) {
            if ((iVar4 == 0) && (uVar3 < 2)) {
              uVar3 = 0;
              iVar4 = 0;
              goto LAB_00b230f3;
            }
            *param_2 = (byte)(uVar1 >> 6) | 0xc0;
            param_2[1] = bVar2 & 0x3f | 0x80;
            param_2 = param_2 + 2;
            bVar5 = 1 < uVar3;
            uVar3 = uVar3 - 2;
            goto LAB_00b230ee;
          }
          if (uVar1 < 0x10000) {
            if ((iVar4 != 0) || (2 < uVar3)) {
              *param_2 = (byte)(uVar1 >> 0xc) | 0xe0;
              param_2[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
              param_2[2] = bVar2 & 0x3f | 0x80;
              param_2 = param_2 + 3;
              bVar5 = 2 < uVar3;
              uVar3 = uVar3 - 3;
              goto LAB_00b230ee;
            }
            uVar3 = 0;
            iVar4 = 0;
          }
          else {
            if ((iVar4 != 0) || (3 < uVar3)) {
              *param_2 = (byte)(uVar1 >> 0x12) | 0xf0;
              param_2[1] = (byte)(uVar1 >> 0xc) & 0x3f | 0x80;
              param_2[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
              param_2[3] = bVar2 & 0x3f | 0x80;
              param_2 = param_2 + 4;
              bVar5 = 3 < uVar3;
              uVar3 = uVar3 - 4;
              goto LAB_00b230ee;
            }
            uVar3 = 0;
            iVar4 = 0;
          }
        }
        else {
          *param_2 = 0x3f;
          param_2 = param_2 + 1;
          bVar5 = uVar3 != 0;
          uVar3 = uVar3 - 1;
LAB_00b230ee:
          iVar4 = iVar4 + -1 + (uint)bVar5;
        }
LAB_00b230f3:
      } while (uVar3 != 0 || iVar4 != 0);
    }
    *param_2 = 0;
  }
  return;
}

