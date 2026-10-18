// FUN_008a2fc0 @ 008a2fc0 body=[[008a2fc0, 008a3007]]


void FUN_008a2fc0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_ECX;
  
  iVar2 = FUN_008a30e0(in_ECX);
  if (iVar2 != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    *(int *)(iVar1 + 0x84c) = iVar2;
    FUN_0051c890(iVar1);
    FUN_0050ea30(iVar1);
  }
  return;
}

