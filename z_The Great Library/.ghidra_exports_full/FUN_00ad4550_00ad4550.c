// FUN_00ad4550 @ 00ad4550 body=[[00ad4550, 00ad45d7]]


void FUN_00ad4550(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 unaff_retaddr;
  
  piVar1 = *(int **)(*(int *)(DAT_00f209e0 + 0x30) + 0x30);
  (**(code **)(*piVar1 + 8))(param_1,param_2);
  FUN_00ae8350(0);
  if ((*(byte *)(param_1 + 0x1ed) & 4) != 0) {
    (**(code **)(*piVar1 + 0xc))(param_1,unaff_retaddr);
  }
  uVar2 = *(uint *)(param_1 + 0x140);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      FUN_00ad4550(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x13c) + uVar3 * 4) + 0x10),
                   unaff_retaddr);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  return;
}

