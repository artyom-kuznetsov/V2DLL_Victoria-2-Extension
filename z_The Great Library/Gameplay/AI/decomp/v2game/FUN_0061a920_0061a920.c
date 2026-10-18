// FUN_0061a920 @ 0061a920 body=[[0061a920, 0061a988] [0061a98c, 0061a9eb]]


bool FUN_0061a920(void)

{
  char cVar1;
  code *pcVar2;
  int *in_ECX;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bbc108;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("AgreeButton",0xb);
  local_8 = 0;
  local_14 = (int *)(**(code **)(*(int *)in_ECX[1] + 0x34))(local_30);
  local_8 = 0xffffffff;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  cVar1 = FUN_00911760(0);
  if (cVar1 == '\0') {
    pcVar2 = *(code **)(*local_14 + 0xbc);
  }
  else {
    pcVar2 = *(code **)(*local_14 + 0xb8);
  }
  (*pcVar2)();
  cVar1 = (**(code **)(*in_ECX + 0x20))();
  if (cVar1 == '\0') {
    ExceptionList = local_10;
    return false;
  }
  ExceptionList = local_10;
  return (char)in_ECX[0x19] == '\0';
}

