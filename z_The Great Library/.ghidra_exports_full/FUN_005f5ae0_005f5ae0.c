// FUN_005f5ae0 @ 005f5ae0 body=[[005f5ae0, 005f5b29]]


void FUN_005f5ae0(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_004b9770();
  }
  else {
    uVar1 = FUN_004b9510();
    *(undefined4 *)(in_ECX + 0x14) = uVar1;
    FUN_004b9770();
  }
  return;
}

