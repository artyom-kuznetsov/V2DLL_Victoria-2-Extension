// FUN_004d9250 @ 004d9250 body=[[004d9250, 004d92eb] [004d92ef, 004d930a]]


undefined1 * FUN_004d9250(undefined1 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  undefined1 local_60 [24];
  int local_48;
  undefined4 local_30 [5];
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b82369;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_14 = 1;
  FUN_0044bc60(local_60);
  local_8 = 1;
  if (in_ECX == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(in_ECX + 8);
  }
  piVar1 = (int *)(local_48 + *(int *)(piVar3[1] + 0x24) * 8);
  *piVar1 = *piVar1 + *piVar3;
  uVar2 = FUN_0044c410(local_30);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00448aa0(uVar2,0,0xffffffff);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  FUN_0044be00();
  ExceptionList = local_10;
  return param_1;
}

