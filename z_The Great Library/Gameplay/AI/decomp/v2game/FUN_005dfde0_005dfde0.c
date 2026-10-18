// FUN_005dfde0 @ 005dfde0 body=[[005dfde0, 005dff0c] [005dff10, 005dff75]]


void FUN_005dfde0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int local_150;
  int local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  uint local_138;
  undefined4 local_128;
  uint local_124;
  undefined4 local_11c;
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b619bb;
  local_14 = ExceptionList;
  local_150 = 0;
  ExceptionList = &local_14;
  if (0 < (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x28) {
    local_14c = 0;
    ExceptionList = &local_14;
    do {
      iVar3 = *(int *)(in_ECX + 0x3c);
      iVar1 = DAT_01258a94;
      if (*(uint *)(iVar3 + 4 + local_14c) < 0x1269) {
        iVar1 = DAT_01258a98;
      }
      if (iVar1 == 0) {
LAB_005dfe6c:
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_009c1d40();
        if (iVar1 == 0) goto LAB_005dfe6c;
        iVar1 = iVar1 + -8;
      }
      *(int *)(iVar3 + local_14c) = iVar1;
      if (iVar1 != 0) {
        iVar3 = *(int *)(in_ECX + 0x3c) + local_14c;
        FUN_009a0940(param_1);
        local_140 = *(undefined4 *)(iVar3 + 4);
        local_13c = *(undefined4 *)(iVar3 + 8);
        FUN_0099f020(&local_140);
        puVar2 = (undefined4 *)FUN_00990880();
        local_c = 0;
        local_11c = 0x10;
        if (0xf < (uint)puVar2[5]) {
          puVar2 = (undefined4 *)*puVar2;
        }
        __snprintf(local_118,0xff,"%s",puVar2);
        FUN_0099ff90(param_1);
        local_c = 0xffffffff;
        if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_138);
        }
        local_128 = 0;
        local_124 = 0xf;
        local_138 = local_138 & 0xffffff00;
      }
      local_150 = local_150 + 1;
      local_14c = local_14c + 0x28;
    } while (local_150 < (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x28);
  }
  FUN_009a2520(param_1);
  ExceptionList = local_14;
  return;
}

