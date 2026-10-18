// FUN_00405d50 @ 00405d50 body=[[00405d50, 00405db8]]


void FUN_00405d50(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_004063e0();
  (**(code **)(**(int **)(unaff_ESI + 0x1d0) + 0x40))();
  piVar1 = (int *)FUN_005c2ad0(param_1);
  iVar2 = (**(code **)(*piVar1 + 0x48))();
  (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x10))(iVar2);
  *(int *)(unaff_ESI + 8) = iVar2;
  *(undefined4 *)(iVar2 + 0x144) = param_2;
  (**(code **)(**(int **)(unaff_ESI + 8) + 0x34))();
  (**(code **)(*(int *)(unaff_ESI + 0x50) + 0x20))(*(undefined4 *)(unaff_ESI + 8));
  return;
}

