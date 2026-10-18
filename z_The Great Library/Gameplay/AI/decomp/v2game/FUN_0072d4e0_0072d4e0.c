// FUN_0072d4e0 @ 0072d4e0 body=[[0072d4e0, 0072d562] [0072d566, 0072d57c]]


int * FUN_0072d4e0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3f003;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = DAT_01268fec;
  param_1[2] = DAT_01268ff0;
  param_1[8] = 0xf;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  local_8 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    param_1[1] = *(int *)(param_2 + 8);
    param_1[2] = iVar1;
    uVar2 = FUN_00632170(param_2);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00408ed0(uVar2,0,0xffffffff);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c);
    }
    *param_1 = param_2;
  }
  ExceptionList = local_10;
  return param_1;
}

