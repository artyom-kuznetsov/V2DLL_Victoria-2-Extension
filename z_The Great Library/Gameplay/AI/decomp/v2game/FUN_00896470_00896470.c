// FUN_00896470 @ 00896470 body=[[00896470, 008964c8]]


void FUN_00896470(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = *(int *)(in_ECX + 0x20) + *(int *)(iVar1 + 0x1a8);
  *(int *)(iVar1 + 0x1a8) = iVar2;
  if (iVar2 < 1000) {
    *(undefined4 *)(iVar1 + 0x1a8) = 1000;
  }
  if (100000 < *(int *)(iVar1 + 0x1a8)) {
    *(undefined4 *)(iVar1 + 0x1a8) = 100000;
  }
  return;
}

