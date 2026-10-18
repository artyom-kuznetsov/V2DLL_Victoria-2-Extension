// FUN_005c7340 @ 005c7340 body=[[005c7340, 005c743a]]


void FUN_005c7340(void)

{
  int *in_ECX;
  undefined4 local_3c;
  int local_38 [8];
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  pvStack_14 = ExceptionList;
  if ((in_ECX[2] == 0) && (in_ECX[3] == 0)) {
    local_38[0] = DAT_00f096cc;
    local_3c = 0x28;
    DAT_00f096cc = DAT_00f096cc + 1;
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x18))(&local_3c);
  }
  else {
    ExceptionList = &pvStack_14;
    (**(code **)(*in_ECX + 0x18))(in_ECX + 2);
  }
  if (in_ECX[0x35] != 0) {
    *(undefined1 *)(in_ECX + 0x10) = 0;
    FUN_005cae80(in_ECX + -2);
    FUN_005cb2c0(in_ECX[0x35]);
    if (in_ECX[0x39] < 1) {
      if ((in_ECX[0x1b] != 0) && (in_ECX[0x41] != 0)) {
        FUN_009885d0();
        puStack_10 = (undefined1 *)0x0;
        (**(code **)(*(int *)in_ECX[0x41] + 0x124))(local_38,0);
        puStack_10 = (undefined1 *)0xffffffff;
        FUN_00408ad0();
      }
    }
    else {
      FUN_005d1fc0();
    }
  }
  FUN_005c68c0(in_ECX + -2);
  ExceptionList = pvStack_18;
  return;
}

