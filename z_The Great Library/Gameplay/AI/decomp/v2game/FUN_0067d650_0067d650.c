// FUN_0067d650 @ 0067d650 body=[[0067d650, 0067d6a8]]


void FUN_0067d650(undefined4 param_1,int param_2)

{
  int in_ECX;
  undefined4 *local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00bb8828;
  pvStack_14 = ExceptionList;
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  if (param_2 == 0x703) {
    ExceptionList = &pvStack_14;
    FUN_005e5a20(param_1,&local_28);
  }
  *(undefined4 *)(in_ECX + 8) = *local_28;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_28);
}

