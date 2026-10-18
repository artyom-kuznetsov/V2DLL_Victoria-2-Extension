// FUN_0067f5b0 @ 0067f5b0 body=[[0067f5b0, 0067f659] [0067f725, 0067f78c]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0067f5b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb8983;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0067e1c0(param_1);
  FUN_005ee5b0();
  (**(code **)(*(int *)param_1[0x2c9] + 0x100))();
  DAT_00f0971c = 1;
  DAT_00f096cc = 1;
  DAT_00f09720 = 1;
  DAT_00f096c4 = 1;
  _DAT_00f09580 = 1;
  *(undefined1 *)(param_1 + 0x344) = 1;
  FUN_00682b40(param_1);
  local_8 = 0;
  (**(code **)(*param_1 + 0xc))(param_2);
  iVar4 = DAT_012588e8;
  local_8 = 0xffffffff;
  piVar6 = *(int **)(DAT_012588e8 + 0xadc);
  puVar5 = (uint *)(DAT_012588e8 + 0xadc);
  while (((int *)*puVar5 <= piVar6 && (piVar6 < *(int **)(iVar4 + 0xae0)))) {
    iVar1 = *piVar6;
    piVar6 = piVar6 + 1;
    FUN_00520150(iVar1);
    FUN_00530e40(iVar1,0);
    FUN_0052fcd0(iVar1,0);
    puVar2 = *(undefined4 **)(iVar1 + 0x7b4);
    while (puVar2 != (undefined4 *)0x0) {
      uVar3 = *puVar2;
      puVar2 = (undefined4 *)puVar2[2];
      FUN_005da160(uVar3);
    }
  }
  FUN_0048d720();
  FUN_0068d250(param_1,0);
  FUN_0068e390(param_1);
  ExceptionList = local_10;
  return;
}

