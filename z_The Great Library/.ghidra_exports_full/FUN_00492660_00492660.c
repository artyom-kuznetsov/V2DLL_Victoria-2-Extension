// FUN_00492660 @ 00492660 body=[[00492660, 0049270e]]


void FUN_00492660(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  char local_104 [256];
  
  FUN_00491450(param_1);
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x58) + 0x58);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  iVar2 = *(int *)(in_ECX + 0x5c);
  if (iVar2 != 0) {
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",iVar2);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  return;
}

