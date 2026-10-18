// FUN_009ea0a0 @ 009ea0a0 body=[[009ea0a0, 009ea0dc] [009ea0e6, 009ea13c] [009ea140, 009ea148] [009ea152, 009ea173]]


void FUN_009ea0a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5a2b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3c8c0;
  local_8 = 1;
  if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (DAT_00f20c5c != (int *)0x0) {
    piVar2 = &DAT_00f20c60;
    do {
      iVar3 = 0x200;
      do {
        piVar1 = (int *)*piVar2;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
          *piVar2 = 0;
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    } while ((int)piVar2 < 0xf40c60);
    (**(code **)(*DAT_00f20c5c + 8))(DAT_00f20c5c);
  }
  if (param_1[3] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[3]);
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_00e3af08;
  ExceptionList = local_10;
  return;
}

