// FUN_008975f0 @ 008975f0 body=[[008975f0, 008976e5]]


void FUN_008975f0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  longlong lVar3;
  undefined8 uVar4;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b6e0;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    uVar2 = *(uint *)(in_ECX + 0x20);
    ExceptionList = &local_14;
    lVar3 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2);
    *(longlong *)(iVar1 + 0xe78) = lVar3 + *(longlong *)(iVar1 + 0xe78);
    ExceptionList = local_14;
    return;
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x14) + 0x58)) {
    uVar2 = *(uint *)(in_ECX + 0x20);
    ExceptionList = &local_14;
    uVar4 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2);
    __allmul(DAT_00f0dc40,DAT_00f0dc44,uVar4);
    FUN_0095a5f0();
  }
  ExceptionList = local_14;
  return;
}

