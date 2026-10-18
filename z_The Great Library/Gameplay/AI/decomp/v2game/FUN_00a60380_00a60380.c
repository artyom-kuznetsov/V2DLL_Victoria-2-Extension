// FUN_00a60380 @ 00a60380 body=[[00a60380, 00a603b3]]


void FUN_00a60380(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  
  iVar1 = *in_ECX;
  uVar3 = 1;
  uVar2 = FUN_00a60430(*(undefined4 *)(param_3 + 0xc),*(undefined2 *)(param_3 + 0x10));
  (**(code **)(iVar1 + 0x14))(param_1,param_2,uVar2,uVar3);
  return;
}

