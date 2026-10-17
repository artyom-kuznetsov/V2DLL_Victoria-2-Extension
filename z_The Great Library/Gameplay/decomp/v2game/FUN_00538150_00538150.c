// FUN_00538150 @ 00538150  (requested 00538150, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_00538150(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 **ppuVar3;
  uint *unaff_EDI;
  undefined8 uVar4;
  undefined8 local_38;
  undefined1 *local_28 [2];
  undefined1 *local_20 [3];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b733c0;
  local_14 = ExceptionList;
  uVar1 = *(uint *)(*(int *)(in_ECX + 0xbcc) + 0x7c);
  local_28[0] = (undefined1 *)&local_38;
  ExceptionList = &local_14;
  local_38 = __alldiv(uVar1 << 0x1e,((int)uVar1 >> 0x1f) << 0x1e | uVar1 >> 2,0x1f40000,0);
  ppuVar3 = local_28;
  if (*(int *)(in_ECX + 0x4cc) < 1) {
    ppuVar3 = local_20;
  }
  puVar2 = (undefined4 *)FUN_0096a2c0(in_ECX + 0x12e8,ppuVar3,in_ECX + 0xa48);
  local_38._4_4_ = 0;
  local_38._0_4_ = 0x1f40000;
  uVar4 = __allmul(*puVar2,puVar2[1]);
  *unaff_EDI = (uint)uVar4 >> 0x1e | (int)((ulonglong)uVar4 >> 0x20) << 2;
  ExceptionList = local_14;
  return;
}

