// FUN_005df0c0 @ 005df0c0  (requested 005DF0C0, first bytes: 55 8B EC 83 E4 F8 81 EC)


void FUN_005df0c0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  char local_108 [260];
  
  FUN_009a0940(param_1);
  local_114 = *(undefined4 *)(in_ECX + 0x40);
  local_110 = *(undefined4 *)(in_ECX + 0x44);
  FUN_0099f020(&local_114);
  FUN_004013e0(param_1);
  if (0 < (int)(*(int *)(in_ECX + 0x68) - *(int *)(in_ECX + 100) & 0xfffffffcU)) {
    FUN_0043cd10(in_ECX + 100,0);
  }
  if (0 < *(int *)(in_ECX + 0x7c)) {
    FUN_00409c60(param_1);
  }
  uVar1 = *(undefined4 *)(in_ECX + 0x8c);
  FUN_009a0940(param_1);
  local_10c = 0xc;
  _sprintf(local_108,"%d",uVar1);
  FUN_0099ff90(param_1);
  FUN_004013e0(param_1);
  if (*(char *)(in_ECX + 0x88) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  if (*(char *)(in_ECX + 0x89) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  if (*(char *)(in_ECX + 0x8a) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  if (*(char *)(in_ECX + 0x8b) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  FUN_009a2520(param_1);
  return;
}

