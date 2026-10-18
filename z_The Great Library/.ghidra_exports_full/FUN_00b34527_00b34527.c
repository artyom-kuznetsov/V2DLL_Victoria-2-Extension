// __handle_exc @ 00b34527 body=[[00b34527, 00b3470a]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __handle_exc
   
   Library: Visual Studio 2010 Release */

bool __handle_exc(uint param_1,double *param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  uint uVar5;
  bool bVar6;
  float10 fVar7;
  uint local_18;
  byte bStack_14;
  undefined1 uStack_13;
  ushort uStack_12;
  int local_c;
  uint local_8;
  
  uVar5 = param_1 & 0x1f;
  bVar3 = true;
  local_8 = uVar5;
  if (((param_1 & 8) != 0) && ((param_3 & 1) != 0)) {
    FUN_00acdaa0(1);
    uVar5 = param_1 & 0x17;
    goto LAB_00b346e9;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 4) != 0)) {
    FUN_00acdaa0(4);
    uVar5 = param_1 & 0x1b;
    goto LAB_00b346e9;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 8) == 0)) {
    if (((param_1 & 2) == 0) || ((param_3 & 0x10) == 0)) goto LAB_00b346e9;
    bVar6 = (param_1 & 0x10) != 0;
    if (*param_2 != 0.0) {
      fVar7 = (float10)FUN_00b349d2(*param_2,&local_c);
      dVar2 = (double)fVar7;
      local_18 = SUB84(dVar2,0);
      bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
      uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
      uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      local_c = local_c + -0x600;
      if (local_c < -0x432) {
        dVar2 = dVar2 * 0.0;
        bVar6 = bVar3;
LAB_00b346c9:
        local_18 = SUB84(dVar2,0);
        bStack_14 = (byte)((ulonglong)dVar2 >> 0x20);
        uStack_13 = (undefined1)((ulonglong)dVar2 >> 0x28);
        uStack_12 = (ushort)((ulonglong)dVar2 >> 0x30);
      }
      else {
        uStack_12 = uStack_12 & 0xf | 0x10;
        if (local_c < -0x3fd) {
          local_c = -0x3fd - local_c;
          do {
            if (((local_18 & 1) != 0) && (!bVar6)) {
              bVar6 = bVar3;
            }
            local_18 = local_18 >> 1;
            if ((bStack_14 & 1) != 0) {
              local_18 = local_18 | 0x80000000;
            }
            uVar5 = CONCAT22(uStack_12,CONCAT11(uStack_13,bStack_14)) >> 1;
            bStack_14 = (byte)uVar5;
            uStack_13 = (undefined1)(uVar5 >> 8);
            uStack_12 = uStack_12 >> 1;
            local_c = local_c + -1;
          } while (local_c != 0);
        }
        if (dVar2 < 0.0) {
          dVar2 = -(double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
          goto LAB_00b346c9;
        }
      }
      *param_2 = (double)CONCAT26(uStack_12,CONCAT15(uStack_13,CONCAT14(bStack_14,local_18)));
      bVar3 = bVar6;
    }
    if (bVar3) {
      FUN_00acdaa0(0x10);
    }
    uVar5 = local_8 & 0xfffffffd;
    local_8 = uVar5;
    goto LAB_00b346e9;
  }
  FUN_00acdaa0(8);
  uVar5 = param_3 & 0xc00;
  dVar2 = _DAT_00f05fe0;
  dVar4 = _DAT_00f05fe0;
  if (uVar5 == 0) {
    dVar1 = *param_2;
joined_r0x00b345cb:
    if (dVar1 <= 0.0) {
      dVar2 = -dVar4;
    }
    *param_2 = dVar2;
  }
  else {
    if (uVar5 == 0x400) {
      dVar1 = *param_2;
      dVar2 = _DAT_00f05ff0;
      goto joined_r0x00b345cb;
    }
    dVar4 = _DAT_00f05ff0;
    if (uVar5 == 0x800) {
      dVar1 = *param_2;
      goto joined_r0x00b345cb;
    }
    if (uVar5 == 0xc00) {
      dVar1 = *param_2;
      dVar2 = _DAT_00f05ff0;
      goto joined_r0x00b345cb;
    }
  }
  uVar5 = param_1 & 0x1e;
LAB_00b346e9:
  if (((param_1 & 0x10) != 0) && ((param_3 & 0x20) != 0)) {
    FUN_00acdaa0(0x20);
    uVar5 = uVar5 & 0xffffffef;
  }
  return uVar5 == 0;
}

