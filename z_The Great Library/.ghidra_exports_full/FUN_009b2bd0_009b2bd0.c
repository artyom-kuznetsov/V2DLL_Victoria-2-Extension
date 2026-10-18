// FUN_009b2bd0 @ 009b2bd0 body=[[009b2bd0, 009b2c88] [009b2c92, 009b2ca3]]


void FUN_009b2bd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3a558;
  local_8 = 0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  for (piVar3 = param_1; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
    if (*piVar3 == 0) {
      local_14 = 0;
    }
    else {
      local_14 = *piVar3 + 0x1c;
    }
    iVar1 = in_ECX[0x19];
    piVar4 = (int *)FUN_00aae9af(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = local_14;
      piVar4[1] = iVar1;
      piVar4[2] = 0;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    iVar2 = in_ECX[0x1a];
    in_ECX[0x19] = (int)piVar4;
    in_ECX[0x1a] = iVar2 + 1;
    if (iVar2 == 0) {
      in_ECX[0x18] = (int)piVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
    (**(code **)(in_ECX[0x1c] + 0x10))(*piVar3,1);
  }
  (**(code **)(*in_ECX + 0x6c))();
  if (param_1 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return;
}

