// FUN_00919d60 @ 00919d60 body=[[00919d60, 00919da4]]


void FUN_00919d60(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x10);
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  uVar3 = *(undefined4 *)(in_ECX + 8);
  uVar4 = *(undefined4 *)(in_ECX + 0xc);
  if (*(char *)(in_ECX + 0x30) == '\0') {
    uVar3 = *(undefined4 *)(in_ECX + 0x10);
    uVar4 = *(undefined4 *)(in_ECX + 0x14);
    uVar1 = *(undefined4 *)(in_ECX + 8);
    uVar2 = *(undefined4 *)(in_ECX + 0xc);
  }
  FUN_0092aae0(uVar3,uVar4,uVar1,uVar2);
  FUN_00913020(param_1);
  return;
}

