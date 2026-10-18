// FUN_007c2eb0 @ 007c2eb0 body=[[007c2eb0, 007c2edc] [007c2ee0, 007c2f42] [007c2f46, 007c2f8f]]


void FUN_007c2eb0(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  void **ppvVar2;
  int *piVar3;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  iVar1 = *param_3;
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while( true ) {
    ExceptionList = ppvVar2;
    if (iVar1 == 0) {
      ExceptionList = local_10;
      return;
    }
    piVar3 = (int *)*param_3;
    *param_3 = piVar3[2];
    iVar1 = *piVar3;
    if (*(int *)(iVar1 + 0x28) != param_2) break;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("poplistbutton",0xd);
    local_8 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 0x20) + 0x34))(local_2c);
    (**(code **)(*piVar3 + 0x48))(2);
    local_8 = 0xffffffff;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if ((((int *)*param_3 != (int *)0x0) && (*(char *)(iVar1 + 0x3c) != '\0')) &&
       (*(int *)(*(int *)*param_3 + 0x28) == param_2 + 1)) {
      FUN_007c2eb0(param_1,param_2 + 1,param_3);
    }
    iVar1 = *param_3;
    ppvVar2 = ExceptionList;
  }
  ExceptionList = local_10;
  return;
}

