// FUN_00869820 @ 00869820 body=[[00869820, 0086988d]]


void FUN_00869820(undefined4 param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b427c8;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  uVar1 = __alldiv((longlong)*param_2 * (longlong)*param_3,1000);
  puVar2 = (undefined4 *)FUN_00aae9af();
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = uVar1;
  }
  local_8 = 0;
  FUN_00870b40();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(0);
}

