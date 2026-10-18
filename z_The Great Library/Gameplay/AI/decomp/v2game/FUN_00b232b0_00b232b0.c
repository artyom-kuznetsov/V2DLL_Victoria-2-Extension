// PHYSFS_utf8FromLatin1 @ 00b232b0 body=[[00b232b0, 00b23442]]


void PHYSFS_utf8FromLatin1(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
                    /* 0x7232b0  69  PHYSFS_utf8FromLatin1 */
  if (param_3 != 0 || param_4 != 0) {
    uVar3 = param_3 - 1;
    iVar4 = param_4 + -1 + (uint)(param_3 != 0);
    if (uVar3 != 0 || iVar4 != 0) {
      do {
        bVar1 = *param_1;
        uVar2 = (uint)bVar1;
        param_1 = param_1 + 1;
        if ((uVar2 == 0) || (uVar3 == 0 && iVar4 == 0)) break;
        if ((uVar2 < 0x110000) && ((uVar2 != 0xfffe && (uVar2 != 0xffff)))) {
          if (uVar2 < 0xdc01) {
            if (((0xdbfe < uVar2) || (uVar2 == 0xd800)) || ((0xdb7e < uVar2 && (uVar2 < 0xdb81)))) {
LAB_00b23363:
              *param_2 = 0x3f;
              param_2 = param_2 + 1;
              bVar5 = uVar3 != 0;
              uVar3 = uVar3 - 1;
              goto LAB_00b2342d;
            }
          }
          else if ((uVar2 == 0xdf80) || (uVar2 == 0xdfff)) goto LAB_00b23363;
          if (uVar2 < 0x80) {
            *param_2 = bVar1;
            param_2 = param_2 + 1;
            bVar5 = uVar3 != 0;
            uVar3 = uVar3 - 1;
            goto LAB_00b2342d;
          }
          if (uVar2 < 0x800) {
            if ((iVar4 == 0) && (uVar3 < 2)) {
              uVar3 = 0;
              iVar4 = 0;
              goto LAB_00b23432;
            }
            *param_2 = bVar1 >> 6 | 0xc0;
            param_2[1] = bVar1 & 0x3f | 0x80;
            param_2 = param_2 + 2;
            bVar5 = 1 < uVar3;
            uVar3 = uVar3 - 2;
            goto LAB_00b2342d;
          }
          if (uVar2 < 0x10000) {
            if ((iVar4 != 0) || (2 < uVar3)) {
              *param_2 = 0xe0;
              param_2[1] = bVar1 >> 6 | 0x80;
              param_2[2] = bVar1 & 0x3f | 0x80;
              param_2 = param_2 + 3;
              bVar5 = 2 < uVar3;
              uVar3 = uVar3 - 3;
              goto LAB_00b2342d;
            }
            uVar3 = 0;
            iVar4 = 0;
          }
          else {
            if ((iVar4 != 0) || (3 < uVar3)) {
              *param_2 = 0xf0;
              param_2[1] = 0x80;
              param_2[2] = bVar1 >> 6 | 0x80;
              param_2[3] = bVar1 & 0x3f | 0x80;
              param_2 = param_2 + 4;
              bVar5 = 3 < uVar3;
              uVar3 = uVar3 - 4;
              goto LAB_00b2342d;
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
LAB_00b2342d:
          iVar4 = iVar4 + -1 + (uint)bVar5;
        }
LAB_00b23432:
      } while (uVar3 != 0 || iVar4 != 0);
    }
    *param_2 = 0;
  }
  return;
}

