// PHYSFS_utf8FromUcs2 @ 00b23110 body=[[00b23110, 00b23139] [00b23140, 00b232ac]]


void PHYSFS_utf8FromUcs2(ushort *param_1,byte *param_2,int param_3,int param_4)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
                    /* 0x723110  70  PHYSFS_utf8FromUcs2 */
  if (param_3 != 0 || param_4 != 0) {
    uVar5 = param_3 - 1;
    iVar6 = param_4 + -1 + (uint)(param_3 != 0);
    if (uVar5 != 0 || iVar6 != 0) {
      do {
        uVar1 = *param_1;
        uVar4 = (uint)uVar1;
        param_1 = param_1 + 1;
        if ((uVar4 == 0) || (uVar5 == 0 && iVar6 == 0)) break;
        if ((uVar4 < 0x110000) && ((uVar4 != 0xfffe && (uVar4 != 0xffff)))) {
          if (uVar4 < 0xdc01) {
            if (((0xdbfe < uVar4) || (uVar4 == 0xd800)) || ((0xdb7e < uVar4 && (uVar4 < 0xdb81)))) {
LAB_00b231cd:
              *param_2 = 0x3f;
              param_2 = param_2 + 1;
              bVar7 = uVar5 != 0;
              uVar5 = uVar5 - 1;
              goto LAB_00b23297;
            }
          }
          else if ((uVar4 == 0xdf80) || (uVar4 == 0xdfff)) goto LAB_00b231cd;
          bVar3 = (byte)uVar1;
          if (uVar4 < 0x80) {
            *param_2 = bVar3;
            param_2 = param_2 + 1;
            bVar7 = uVar5 != 0;
            uVar5 = uVar5 - 1;
            goto LAB_00b23297;
          }
          if (uVar4 < 0x800) {
            if ((iVar6 == 0) && (uVar5 < 2)) {
              uVar5 = 0;
              iVar6 = 0;
              goto LAB_00b2329c;
            }
            *param_2 = (byte)(uVar1 >> 6) | 0xc0;
            param_2[1] = bVar3 & 0x3f | 0x80;
            param_2 = param_2 + 2;
            bVar7 = 1 < uVar5;
            uVar5 = uVar5 - 2;
            goto LAB_00b23297;
          }
          bVar2 = (byte)(uVar1 >> 8);
          if (uVar4 < 0x10000) {
            if ((iVar6 != 0) || (2 < uVar5)) {
              *param_2 = bVar2 >> 4 | 0xe0;
              param_2[1] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
              param_2[2] = bVar3 & 0x3f | 0x80;
              param_2 = param_2 + 3;
              bVar7 = 2 < uVar5;
              uVar5 = uVar5 - 3;
              goto LAB_00b23297;
            }
            uVar5 = 0;
            iVar6 = 0;
          }
          else {
            if ((iVar6 != 0) || (3 < uVar5)) {
              *param_2 = 0xf0;
              param_2[1] = bVar2 >> 4 | 0x80;
              param_2[2] = (byte)(uVar1 >> 6) & 0x3f | 0x80;
              param_2[3] = bVar3 & 0x3f | 0x80;
              param_2 = param_2 + 4;
              bVar7 = 3 < uVar5;
              uVar5 = uVar5 - 4;
              goto LAB_00b23297;
            }
            uVar5 = 0;
            iVar6 = 0;
          }
        }
        else {
          *param_2 = 0x3f;
          param_2 = param_2 + 1;
          bVar7 = uVar5 != 0;
          uVar5 = uVar5 - 1;
LAB_00b23297:
          iVar6 = iVar6 + -1 + (uint)bVar7;
        }
LAB_00b2329c:
      } while (uVar5 != 0 || iVar6 != 0);
    }
    *param_2 = 0;
  }
  return;
}

