// FUN_00896580 @ 00896580 body=[[00896580, 0089667f]]


void FUN_00896580(int param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  longlong lVar5;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b59050;
  local_14 = ExceptionList;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4) + 0x188
                    );
  if (*(int *)(param_1 + 0xc) == 0) {
    ExceptionList = &local_14;
    if ((piVar1 == (int *)0x0) ||
       (ExceptionList = &local_14, cVar3 = (**(code **)(*piVar1 + 0x24))(), cVar3 == '\0')) {
      if (*(int *)(param_1 + 0x10) < 1) {
        ExceptionList = local_14;
        return;
      }
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                      *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                       *(int *)(param_1 + 0x10) * 4) + 300) * 4);
    }
    else {
      iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar1[0x17] * 4);
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    ExceptionList = &local_14;
  }
  uVar2 = *(uint *)(in_ECX + 0x20);
  lVar5 = __alldiv(uVar2 << 0x1e,((int)uVar2 >> 0x1f) << 0x1e | uVar2 >> 2,0x1f40000,0);
  *(longlong *)(iVar4 + 0xe78) = lVar5 + *(longlong *)(iVar4 + 0xe78);
  ExceptionList = local_14;
  return;
}

