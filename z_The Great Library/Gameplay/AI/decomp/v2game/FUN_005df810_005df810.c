// FUN_005df810 @ 005df810 body=[[005df810, 005df884]]


void FUN_005df810(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_009a0940(param_1);
  local_10 = *(undefined4 *)(in_ECX + 0x40);
  local_c = *(undefined4 *)(in_ECX + 0x44);
  FUN_0099f020(&local_10);
  FUN_004013e0(param_1);
  if (*(char *)(in_ECX + 100) != '\0') {
    FUN_009a0940(param_1);
    FUN_004013e0(param_1);
    FUN_004013e0(param_1);
  }
  FUN_009a2520(param_1);
  return;
}

