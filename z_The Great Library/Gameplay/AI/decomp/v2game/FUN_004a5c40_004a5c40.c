// FUN_004a5c40 @ 004a5c40  (requested 004A5C40, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x004a5d7a) */
/* WARNING: Removing unreachable block (ram,0x004a5d8a) */
/* WARNING: Removing unreachable block (ram,0x004a5da8) */
/* WARNING: Removing unreachable block (ram,0x004a5dca) */
/* WARNING: Removing unreachable block (ram,0x004a5db2) */
/* WARNING: Removing unreachable block (ram,0x004a5db6) */
/* WARNING: Removing unreachable block (ram,0x004a5dbb) */
/* WARNING: Removing unreachable block (ram,0x004a5de2) */

void FUN_004a5c40(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b21b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined4 *)(in_ECX + 0x7c) = 1;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  iVar1 = FUN_004a4550(*(undefined4 *)(in_ECX + 0x6c),param_1);
  if (iVar1 != 0) {
    FUN_009b7950(0,0);
    if (DAT_0125ce80 == 0) {
      iVar1 = FUN_00aae9af(0x3c);
      local_c = 0;
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_004dada0();
      }
      FUN_004dc340(uVar2);
    }
    local_c = 1;
    FUN_009beeb0(DAT_0125ce80 + 0x1c);
    iVar1 = *(int *)(in_ECX + 0x6c);
    for (uVar3 = *(uint *)(iVar1 + 0x48);
        (*(uint *)(iVar1 + 0x48) <= uVar3 && (uVar3 < *(uint *)(iVar1 + 0x4c))); uVar3 = uVar3 + 4)
    {
    }
    ExceptionList = local_14;
    return;
  }
  *(undefined4 *)(in_ECX + 0x7c) = 4;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  ExceptionList = local_14;
  return;
}

