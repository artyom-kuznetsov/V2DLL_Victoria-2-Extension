// FUN_00464a50 @ 00464a50 body=[[00464a50, 00464b24]]


void FUN_00464a50(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  char local_108 [260];
  
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  FUN_00465500(param_1,in_ECX + 0x24);
  FUN_00465780(in_ECX + 0x34);
  FUN_004659f0(param_1,in_ECX + 0x44);
  FUN_00465cb0(param_1,in_ECX + 0x54);
  if (*(int *)(in_ECX + 0x74) != 0) {
    FUN_009a0940(param_1);
    FUN_0099f770(param_1,0);
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x80);
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    _sprintf(local_108,"%d",uVar1);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  return;
}

