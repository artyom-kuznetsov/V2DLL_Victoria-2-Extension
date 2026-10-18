// FUN_005df230 @ 005df230  (requested 005DF230, first bytes: 55 8B EC 8B 45 0C 3D 35)


void FUN_005df230(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 < 0x436) {
    if (param_2 == 0x435) {
      *(bool *)(in_ECX + 0x88) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 < 0x2ca) {
      if (param_2 == 0x2c9) {
        FUN_009a1c10();
        return;
      }
      if (param_2 == 0x19c) {
        FUN_00409810(param_1,in_ECX + 0x74);
        return;
      }
      if (param_2 == 0x297) {
        FUN_005e5a20(param_1,in_ECX + 100);
        return;
      }
    }
    else if (param_2 == 0x2f9) {
      FUN_0072d580();
      return;
    }
  }
  else {
    if (param_2 == 0x819) {
      *(bool *)(in_ECX + 0x89) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 == 0x820) {
      *(bool *)(in_ECX + 0x8a) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
    if (param_2 == 0x996) {
      *(bool *)(in_ECX + 0x8b) = *(int *)(param_1 + 0x228) == 0x29f;
      return;
    }
  }
  FUN_009a2620(param_1,param_2);
  return;
}

