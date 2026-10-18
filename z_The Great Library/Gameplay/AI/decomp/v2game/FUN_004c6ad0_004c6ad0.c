// FUN_004c6ad0 @ 004c6ad0 body=[[004c6ad0, 004c71e1] [004c71e5, 004c730b]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6ad0(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_44;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3d113;
  local_10 = ExceptionList;
  if ((DAT_013f1be0 & 1) == 0) {
    DAT_013f1be0 = DAT_013f1be0 | 1;
    DAT_013f1bd4 = 2.5;
    DAT_013f1bd8 = 0.0;
    DAT_013f1bdc = DAT_00f092fc;
  }
  uVar4 = DAT_013f1be0;
  local_44 = (ulonglong)(uint)(float)(*(int *)(unaff_EDI + 0x7c) - *(int *)(unaff_EDI + 0x74));
  ExceptionList = &local_10;
  *(ulonglong *)(unaff_EDI + 0x100) = local_44;
  *(float *)(unaff_EDI + 0x108) = (float)(*(int *)(unaff_EDI + 0x80) - *(int *)(unaff_EDI + 0x78));
  fVar1 = *(float *)(unaff_EDI + 0x108) + DAT_013f1bdc;
  local_44 = CONCAT44(*(float *)(unaff_EDI + 0x104) + DAT_013f1bd8,
                      *(float *)(unaff_EDI + 0x100) + DAT_013f1bd4);
  *(ulonglong *)(unaff_EDI + 0x10c) = local_44;
  *(float *)(unaff_EDI + 0x114) = fVar1;
  if ((uVar4 & 2) == 0) {
    uVar4 = uVar4 | 2;
    _DAT_013f1bc8 = DAT_00f14a88;
    _DAT_013f1bcc = 0;
    _DAT_013f1bd0 = DAT_00f14a88;
    DAT_013f1be0 = uVar4;
  }
  if ((uVar4 & 4) == 0) {
    DAT_013f1be0 = uVar4 | 4;
    _DAT_013f1bbc = DAT_00f17b58;
    _DAT_013f1bc0 = 0;
    _DAT_013f1bc4 = DAT_00f17b58;
  }
  *(undefined8 *)(unaff_EDI + 0x118) = *(undefined8 *)(unaff_EDI + 0x100);
  *(undefined4 *)(unaff_EDI + 0x120) = *(undefined4 *)(unaff_EDI + 0x108);
  *(undefined8 *)(unaff_EDI + 0x124) = *(undefined8 *)(unaff_EDI + 0x100);
  *(undefined4 *)(unaff_EDI + 300) = *(undefined4 *)(unaff_EDI + 0x108);
  uVar2 = DAT_00f17898;
  if (*(char *)(unaff_EDI + 0x2a) == '\0') {
    *(undefined8 *)(unaff_EDI + 0x10c) = *(undefined8 *)(unaff_EDI + 0x100);
    *(undefined4 *)(unaff_EDI + 0x114) = *(undefined4 *)(unaff_EDI + 0x108);
    FUN_00408b00();
    FUN_004c8c20(*(float *)(unaff_EDI + 0x6c) + 0.174);
    *(float *)(unaff_EDI + 0x118) =
         *(float *)(unaff_EDI + 0x118) +
         (local_80 * 0.0 - local_84 * 6.0) + local_7c * 0.0 + local_78 * 0.0;
    *(float *)(unaff_EDI + 0x11c) =
         (local_70 * 0.0 - local_74 * 6.0) + local_6c * 0.0 + local_68 * 0.0 +
         *(float *)(unaff_EDI + 0x11c);
    *(float *)(unaff_EDI + 0x120) =
         *(float *)(unaff_EDI + 0x120) +
         (local_60 * 0.0 - local_64 * 6.0) + local_5c * 0.0 + local_58 * 0.0;
    *(float *)(unaff_EDI + 0x124) =
         local_84 * 6.0 + local_80 * 0.0 + local_7c * 0.0 + local_78 * 0.0 +
         *(float *)(unaff_EDI + 0x124);
    *(float *)(unaff_EDI + 0x128) =
         *(float *)(unaff_EDI + 0x128) +
         local_74 * 6.0 + local_70 * 0.0 + local_6c * 0.0 + local_68 * 0.0;
    *(float *)(unaff_EDI + 300) =
         local_64 * 6.0 + local_60 * 0.0 + local_5c * 0.0 + local_58 * 0.0 +
         *(float *)(unaff_EDI + 300);
  }
  else {
    *(undefined4 *)(unaff_EDI + 0x110) = DAT_00f17898;
    *(undefined4 *)(unaff_EDI + 0x104) = uVar2;
    FUN_00408b00();
    FUN_004c8c20(*(undefined4 *)(unaff_EDI + 0x6c));
    *(float *)(unaff_EDI + 0x118) =
         *(float *)(unaff_EDI + 0x118) +
         (local_80 * 0.0 - local_84 * 5.0) + local_7c * 0.0 + local_78 * 0.0;
    *(float *)(unaff_EDI + 0x11c) =
         *(float *)(unaff_EDI + 0x11c) +
         (local_70 * 0.0 - local_74 * 5.0) + local_6c * 0.0 + local_68 * 0.0;
    *(float *)(unaff_EDI + 0x120) =
         *(float *)(unaff_EDI + 0x120) +
         (local_60 * 0.0 - local_64 * 5.0) + local_5c * 0.0 + local_58 * 0.0;
    *(float *)(unaff_EDI + 0x124) =
         local_84 * 5.0 + local_80 * 0.0 + local_7c * 0.0 + local_78 * 0.0 +
         *(float *)(unaff_EDI + 0x124);
    *(float *)(unaff_EDI + 300) =
         local_64 * 5.0 + local_60 * 0.0 + local_5c * 0.0 + local_58 * 0.0 +
         *(float *)(unaff_EDI + 300);
    uVar2 = DAT_00f17898;
    *(undefined4 *)(unaff_EDI + 0x11c) = DAT_00f17898;
    *(undefined4 *)(unaff_EDI + 0x128) = uVar2;
  }
  *(undefined8 *)(unaff_EDI + 0x130) = *(undefined8 *)(unaff_EDI + 0x100);
  *(undefined4 *)(unaff_EDI + 0x138) = *(undefined4 *)(unaff_EDI + 0x108);
  uVar2 = DAT_012588dc;
  if (*(char *)(unaff_EDI + 0xd8) == '\0') {
    *(undefined4 *)(unaff_EDI + 0x20) = DAT_012589b8;
    *(undefined4 *)(unaff_EDI + 0x24) = uVar2;
    ExceptionList = local_10;
    return;
  }
  if (DAT_013f0820 == 0) {
    iVar5 = FUN_004dad40();
    iVar7 = *(int *)(iVar5 + 0x20) - *(int *)(iVar5 + 0x1c) >> 2;
    local_18 = 0;
    iVar5 = DAT_0125ce80;
    if (0 < iVar7) {
      do {
        if (iVar5 == 0) {
          iVar6 = FUN_00aae9af(0x3c);
          local_8 = 0;
          iVar5 = 0;
          if (iVar6 != 0) {
            iVar5 = FUN_004dada0();
          }
          iVar6 = DAT_0125ce80;
          local_8 = 1;
          if ((iVar5 != DAT_0125ce80) && (DAT_0125ce80 != 0)) {
            FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar6);
          }
          local_8 = 0xffffffff;
          DAT_0125ce80 = iVar5;
        }
        if (*(char *)(*(int *)(*(int *)(iVar5 + 0x1c) + local_18 * 4) + 0xbd) != '\0') {
          DAT_013f0820 = *(int *)(*(int *)(iVar5 + 0x1c) + local_18 * 4);
          break;
        }
        local_18 = local_18 + 1;
      } while (local_18 < iVar7);
    }
    uVar2 = DAT_012588dc;
    if (DAT_013f0820 == 0) {
      *(undefined4 *)(unaff_EDI + 0x20) = DAT_012589b8;
      *(undefined4 *)(unaff_EDI + 0x24) = uVar2;
      ExceptionList = local_10;
      return;
    }
  }
  iVar5 = DAT_013f0820;
  *(undefined8 *)(unaff_EDI + 0x13c) = *(undefined8 *)(unaff_EDI + 0x100);
  *(undefined4 *)(unaff_EDI + 0x144) = *(undefined4 *)(unaff_EDI + 0x108);
  uVar2 = DAT_012588dc;
  *(float *)(unaff_EDI + 0x13c) =
       *(float *)(*(int *)(unaff_EDI + 0x330) + 8 + *(int *)(iVar5 + 0x58) * 0x10) -
       (float)*(int *)(unaff_EDI + 0x34);
  uVar3 = DAT_012589b8;
  *(float *)(unaff_EDI + 0x144) =
       *(float *)(*(int *)(unaff_EDI + 0x330) + 0xc + *(int *)(iVar5 + 0x58) * 0x10) -
       (float)*(int *)(unaff_EDI + 0x38);
  *(undefined4 *)(unaff_EDI + 0x20) = uVar3;
  *(undefined4 *)(unaff_EDI + 0x24) = uVar2;
  ExceptionList = local_10;
  return;
}

