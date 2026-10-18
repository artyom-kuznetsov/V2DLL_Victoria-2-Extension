// FUN_00a16630 @ 00a16630 body=[[00a16630, 00a1687e]]


void FUN_00a16630(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int in_ECX;
  undefined1 local_40 [16];
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_24 [20];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41128;
  local_10 = ExceptionList;
  switch(param_2) {
  case 0x1a:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x2c,0);
    ExceptionList = local_10;
    return;
  default:
    ExceptionList = &local_10;
    FUN_009a0f40();
    ExceptionList = local_10;
    return;
  case 0xc9:
    ExceptionList = &local_10;
    FUN_009a1c10();
    ExceptionList = local_10;
    return;
  case 0xcc:
    ExceptionList = &local_10;
    FUN_009a1c10();
    *(undefined4 *)(in_ECX + 0x20) = 0;
    ExceptionList = local_10;
    return;
  case 0xcd:
    ExceptionList = &local_10;
    FUN_009a1c70();
    ExceptionList = local_10;
    return;
  case 0xd4:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x70,0);
    ExceptionList = local_10;
    return;
  case 0xd9:
    ExceptionList = &local_10;
    FUN_009a1c10();
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    ExceptionList = local_10;
    return;
  case 0xe7:
    break;
  case 0xeb:
    ExceptionList = &local_10;
    FUN_0045be80(param_1,in_ECX + 8);
    ExceptionList = local_10;
    return;
  case 0xf0:
    ExceptionList = &local_10;
    FUN_009a1750(in_ECX + 0x48,0);
    ExceptionList = local_10;
    return;
  case 0xf3:
    ExceptionList = &local_10;
    FUN_009a1c10();
    ExceptionList = local_10;
    return;
  case 0x10b:
    ExceptionList = &local_10;
    FUN_009a1bb0(in_ECX + 0x6c);
    ExceptionList = local_10;
    return;
  case 0x10c:
    local_2c = 0xf;
    local_30 = 0;
    local_40[0] = 0;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_009a1750(local_40,0);
    puVar3 = (undefined8 *)FUN_009fa790(local_24);
    *(undefined8 *)(in_ECX + 0x8c) = *puVar3;
    *(undefined8 *)(in_ECX + 0x94) = puVar3[1];
    *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(puVar3 + 2);
    FUN_00408ad0();
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x3c);
  if (iVar1 != 0) {
    uVar2 = FUN_009d6e00();
    *(undefined4 *)(in_ECX + 0x18) = uVar2;
    FUN_009a1550(param_1,uVar2);
    ExceptionList = local_10;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  FUN_009a1550(param_1,0);
  ExceptionList = local_10;
  return;
}

