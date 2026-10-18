// FUN_00469dc0 @ 00469dc0 body=[[00469dc0, 00469ede]]


undefined4 FUN_00469dc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar2 = FUN_00467240();
  FUN_00465e90();
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4) + 0x84c);
  FUN_009790b0(iVar1);
  FUN_00464b30(uVar2,0);
  (**(code **)(**(int **)(iVar1 + 0x54) + 0x18))();
  FUN_00464b30(uVar2,0,3);
  FUN_00408ed0(*(int *)(iVar1 + 0x54) + 0xc,0,0xffffffff);
  FUN_00464b30(uVar2,0,2);
  FUN_00408ed0(*(int *)(param_1 + 0x30) + 0x10,0,0xffffffff);
  FUN_00464b30(uVar2,0,1);
  FUN_0041a080(param_1);
  FUN_00464b30(uVar2,0,0);
  FUN_00464bd0();
  return uVar2;
}

