// FUN_005c4e80 @ 005c4e80 body=[[005c4e80, 005c4ef5]]


void FUN_005c4e80(undefined4 param_1)

{
  ushort uVar1;
  int in_ECX;
  char local_104 [256];
  
  uVar1 = *(ushort *)(in_ECX + 0x18);
  if (uVar1 != 0) {
    FUN_009a0940(param_1);
    _sprintf(local_104,"%d",(uint)uVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
    FUN_005c53f0(in_ECX + 8);
  }
  return;
}

