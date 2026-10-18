// FUN_00a163a0 @ 00a163a0 body=[[00a163a0, 00a1660d] [00a16611, 00a16620]]


void FUN_00a163a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  char local_12c [256];
  undefined4 local_2c [5];
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3def8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00a122d0(0xeb,in_ECX + 8);
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_009a0560(param_1);
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x20);
  FUN_009a0940(param_1);
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x1c);
  FUN_009a0940(param_1);
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x24);
  FUN_009a0940(param_1);
  _sprintf(local_12c,"%u",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar2 = *(undefined4 *)(in_ECX + 0x28);
  FUN_009a0940(param_1);
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  uVar2 = *(undefined4 *)(in_ECX + 0x68);
  FUN_009a0940(param_1);
  _sprintf(local_12c,"%d",uVar2);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  cVar1 = *(char *)(in_ECX + 0x6c);
  FUN_009a0940(param_1);
  puVar3 = &DAT_00dfbbd0;
  if (cVar1 == '\0') {
    puVar3 = &DAT_00dfbbd4;
  }
  _sprintf(local_12c,"%s",puVar3);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_00a158a0(in_ECX + 0x8c,local_2c);
  local_8 = 0;
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return;
}

