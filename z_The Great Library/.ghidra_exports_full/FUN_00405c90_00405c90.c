// FUN_00405c90 @ 00405c90 body=[[00405c90, 00405d4e]]


void FUN_00405c90(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  undefined1 local_48 [48];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_004063e0();
  (**(code **)(**(int **)(unaff_ESI + 0x1d0) + 0x40))();
  piVar1 = (int *)FUN_005c2ad0(param_2);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x10))(iVar2);
  *(int *)(unaff_ESI + 4) = iVar2;
  *(undefined4 *)(iVar2 + 0x158) = param_3;
  FUN_00408b00();
  FUN_00408b00();
  local_18 = *param_1;
  local_10 = param_1[1];
  local_14 = 0x3d99999a;
  local_c = DAT_00f092fc;
  (**(code **)(**(int **)(unaff_ESI + 4) + 0xa4))(local_48);
  (**(code **)(**(int **)(unaff_ESI + 4) + 0x34))();
  (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x20))(*(undefined4 *)(unaff_ESI + 4));
  return;
}

