// FUN_008afe90 @ 008afe90 body=[[008afe90, 008aff3d]]


void FUN_008afe90(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  int extraout_ECX;
  
  if (param_2 < 0x4a2) {
    if (param_2 == 0x4a1) {
      (**(code **)(*(int *)(in_ECX + 0x28) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0x58) {
      (**(code **)(*(int *)(in_ECX + 0x98) + 0xc))(param_1);
      return;
    }
    if (param_2 == 0xd9) {
      uVar1 = FUN_008afde0();
      *(undefined4 *)(extraout_ECX + 0x24) = uVar1;
      return;
    }
    if (param_2 == 0x2c7) {
      (**(code **)(*(int *)(in_ECX + 0x7c) + 0xc))(param_1);
      return;
    }
  }
  else if (param_2 == 0x4a3) {
    (**(code **)(*(int *)(in_ECX + 0x44) + 0xc))(param_1);
  }
  else if (param_2 == 0x72a) {
    (**(code **)(*(int *)(in_ECX + 0x60) + 0xc))(param_1);
    return;
  }
  return;
}

