// FUN_00a3ae80 @ 00a3ae80 body=[[00a3ae80, 00a3aefd]]


void FUN_00a3ae80(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  
  if (DAT_01109b64 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00a3aefc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_0132ce68 + 4))();
    return;
  }
  piVar1 = *(int **)(*(int *)(DAT_01109b64 + 8) + (param_1 % *(uint *)(DAT_01109b64 + 4)) * 4);
  do {
    if (piVar1 == (int *)0x0) {
LAB_00a3aeaf:
      (**(code **)(*DAT_0132ce68 + 4))(param_1,param_2,param_3,param_4);
      return;
    }
    puVar2 = (uint *)*piVar1;
    if (*puVar2 == param_1) {
      if (puVar2 != (uint *)0x0) {
        (**(code **)(*(int *)puVar2[1] + 4))(param_1,param_2,param_3,param_4);
        return;
      }
      goto LAB_00a3aeaf;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}

