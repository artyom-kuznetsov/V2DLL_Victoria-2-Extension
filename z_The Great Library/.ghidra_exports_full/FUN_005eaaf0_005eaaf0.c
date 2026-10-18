// FUN_005eaaf0 @ 005eaaf0 body=[[005eaaf0, 005eab4d]]


void FUN_005eaaf0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_00520dd0();
  }
  else {
    uVar1 = FUN_00520de0();
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    FUN_00520dd0();
  }
  return;
}

