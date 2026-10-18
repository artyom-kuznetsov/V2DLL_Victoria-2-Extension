// FUN_00b312a0 @ 00b312a0 body=[[00b312a0, 00b31548]]


void FUN_00b312a0(int param_1,int param_2,undefined1 *param_3,uint param_4,undefined1 *param_5,
                 uint param_6,byte *param_7,int param_8,int param_9,int param_10)

{
  byte bVar1;
  ushort uVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  ushort *puVar10;
  byte *local_220;
  int local_21c;
  uint local_218;
  uint local_214;
  byte local_20d;
  ushort local_20c [258];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  puVar10 = local_20c;
  for (iVar7 = 0x81; iVar7 != 0; iVar7 = iVar7 + -1) {
    puVar10[0] = 0x400;
    puVar10[1] = 0x400;
    puVar10 = puVar10 + 2;
  }
  pbVar4 = param_7 + param_8;
  iVar9 = 0;
  local_218 = 0;
  local_21c = 0;
  local_20d = 0;
  local_214 = 0xffffffff;
  iVar7 = 0;
  do {
    if (param_7 == pbVar4) goto LAB_00b31353;
    local_218 = local_218 << 8 | (uint)*param_7;
    iVar7 = iVar7 + 1;
    param_7 = param_7 + 1;
  } while (iVar7 < 5);
  local_220 = param_7;
  if (param_10 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  while( true ) {
    iVar7 = iVar9;
    uVar5 = param_2 - local_21c;
    bVar3 = local_20d;
    if ((uint)(param_10 - iVar9) < (uint)(param_2 - local_21c)) {
      uVar5 = param_10 - iVar9;
    }
    while( true ) {
      if (uVar5 == 0) goto LAB_00b313d8;
      bVar1 = *(byte *)(param_1 + local_21c);
      *(byte *)(param_9 + iVar7) = bVar1;
      iVar9 = iVar7 + 1;
      if (((bVar1 & 0xfe) == 0xe8) || ((bVar3 == 0xf && ((bVar1 & 0xf0) == 0x80)))) break;
      local_21c = local_21c + 1;
      iVar7 = iVar9;
      uVar5 = uVar5 - 1;
      bVar3 = bVar1;
    }
    if ((uVar5 == 0) || (iVar9 == param_10)) break;
    local_20d = *(byte *)(param_1 + local_21c);
    local_21c = local_21c + 1;
    if (local_20d == 0xe8) {
      puVar10 = local_20c + bVar3;
    }
    else {
      puVar10 = local_20c + 0x100;
      if (local_20d != 0xe9) {
        puVar10 = local_20c + 0x101;
      }
    }
    if (local_214 < 0x1000000) {
      if (local_220 == pbVar4) break;
      local_214 = local_214 << 8;
      local_218 = local_218 << 8 | (uint)*local_220;
      local_220 = local_220 + 1;
    }
    uVar2 = *puVar10;
    uVar5 = (local_214 >> 0xb) * (uint)uVar2;
    if (local_218 < uVar5) {
      *puVar10 = (short)((int)(0x800 - (uint)uVar2) >> 5) + uVar2;
      local_214 = uVar5;
    }
    else {
      local_214 = local_214 - uVar5;
      local_218 = local_218 - uVar5;
      *puVar10 = uVar2 - (uVar2 >> 5);
      if (local_20d == 0xe8) {
        if (param_4 < 4) goto LAB_00b31353;
        param_4 = param_4 - 4;
        puVar8 = param_3;
        param_3 = param_3 + 4;
      }
      else {
        if (param_6 < 4) {
LAB_00b31353:
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        param_6 = param_6 - 4;
        puVar8 = param_5;
        param_5 = param_5 + 4;
      }
      iVar6 = (CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]) - iVar9) + -4;
      *(char *)(param_9 + iVar9) = (char)iVar6;
      if (iVar7 + 2 == param_10) break;
      *(char *)(param_9 + iVar7 + 2) = (char)((uint)iVar6 >> 8);
      if (iVar7 + 3 == param_10) break;
      *(char *)(param_9 + iVar7 + 3) = (char)((uint)iVar6 >> 0x10);
      if (iVar7 + 4 == param_10) break;
      local_20d = (byte)((uint)iVar6 >> 0x18);
      *(byte *)(param_9 + iVar7 + 4) = local_20d;
      iVar9 = iVar7 + 5;
    }
  }
LAB_00b313d8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

