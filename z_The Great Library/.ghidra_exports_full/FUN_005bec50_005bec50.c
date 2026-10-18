// FUN_005bec50 @ 005bec50 body=[[005bec50, 005bee15]]


void FUN_005bec50(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a0940(param_1);
  FUN_0099f020(in_ECX + 8);
  FUN_009a0940(param_1);
  FUN_0099f770(param_1,0);
  iVar2 = *(int *)(in_ECX + 0x30);
  if (iVar2 != 0) {
    local_114 = *(undefined4 *)(iVar2 + 8);
    local_110 = *(undefined4 *)(iVar2 + 0xc);
    FUN_009a0940(param_1);
    FUN_0099f020(&local_114);
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x40);
  local_114 = uVar3;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_10c = 0xc;
    _sprintf(local_108,"%d",uVar3);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  uVar3 = *(undefined4 *)(in_ECX + 0x3c);
  local_114 = uVar3;
  FUN_009a0940(param_1);
  if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_0098fad0();
  }
  else {
    local_10c = 0xc;
    _sprintf(local_108,"%d",uVar3);
  }
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_0099f1e0(*(int *)(in_ECX + 0x34));
  }
  if ((*(int *)(in_ECX + 0x74) != 0) && (*(int *)(*(int *)(in_ECX + 0x74) + 0x74) != 0)) {
    FUN_0099f1e0(*(undefined4 *)(in_ECX + 0x84));
  }
  uVar1 = *(ushort *)(in_ECX + 0x88);
  if (uVar1 != 0) {
    FUN_009a0940(param_1);
    local_10c = 0xc;
    _sprintf(local_108,"%d",(uint)uVar1);
    FUN_0099ff90(param_1);
    FUN_004013e0(param_1);
  }
  FUN_009a0940(param_1);
  FUN_004013e0(param_1);
  FUN_004013e0(param_1);
  return;
}

