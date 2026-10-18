// FUN_009a41c0 @ 009a41c0 body=[[009a41c0, 009a44c5]]


int FUN_009a41c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b5288e;
  local_10 = ExceptionList;
  switch(param_2) {
  case 0x7c:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x29c);
    local_8 = 0;
    if (iVar1 == 0) {
LAB_009a4473:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_009f1d30(iVar1,*(undefined4 *)(in_ECX + 0x24));
    }
    break;
  default:
    ExceptionList = &local_10;
    FUN_009a0f40();
    ExceptionList = local_10;
    return 0;
  case 0x82:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x110);
    if (iVar1 != 0) {
      iVar1 = FUN_00a5dd80(in_ECX + -0xc);
      goto LAB_009a4478;
    }
    goto LAB_009a4219;
  case 0x89:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x1a8);
    local_8 = 1;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a56810(iVar1,*(undefined4 *)(in_ECX + 0x24),in_ECX + -0xc);
    break;
  case 0x98:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x2a4);
    local_8 = 2;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_009cd7c0(iVar1);
    break;
  case 0x9d:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xd4);
    local_8 = 3;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a5ad10(iVar1,*(undefined4 *)(in_ECX + 0x24));
    break;
  case 0xa0:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xd4);
    local_8 = 4;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a5b670(iVar1,*(undefined4 *)(in_ECX + 0x24));
    break;
  case 0xa6:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x19c);
    local_8 = 8;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a59570(iVar1,in_ECX + -0xc);
    break;
  case 0xa7:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x108);
    if (iVar1 != 0) {
      iVar1 = FUN_00a582e0(*(undefined4 *)(in_ECX + 0x24),in_ECX + -0xc);
      goto LAB_009a4478;
    }
    goto LAB_009a4219;
  case 0xa8:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x170);
    local_8 = 5;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a5c8d0(iVar1,*(undefined4 *)(in_ECX + 0x24),in_ECX + -0xc);
    break;
  case 0xaf:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x6c);
    if (iVar1 != 0) {
      iVar1 = FUN_00a5a440();
      goto LAB_009a4478;
    }
    goto LAB_009a4219;
  case 0xb0:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x88);
    if (iVar1 != 0) {
      iVar1 = FUN_00a5c400();
      goto LAB_009a4478;
    }
    goto LAB_009a4219;
  case 0xb3:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xb0);
    local_8 = 6;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_009eca80(iVar1);
    break;
  case 0xb6:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x14c);
    local_8 = 7;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a5b900(iVar1,in_ECX + -0xc);
    break;
  case 0x147:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xe4);
    if (iVar1 != 0) {
      iVar1 = FUN_00a58d40(*(undefined4 *)(in_ECX + 0x24),in_ECX + -0xc);
      goto LAB_009a4478;
    }
LAB_009a4219:
    iVar1 = 0;
    goto LAB_009a4478;
  case 0x176:
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0xa0);
    local_8 = 9;
    if (iVar1 == 0) goto LAB_009a4473;
    iVar1 = FUN_00a58950(iVar1);
  }
  local_8 = 0xffffffff;
LAB_009a4478:
  if (iVar1 != 0) {
    FUN_00408ed0(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 0x14,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}

