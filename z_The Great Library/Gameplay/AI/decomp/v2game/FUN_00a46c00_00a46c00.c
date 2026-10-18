// FUN_00a46c00 @ 00a46c00 body=[[00a46c00, 00a46cd4] [00a46cf2, 00a46d2a]]


undefined4 * FUN_00a46c00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int unaff_EDI;
  int local_58;
  undefined4 local_54 [6];
  int *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined **local_24 [3];
  char *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b410a0;
  local_10 = ExceptionList;
  puVar4 = *(undefined4 **)(unaff_EDI + 4);
  if (*(char *)((int)puVar4[1] + 0x29) == '\0') {
    puVar1 = (undefined4 *)puVar4[1];
    do {
      if ((int)puVar1[3] < *param_1) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x29) == '\0');
  }
  if ((puVar4 != *(undefined4 **)(unaff_EDI + 4)) && ((int)puVar4[3] <= *param_1)) {
    return puVar4 + 4;
  }
  local_3c = (int *)0x0;
  ExceptionList = &local_10;
  piVar3 = (int *)FUN_00aae9af(8);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    *piVar3 = 0;
    *piVar3 = (int)&local_3c;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0;
    local_58 = *param_1;
    local_3c = piVar3;
    FUN_00a46fd0(local_54,&local_3c);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00a47900(&local_58);
    FUN_00a47520(unaff_EDI,puVar4);
    FUN_0098bf40();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_18[0] = (char *)0x0;
  std::exception::exception((exception *)local_24,local_18);
  local_24[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_24,&DAT_00e6fb20);
}

