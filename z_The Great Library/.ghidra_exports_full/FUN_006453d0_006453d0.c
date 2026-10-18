// FUN_006453d0 @ 006453d0 body=[[006453d0, 00645419] [00645420, 00645451]]


void FUN_006453d0(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar1 = param_1;
  FUN_007fc7c0(param_1 + 0x20bc,unaff_EDI);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x20d8) + unaff_EDI * 4) + 8);
  param_1 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24;
  if (0 < param_1) {
    iVar2 = 0;
    do {
      FUN_007fc7c0(iVar1 + 0x20bc,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 0x20d8) + unaff_EDI * 4) + 8) + 200
                             ) + 4 + iVar2));
      iVar2 = iVar2 + 0x24;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}

