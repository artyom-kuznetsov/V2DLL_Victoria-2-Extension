// FUN_008ebbe0 @ 008ebbe0 body=[[008ebbe0, 008ebc2b]]


bool FUN_008ebbe0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x1c) != 0) && (*(int *)(in_ECX + 0x1c) != DAT_012587f0 + 0x48)) &&
     (0 < *(int *)(param_1 + 0x10))) {
    iVar1 = *(int *)(in_ECX + 0x1c);
    iVar2 = FUN_004b9520(*(undefined4 *)
                          (*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4));
    return iVar2 == iVar1;
  }
  return false;
}

