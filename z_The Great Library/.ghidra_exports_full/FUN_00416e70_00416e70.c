// FUN_00416e70 @ 00416e70 body=[[00416e70, 00416f3f]]


/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_00416e70(undefined4 *param_1)

{
  uint *puVar1;
  void **ppvVar2;
  void **ppvVar3;
  int local_18;
  void *local_14 [4];
  
  local_14[2] = &LAB_00b4dcee;
  local_14[1] = ExceptionList;
  ExceptionList = local_14 + 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = param_1 + 4;
  *puVar1 = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_14[3] = (void *)0x2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_004bf300(4);
  local_14[0] = (void *)0x0;
  local_18 = 4;
  do {
    ppvVar2 = (void **)param_1[5];
    if (local_14 < ppvVar2) {
      ppvVar3 = (void **)*puVar1;
      if (local_14 < ppvVar3) goto LAB_00416f0d;
      if (ppvVar2 == (void **)param_1[6]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[5] =
             *(undefined4 *)(*puVar1 + ((int)local_14 - (int)ppvVar3 >> 2) * 4);
      }
      param_1[5] = param_1[5] + 4;
    }
    else {
LAB_00416f0d:
      if (ppvVar2 == (void **)param_1[6]) {
        FUN_00a513f0();
      }
      if ((undefined4 *)param_1[5] != (undefined4 *)0x0) {
        *(undefined4 *)param_1[5] = 0;
      }
      param_1[5] = param_1[5] + 4;
    }
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      ExceptionList = local_14[1];
      return param_1;
    }
  } while( true );
}

