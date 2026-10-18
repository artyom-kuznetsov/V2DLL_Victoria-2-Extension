// FUN_004f6210 @ 004f6210 body=[[004f6210, 004f629c]]


void FUN_004f6210(void)

{
  undefined4 *puVar1;
  _Locimp *p_Var2;
  int in_ECX;
  _Lockit local_c [4];
  int local_8;
  
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0x201;
  *(undefined4 *)(in_ECX + 0x18) = 6;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  FUN_00401120(0,0);
  puVar1 = (undefined4 *)FUN_00aae9af(4);
  if (puVar1 != (undefined4 *)0x0) {
    p_Var2 = std::locale::_Init();
    *puVar1 = p_Var2;
    local_8 = FUN_00aad69f();
    std::_Lockit::_Lockit(local_c,0);
    if (*(int *)(local_8 + 4) != -1) {
      *(int *)(local_8 + 4) = *(int *)(local_8 + 4) + 1;
    }
    FUN_00aad9f1();
    *(undefined4 **)(in_ECX + 0x30) = puVar1;
    return;
  }
  *(undefined4 *)(in_ECX + 0x30) = 0;
  return;
}

