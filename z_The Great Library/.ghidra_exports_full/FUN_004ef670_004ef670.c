// FUN_004ef670 @ 004ef670 body=[[004ef670, 004ef70b]]


int FUN_004ef670(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  char local_104 [256];
  
  if (*(int *)(in_ECX + 8) == 0) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0x58);
    FUN_009a0940(param_1);
  }
  else {
    uVar2 = **(undefined4 **)(*(int *)(in_ECX + 8) + 0x48);
    FUN_009a0940(param_1);
  }
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  iVar1 = in_ECX + 0x10;
  if ((*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) & 0xfffffff0U) != 0) {
    iVar1 = FUN_004f2890();
  }
  return iVar1;
}

