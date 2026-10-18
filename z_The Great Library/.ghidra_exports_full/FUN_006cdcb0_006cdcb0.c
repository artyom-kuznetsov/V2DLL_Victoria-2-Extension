// FUN_006cdcb0 @ 006cdcb0 body=[[006cdcb0, 006cdd99]]


void FUN_006cdcb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  
  FUN_00491020();
  FUN_00491020();
  cVar2 = FUN_00424660();
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  FUN_00491020();
  FUN_00491020();
  cVar2 = FUN_00424660();
  if (cVar2 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  FUN_00491020();
  FUN_00491020();
  cVar2 = FUN_00424660();
  if (cVar2 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return;
}

