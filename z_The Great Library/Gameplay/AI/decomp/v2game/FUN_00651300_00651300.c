// FUN_00651300 @ 00651300 body=[[00651300, 0065139a] [0065139e, 006513bc] [006513c0, 00651410] [00651414, 0065143a]]


void FUN_00651300(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4c6f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x1dba) != '\0') {
    ExceptionList = &local_10;
    FUN_0064f570();
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("chat_message",0xc);
  local_8 = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_30);
  iVar2 = (**(code **)(*piVar1 + 0x40))(local_4c);
  *(undefined1 *)(iVar2 + 0x4d) = 0;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_8 = 0xffffffff;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("chat_window",0xb);
  local_8 = 2;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x1630) + 0x6c))(local_4c);
  (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  if (*(undefined4 **)(in_ECX + 0x1644) != (undefined4 *)0x0) {
    (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x1644) + 0x60))(local_14);
  }
  ExceptionList = local_10;
  return;
}

