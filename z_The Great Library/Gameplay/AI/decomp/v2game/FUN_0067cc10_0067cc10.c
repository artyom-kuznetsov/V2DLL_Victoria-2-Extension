// FUN_0067cc10 @ 0067cc10 body=[[0067cc10, 0067cde4]]


undefined4 * FUN_0067cc10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5312a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009c3c70(param_1,param_2,DAT_01258a80,in_EDX + 0x6c,param_4,
               CONCAT44((float)*(int *)(in_EDX + 0x98),(float)*(int *)(in_EDX + 0x94)),0,1,
               DAT_00f092fc,*(undefined4 *)(in_EDX + 0xa4),0,*(undefined4 *)(param_2 + 0x6b9bc),
               *(undefined4 *)(param_2 + 0x6b9c0));
  uVar3 = DAT_012589b8;
  iVar2 = DAT_012588dc;
  local_8 = 0;
  param_1[0x42] = DAT_012588dc;
  *param_1 = CEU3Minimap::vftable;
  param_1[0x15] = CEU3Minimap::vftable;
  param_1[0x3f] = uVar3;
  param_1[0x40] = param_3;
  param_1[0x41] = param_4;
  param_1[0x43] = *(undefined4 *)(iVar2 + 4);
  iVar2 = FUN_00996850();
  uVar3 = DAT_00f092fc;
  param_1[0x49] = iVar2;
  *(undefined4 *)(iVar2 + 0x1134) = uVar3;
  (**(code **)(**(int **)(iVar2 + 0x16c) + 0x2c))(*(int **)(iVar2 + 0x16c),uVar3);
  (**(code **)(*(int *)param_1[0x49] + 0x34))();
  uVar3 = FUN_00996850();
  param_1[0x4a] = uVar3;
  uVar3 = DAT_00f092fc;
  iVar2 = param_1[0x49];
  *(undefined4 *)(iVar2 + 0x1134) = DAT_00f092fc;
  piVar1 = *(int **)(iVar2 + 0x16c);
  (**(code **)(*piVar1 + 0x2c))(piVar1,uVar3);
  (**(code **)(*(int *)param_1[0x4a] + 0x34))();
  iVar2 = *(int *)(DAT_0125870c + 0x2ac0);
  param_1[0x47] = (float)*(int *)(DAT_0125870c + 0x2abc);
  param_1[0x48] = (float)iVar2;
  ExceptionList = local_10;
  return param_1;
}

