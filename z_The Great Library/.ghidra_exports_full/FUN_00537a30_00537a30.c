// FUN_00537a30 @ 00537a30 body=[[00537a30, 00537abf]]


void FUN_00537a30(int param_1,undefined1 *param_2)

{
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b734d1;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  if (*(char *)(param_1 + 0x12d0) == '\0') {
    iVar1 = 3;
  }
  else if (*(char *)(param_1 + 0x31) == '\0') {
    iVar1 = (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 < *(int *)(param_1 + 0x1404)) + 1
    ;
  }
  else {
    iVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00537ab9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&PTR_LAB_00538028)[iVar1])();
  return;
}

