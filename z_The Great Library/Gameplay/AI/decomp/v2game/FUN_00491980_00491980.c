// FUN_00491980 @ 00491980 body=[[00491980, 00491ab4]]


void FUN_00491980(undefined4 param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int in_ECX;
  char local_104 [256];
  
  FUN_00491450(param_1);
  if (1 < *(int *)(in_ECX + 0x78)) {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x58);
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 0x60);
  if ((*(int *)(in_ECX + 0x90) != 0) || (*(int *)(in_ECX + 0x94) != 0)) {
    FUN_009a0940(param_1);
    FUN_0099f020(in_ECX + 0x90);
  }
  uVar1 = *(ushort *)(in_ECX + 0x84);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",(uint)uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x98);
  FUN_009a0940(param_1);
  _sprintf(local_104,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

