// FUN_009ecbb0 @ 009ecbb0 body=[[009ecbb0, 009ecd49] [009ecd4d, 009ecd5e]]


void FUN_009ecbb0(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  char *_Format;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  if (param_2 < 0xad) {
    if (param_2 == 0xac) {
      ExceptionList = &local_10;
      FUN_009a1810();
      *(undefined1 *)(in_ECX + 0x9c) = 0;
      ExceptionList = local_10;
      return;
    }
    switch(param_2) {
    case 0x35:
    case 0xa9:
      ExceptionList = &local_10;
      FUN_009a1750(in_ECX + 0x6c,0);
      ExceptionList = local_10;
      return;
    case 0x4b:
      ExceptionList = &local_10;
      FUN_009a1e10();
      *(undefined1 *)(in_ECX + 0x9c) = 1;
      ExceptionList = local_10;
      return;
    case 0x5c:
      ExceptionList = &local_10;
      FUN_009a1de0();
      ExceptionList = local_10;
      return;
    }
switchD_009ecbf6_caseD_36:
    ExceptionList = &local_10;
    FUN_009ecfa0(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  if (param_2 == 0xbf) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_2c,0);
    uVar1 = FUN_00a581e0();
    *(undefined4 *)(in_ECX + 0xa4) = uVar1;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  else {
    if (param_2 == 0x123) {
      iVar2 = in_ECX + 0xa8;
      _Format = "%i";
    }
    else {
      if (param_2 != 0x17e) goto switchD_009ecbf6_caseD_36;
      iVar2 = in_ECX + 0xac;
      _Format = "%f";
    }
    ExceptionList = &local_10;
    iVar2 = FID_conflict__sscanf((char *)(param_1 + 0x22c),_Format,iVar2);
    if (iVar2 == 0) {
      FUN_009a1140();
      ExceptionList = local_10;
      return;
    }
  }
  ExceptionList = local_10;
  return;
}

