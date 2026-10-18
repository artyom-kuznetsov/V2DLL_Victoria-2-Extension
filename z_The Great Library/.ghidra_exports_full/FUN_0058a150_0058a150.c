// FUN_0058a150 @ 0058a150 body=[[0058a150, 0058a200]]


void FUN_0058a150(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_005370f0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4),
               *(undefined4 *)(*(int *)(DAT_0125870c + 0x2a88) + *(int *)(in_ECX + 0x3c) * 4),1);
  FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x44) * 4));
  iVar2 = DAT_012588e8;
  *(undefined4 *)(*(int *)(*(int *)(DAT_012588e8 + 0xb24) + 0x24) + 0x1c) = 1;
  if (*(int *)(in_ECX + 0x44) == *(int *)(iVar2 + 0xb60)) {
    piVar1 = *(int **)(iVar2 + 0xb24);
    iVar2 = (**(code **)(*piVar1 + 0x124))();
    if ((iVar2 != 0) && (*(char *)(*(int *)(iVar2 + 0x20) + 0x67) != '\0')) {
      FUN_00740050(iVar2);
    }
    (**(code **)(*piVar1 + 0xe0))(4);
  }
  return;
}

