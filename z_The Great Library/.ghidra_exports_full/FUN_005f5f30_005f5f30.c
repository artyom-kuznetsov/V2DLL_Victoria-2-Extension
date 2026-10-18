// FUN_005f5f30 @ 005f5f30 body=[[005f5f30, 005f5fc5]]


void FUN_005f5f30(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_2 == 0x4c6) {
    FUN_00401470();
    FUN_0098fc50();
    FUN_004012f0();
  }
  else if (param_2 == 0x933) {
    FUN_009a1d40();
  }
  else if (param_2 == 0x934) {
    FUN_00401470();
    FUN_0098fc50();
    FUN_009885d0();
    uVar1 = FUN_00976f50();
    *(undefined4 *)(in_ECX + 0x40) = uVar1;
  }
  return;
}

